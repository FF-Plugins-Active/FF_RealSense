// Copyright Epic Games, Inc. All Rights Reserved.

#include "FF_RealSenseBPLibrary.h"
#include "FF_RealSense.h"

THIRD_PARTY_INCLUDES_START

#ifdef __ANDROID__
#include <jni.h>
#endif

THIRD_PARTY_INCLUDES_END

UFF_RealSenseBPLibrary::UFF_RealSenseBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UFF_RealSenseBPLibrary::Realsense_Init(URealsenseObject*& Out_Rs_Object)
{
	URealsenseObject* Rs_Object = NewObject<URealsenseObject>();
	Rs_Object->Realsense_Pipeline.start();

	Out_Rs_Object = Rs_Object;
}

bool UFF_RealSenseBPLibrary::Realsense_Stop(UPARAM(ref)URealsenseObject*& In_Rs_Object)
{
	if (IsValid(In_Rs_Object) == false)
	{
		return false;
	}

	In_Rs_Object->Realsense_Pipeline.stop();
	
	return true;
}

void UFF_RealSenseBPLibrary::Realsense_Get_Frames(FRsDelegateFrames DelegateFrames, URealsenseObject* In_Rs_Object)
{
	if (IsValid(In_Rs_Object) == false)
	{
		DelegateFrames.Execute(false, nullptr, "In_Rs_Object is not valid.");
		return;
	}

	AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [DelegateFrames, In_Rs_Object]()
		{
			URealsenseFrames* FrameObject = NewObject<URealsenseFrames>();

			if (IsValid(FrameObject) == false)
			{
				AsyncTask(ENamedThreads::GameThread, [DelegateFrames, FrameObject]()
					{
						DelegateFrames.Execute(false, nullptr, "Unable to capture frame.");
						return;
					}
				);
			}

			FrameObject->Rs_Frames = In_Rs_Object->Realsense_Pipeline.wait_for_frames();

			AsyncTask(ENamedThreads::GameThread, [DelegateFrames, FrameObject]()
				{
					DelegateFrames.ExecuteIfBound(true, FrameObject, "Frame successfully captured.");
					return;
				}
			);
		}
	);
}

bool UFF_RealSenseBPLibrary::Realsense_Get_Distance(UPARAM(ref)URealsenseFrames*& In_Rs_Frames, float& Out_Distance)
{
	if (IsValid(In_Rs_Frames) == false)
	{
		return false;
	}

	rs2::depth_frame Rs_Depth = In_Rs_Frames->Rs_Frames.get_depth_frame();
	float Width = Rs_Depth.get_width();
	float Height = Rs_Depth.get_height();
	Out_Distance = Rs_Depth.get_distance(Width / 2, Height / 2);

	return true;
}

bool UFF_RealSenseBPLibrary::Realsense_Get_Texture(UTexture2D*& Out_Texture, UPARAM(ref)URealsenseFrames*& In_Rs_Frames, FVector2D In_Size, ERsFrameTypes FrameTypes)
{
	if (IsValid(In_Rs_Frames) == false)
	{
		return false;
	}
	
	rs2::frame CapturedTexture;
	switch (FrameTypes)
	{
	case ERsFrameTypes::Color:
		CapturedTexture = In_Rs_Frames->Rs_Frames.get_color_frame();
		break;
	
	case ERsFrameTypes::Depth:
		CapturedTexture = In_Rs_Frames->Rs_Frames.get_depth_frame();
		break;
	
	case ERsFrameTypes::Infrared:
		CapturedTexture = In_Rs_Frames->Rs_Frames.get_infrared_frame();
		break;

	case ERsFrameTypes::Fisheye:
		CapturedTexture = In_Rs_Frames->Rs_Frames.get_fisheye_frame();
		break;
	}

	UTexture2D* Realsense_Texture = UTexture2D::CreateTransient(In_Size.X, In_Size.Y, PF_R8G8B8A8);
	Realsense_Texture->SRGB = 0;
	FTexture2DMipMap& Realsense_Texture_Mip = Realsense_Texture->GetPlatformData()->Mips[0];
	void* Realsense_Texture_Data = Realsense_Texture_Mip.BulkData.Lock(LOCK_READ_WRITE);

	FMemory::Memcpy(Realsense_Texture_Data, CapturedTexture.get_data(), CapturedTexture.get_data_size());
	Realsense_Texture_Mip.BulkData.Unlock();
	Realsense_Texture->UpdateResource();

	Out_Texture = Realsense_Texture;
	
	CapturedTexture.~frame();

	return true;
}