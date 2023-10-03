// Fill out your copyright notice in the Description page of Project Settings.

#include "Rs_Stream.h"

// Sets default values
ARs_Stream::ARs_Stream()
	: Rs_Circ_Queue(100)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARs_Stream::BeginPlay()
{
	this->Rs_Init_Thread();

	Super::BeginPlay();
}

void ARs_Stream::EndPlay(EEndPlayReason::Type Reason)
{
	if (Rs_Thread)
	{
		delete Rs_Thread;
	}

	Super::EndPlay(Reason);
}

// Called every frame
void ARs_Stream::Tick(float DeltaTime)
{
	this->Rs_Get_Stream();
	
	Super::Tick(DeltaTime);
}

bool ARs_Stream::Rs_Get_Stream()
{	
	if (Rs_Circ_Queue.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("RealSense - There is no frame RealSense frame to process."));
		return false;
	}

	const size_t BufferSize = (size_t)(1280 * 800 * 4);
	uint8* CurrentFrame = (uint8*)malloc(BufferSize);

	if (!Rs_Circ_Queue.Dequeue(CurrentFrame))
	{
		UE_LOG(LogTemp, Warning, TEXT("RealSense - There is a problem to dequeue RealSense."));
		return false;
	}

	if (!CurrentFrame)
	{
		UE_LOG(LogTemp, Warning, TEXT("RealSense - Current frame buffer is not valid."));
		return false;
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
			
			return false;

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

		return true;
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

		FlushRenderingCommands();

		return true;
	}
}

bool ARs_Stream::Rs_Init_Thread()
{
	rs2_config* Rs_Config = rs2_create_config(NULL);
	
	switch (StreamType)
	{
	case ERsStreamType::None:
		
		UE_LOG(LogTemp, Warning, TEXT("Select stream type to use."));
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
		
		UE_LOG(LogTemp, Warning, TEXT("Currently Point cloud doesn't supported."));
		return false;

	default:
		
		Size = FVector2D(1280, 800);
		ThreadName = "RealSense Stream Thread for Color";
		RsStreamType = RS2_STREAM_COLOR;
		RsFormat = RS2_FORMAT_BGRA8;
		break;
	}

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
	return true;
}

bool ARs_Stream::Rs_Is_Thread_Active()
{
	if (this->Rs_Thread)
	{
		return true;
	}

	else
	{
		return false;
	}
}