// Fill out your copyright notice in the Description page of Project Settings.

#include "Rs_Stream.h"

// Sets default values
ARs_Stream::ARs_Stream() : Rs_Circ_Queue_Frame(35), Rs_Circ_Queue_Distance(35)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARs_Stream::BeginPlay()
{
	this->Rs_Thread_Init();

	Super::BeginPlay();
}

void ARs_Stream::EndPlay(EEndPlayReason::Type Reason)
{
	this->Rs_Thread_Stop();

	Super::EndPlay(Reason);
}

// Called every frame
void ARs_Stream::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool ARs_Stream::Rs_Thread_Init()
{
	// Is FPS bigger than 30, use 30.
	if (InFPS < 30)
	{
		FPS = InFPS;
	}

	Rate = (float)1 / FPS;
	TimeOut = FMath::Floor(Rate * 1000);

	switch (StreamType)
	{
	case ERsStreamType::None:
		
		UE_LOG(LogTemp, Warning, TEXT("RealSense - Select a proper stream type to use."));
		return false;

	case ERsStreamType::Color:
		
		Size = FVector2D(1280, 800);
		ThreadName = "RealSense Stream Thread for Color";
		RsStreamType = RS2_STREAM_COLOR;
		RsFormat = RS2_FORMAT_BGRA8;
		break;
	
	case ERsStreamType::Infrared:
		
		Size = FVector2D(1280, 720);
		ThreadName = "RealSense Stream Thread for Infrared";
		RsStreamType = RS2_STREAM_INFRARED;
		RsFormat = RS2_FORMAT_BGRA8;
		break;
	
	case ERsStreamType::Depth:
		
		Size = FVector2D(1280, 720);
		ThreadName = "RealSense Stream Thread for Depth";
		RsStreamType = RS2_STREAM_DEPTH;
		RsFormat = RS2_FORMAT_Z16;
		break;
	
	case ERsStreamType::Point_Cloud:
		
		UE_LOG(LogTemp, Warning, TEXT("RealSense - Currently Point cloud doesn't supported."));
		return false;

	case ERsStreamType::Distance:

		Size = FVector2D(1280, 720);
		ThreadName = "RealSense Stream Thread for Distance";
		RsStreamType = RS2_STREAM_DEPTH;
		RsFormat = RS2_FORMAT_Z16;
		break;

	default:
		
		Size = FVector2D(1280, 800);
		ThreadName = "RealSense Stream Thread for Color";
		RsStreamType = RS2_STREAM_COLOR;
		RsFormat = RS2_FORMAT_BGRA8;
		break;
	}

	Rs_Config = rs2_create_config(NULL);
	rs2_config_enable_stream(Rs_Config, RsStreamType, StreamIndex, Size.X, Size.Y, RsFormat, FPS, NULL);
	Rs_Pipeline = rs2_create_pipeline(In_Device->Rs_Context, NULL);
	Rs_Pipeline_Profile = rs2_pipeline_start_with_config(Rs_Pipeline, Rs_Config, NULL);

	Rs_Thread = new FRs_Thread(this);
	if (!Rs_Thread)
	{
		UE_LOG(LogTemp, Warning, TEXT("RealSense - Unable to initialize Rs_Thread."));
		return false;
	}
	
	UE_LOG(LogTemp, Display, TEXT("RealSense - RsThread initialized."));

	// Start Timer
	GEngine->GetCurrentPlayWorld()->GetTimerManager().SetTimer(Timer_Capture, this, &ARs_Stream::Rs_Get_Stream, this->Rate, true);

	return true;
}

void ARs_Stream::Rs_Thread_Stop()
{
	if (Timer_Capture.IsValid())
	{
		Timer_Capture.Invalidate();
	}

	if (Rs_Thread)
	{
		delete Rs_Thread;
	}

	rs2_pipeline_stop(Rs_Pipeline, NULL);
	rs2_delete_config(Rs_Config);

	UE_LOG(LogTemp, Display, TEXT("RealSense - RsThread stoped."));
}

void ARs_Stream::Rs_Thread_Toggle(bool bIsPaused)
{
	if (bIsPaused)
	{
		if (Timer_Capture.IsValid())
		{
			Timer_Capture.Invalidate();
		}

		if (Rs_Thread)
		{
			Rs_Thread->Toggle(true);
		}
	}
	
	else
	{
		GEngine->GetCurrentPlayWorld()->GetTimerManager().SetTimer(Timer_Capture, this, &ARs_Stream::Rs_Get_Stream, this->Rate, true);

		if (Rs_Thread)
		{
			Rs_Thread->Toggle(false);
		}
	}
}

void ARs_Stream::Rs_Get_Stream()
{
	if (StreamType == ERsStreamType::Distance)
	{
		if (Rs_Circ_Queue_Distance.IsEmpty())
		{
			UE_LOG(LogTemp, Warning, TEXT("RealSense - There is no RealSense distance value to process."));
			return;
		}

		if (!Rs_Circ_Queue_Distance.Dequeue(Out_Distance))
		{
			UE_LOG(LogTemp, Warning, TEXT("RealSense - There is a problem to dequeue RealSense distance."));
			return;
		}

		this->OnFrameCaptured();

		return;
	}

	if (Rs_Circ_Queue_Frame.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("RealSense - There is no RealSense frame to process."));
		return;
	}

	const size_t BufferSize = (size_t)(1280 * 800 * 4);
	uint8* CurrentFrame = (uint8*)malloc(BufferSize);

	if (!Rs_Circ_Queue_Frame.Dequeue(CurrentFrame))
	{
		UE_LOG(LogTemp, Warning, TEXT("RealSense - There is a problem to dequeue RealSense frame."));
		return;
	}

	if (!CurrentFrame)
	{
		UE_LOG(LogTemp, Warning, TEXT("RealSense - Current frame buffer is not valid."));
		return;
	}

	if (!IsValid(Target_Texture))
	{
		switch (StreamType)
		{

		case ERsStreamType::Color:

			this->Target_Texture = UTexture2D::CreateTransient(1280, 800, PF_B8G8R8A8);
			this->Target_Texture->SRGB = false;
			this->Target_Texture->NeverStream = true;
			break;

		case ERsStreamType::Infrared:

			this->Target_Texture = UTexture2D::CreateTransient(1280, 720, PF_B8G8R8A8);
			this->Target_Texture->SRGB = true;
			this->Target_Texture->NeverStream = true;
			break;

		case ERsStreamType::Depth:

			this->Target_Texture = UTexture2D::CreateTransient(1280, 720, PF_G16);
			this->Target_Texture->SRGB = false;
			this->Target_Texture->CompressionSettings = TextureCompressionSettings::TC_Grayscale;
			this->Target_Texture->NeverStream = true;
			break;

		case ERsStreamType::Point_Cloud:

			return;

		default:
			this->Target_Texture = UTexture2D::CreateTransient(1280, 800, PF_B8G8R8A8);
			this->Target_Texture->SRGB = true;
			this->Target_Texture->NeverStream = true;
			break;
		}

		FTexture2DMipMap& Rs_Texture_Mip = Target_Texture->GetPlatformData()->Mips[0];
		void* Rs_Texture_Data = Rs_Texture_Mip.BulkData.Lock(LOCK_READ_WRITE);
		FMemory::Memcpy(Rs_Texture_Data, CurrentFrame, BufferSize);

		Rs_Texture_Mip.BulkData.Unlock();
		Target_Texture->UpdateResource();

		this->OnFrameCaptured();

		return;
	}

	else
	{
		ENQUEUE_RENDER_COMMAND(UpdateTextureDataCommand)([this, CurrentFrame, BufferSize](FRHICommandListImmediate& CommandList)
			{
				uint32 DestStride = 0;
				FRHITexture* TextureRHI = this->Target_Texture->GetResource()->GetTextureRHI();
				uint32_t* Buffer = (uint32_t*)RHILockTexture2D(TextureRHI, 0, EResourceLockMode::RLM_WriteOnly, DestStride, false, true);
				FMemory::Memcpy(Buffer, CurrentFrame, BufferSize);
				RHIUnlockTexture2D(TextureRHI, 0, false, true);
			}
		);

		this->OnFrameCaptured();

		FlushRenderingCommands();

		return;
	}
}