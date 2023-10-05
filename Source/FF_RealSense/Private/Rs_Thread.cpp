// Fill out your copyright notice in the Description page of Project Settings.

#include "Rs_Thread.h"

// Custom Includes.
#include "Rs_Stream.h"

THIRD_PARTY_INCLUDES_START
// ZXing Includes
#include "ImageView.h"
#include "DecodeHints.h"
#include "ReadBarcode.h"
#include "GTIN.h"
#include "MultiFormatWriter.h"
#include "BitMatrix.h"
THIRD_PARTY_INCLUDES_END

// Sets default values
FRs_Thread::FRs_Thread(ARs_Stream* In_Parent_Actor)
{
	Parent_Actor = In_Parent_Actor;
	RunnableThread = FRunnableThread::Create(this, *Parent_Actor->ThreadName);
}

FRs_Thread::~FRs_Thread()
{
	if (RunnableThread)
	{
		RunnableThread->Suspend(true);
		bStartThread = false;
		RunnableThread->Suspend(false);
		RunnableThread->Kill(true);
		RunnableThread->WaitForCompletion();
		delete RunnableThread;
	}
}

bool FRs_Thread::Init()
{
	bStartThread = true;
	StreamType = Parent_Actor->StreamType;
	return true;
}

void FRs_Thread::Stop()
{
	bStartThread = false;
}

uint32 FRs_Thread::Run()
{
	// Thread selector
	// FTaskTagScope Scope(ETaskTag::EGameThread);

	while (bStartThread)
	{
		this->Callback_Stream();
		
		FPlatformProcess::Sleep(Parent_Actor->Rate);
	}

	return 0;
}

void FRs_Thread::Toggle(bool bIsPaused)
{
	if (RunnableThread)
	{
		RunnableThread->Suspend(bIsPaused);
	}
}

void FRs_Thread::Callback_Stream()
{
	rs2_frame* Rs_Frames = rs2_pipeline_wait_for_frames(Parent_Actor->Rs_Pipeline, Parent_Actor->TimeOut, NULL);
	rs2_frame* First_Frame = rs2_extract_frame(Rs_Frames, 0, NULL);



	if (StreamType == ERsStreamType::Color || StreamType == ERsStreamType::Depth || StreamType == ERsStreamType::Infrared)
	{
		int64 BufferSize = rs2_get_frame_data_size(First_Frame, NULL);

		if (BufferSize > 0)
		{
			FRealSenseTextureBuffer CurrentFrame;
			CurrentFrame.Buffer = (uint8_t*)(rs2_get_frame_data(First_Frame, NULL));
			CurrentFrame.BufferSize = BufferSize;

			if (StreamType == ERsStreamType::Color && Parent_Actor->bEnableQr)
			{
				ZXing::ImageFormat ImageFormat = ZXing::ImageFormat::BGRX;
				ZXing::ImageView image
				{
					reinterpret_cast<uint8*>(CurrentFrame.Buffer), (int32)Parent_Actor->Size.X, (int32)Parent_Actor->Size.Y, ImageFormat
				};

				ZXing::DecodeHints hints;
				hints.setTextMode(ZXing::TextMode::HRI);
				hints.setEanAddOnSymbol(ZXing::EanAddOnSymbol::Read);
				auto Results = ZXing::ReadBarcodes(image, hints);
				if (!Results.empty())
				{
					for (int32 i = 0; i < Results.size(); i++)
					{
						FRealSenseQr Result;
						Result.QR_Text = FText::FromString(ANSI_TO_TCHAR(Results[i].text().c_str()));
						FVector2D TopLeft = FVector2D(Results[i].position().topLeft().x, Results[i].position().topLeft().y);
						FVector2D TopRight = FVector2D(Results[i].position().topRight().x, Results[i].position().topRight().y);
						FVector2D BottomLeft = FVector2D(Results[i].position().bottomLeft().x, Results[i].position().bottomLeft().y);
						FVector2D BottomRight = FVector2D(Results[i].position().bottomRight().x, Results[i].position().bottomRight().y);
						Result.QR_Points.Add(FVector2D(TopLeft));
						Result.QR_Points.Add(FVector2D(BottomLeft));
						Result.QR_Points.Add(FVector2D(BottomRight));
						Result.QR_Points.Add(FVector2D(TopRight));
						CurrentFrame.QR_Params.Add(Result);
					}
				}
			}

			if (!Parent_Actor->Rs_Circ_Queue_Frame.Enqueue(CurrentFrame))
			{
				UE_LOG(LogTemp, Warning, TEXT("RealSense - RealSense frame queue overloaded."));
			}
		}
	}

	if (StreamType == ERsStreamType::Distance)
	{
		if (rs2_is_frame_extendable_to(First_Frame, RS2_EXTENSION_DEPTH_FRAME, NULL) != 0)
		{
			FRealSenseTextureBuffer CurrentFrame;
			CurrentFrame.Distance = rs2_depth_frame_get_distance(First_Frame, Parent_Actor->Distance_Origin.X, Parent_Actor->Distance_Origin.Y, NULL);

			if (!Parent_Actor->Rs_Circ_Queue_Frame.Enqueue(CurrentFrame))
			{
				UE_LOG(LogTemp, Warning, TEXT("RealSense - RealSense distance queue overloaded."));
			}
		}
	}

	rs2_release_frame(First_Frame);
	rs2_release_frame(Rs_Frames);
}

/*
void Test()
{
	const std::chrono::steady_clock::duration StartTime = std::chrono::high_resolution_clock::now().time_since_epoch();
	while (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now().time_since_epoch() - StartTime).count() < 30)
	{
		UE_LOG(LogTemp, Warning, TEXT("Test Chrono"));
	}
}
*/