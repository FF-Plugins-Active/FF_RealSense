// Fill out your copyright notice in the Description page of Project Settings.

#include "Rs_Thread.h"

// Custom Includes.
#include "Rs_Stream.h"

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

	if (StreamType == ERsStreamType::Color || StreamType == ERsStreamType::Depth || StreamType == ERsStreamType::Infrared || StreamType == ERsStreamType::QR)
	{
		int64 BufferSize = rs2_get_frame_data_size(First_Frame, NULL);

		if (BufferSize > 0)
		{
			FRealSenseTextureBuffer CurrentFrame;
			CurrentFrame.Buffer = (uint8_t*)(rs2_get_frame_data(First_Frame, NULL));
			CurrentFrame.BufferSize = BufferSize;

			if (StreamType == ERsStreamType::QR)
			{
				FString ZXing_Error = "";
				TArray<FZXingScanResult> Temp_Qr_Results;

				if (UFF_QR_ProcessorBPLibrary::ZXing_Decoder_Callback(Temp_Qr_Results, ZXing_Error, CurrentFrame.Buffer, FIntRect((int32)Parent_Actor->Size.X, (int32)Parent_Actor->Size.Y), ZXing::ImageFormat::BGRX))
				{
					CurrentFrame.QR_Params = Temp_Qr_Results;
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
				UE_LOG(LogTemp, Warning, TEXT("RealSense - RealSense frame queue overloaded."));
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