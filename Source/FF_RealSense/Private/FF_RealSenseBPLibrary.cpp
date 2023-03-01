// Copyright Epic Games, Inc. All Rights Reserved.

#include "FF_RealSenseBPLibrary.h"
#include "FF_RealSense.h"

UFF_RealSenseBPLibrary::UFF_RealSenseBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UFF_RealSenseBPLibrary::Realsense_Get_Devices(URsDeviceList*& Out_Device_List, int32& Device_Count)
{	
	rs2_error* Rs_Error = 0;
	rs2_context* Rs_Context = rs2_create_context(RS2_API_VERSION, &Rs_Error);
	rs2_device_list* Rs_Device_List = rs2_query_devices(Rs_Context, &Rs_Error);
	
	URsDeviceList* DeviceList = NewObject<URsDeviceList>();
	DeviceList->Rs_Device_List = Rs_Device_List;
	DeviceList->Rs_Context = Rs_Context;
	
	Out_Device_List = DeviceList;
	Device_Count = rs2_get_device_count(Rs_Device_List, &Rs_Error);
}

bool UFF_RealSenseBPLibrary::Realsense_Get_Each_Device(URsDeviceObject*& Out_Device, URsDeviceList* In_Device_List, int32 DeviceIndex)
{
	if (IsValid(In_Device_List) == false)
	{
		return false;
	}

	rs2_error* Rs_Error = 0;
	rs2_device* EachDevice = rs2_create_device(In_Device_List->Rs_Device_List, DeviceIndex, &Rs_Error);

	URsDeviceObject* DeviceObject = NewObject<URsDeviceObject>();
	DeviceObject->Rs_Device = EachDevice;
	DeviceObject->Rs_Context = In_Device_List->Rs_Context;

	Out_Device = DeviceObject;

	return true;
}

bool UFF_RealSenseBPLibrary::Realsense_Pipeline_Init(UPARAM(ref)URsDeviceObject*& In_Device, FVector2D In_Size, int32 StreamIndex, int32 FPS)
{
	if (IsValid(In_Device) == false)
	{
		return false;
	}

	rs2_error* Rs_Error = 0;
	rs2_config* Rs_Config = rs2_create_config(&Rs_Error);
	rs2_config_enable_stream(Rs_Config, RS2_STREAM_COLOR, StreamIndex, In_Size.X, In_Size.Y, RS2_FORMAT_RGBA8, FPS, &Rs_Error);

	rs2_pipeline* Rs_Pipeline = rs2_create_pipeline(In_Device->Rs_Context, &Rs_Error);
	rs2_pipeline_profile* Rs_Pipeline_Profile = rs2_pipeline_start_with_config(Rs_Pipeline, Rs_Config, &Rs_Error);

	In_Device->Rs_Pipeline = Rs_Pipeline;
	In_Device->Frame_Resolution = In_Size;
	In_Device->Rs_Config = Rs_Config;

	return true;
}

bool UFF_RealSenseBPLibrary::Realsense_Pipeline_Stop(UPARAM(ref)URsDeviceObject*& In_Device)
{
	if (IsValid(In_Device) == false)
	{
		return false;
	}

	rs2_error* Rs_Error = 0;
	rs2_pipeline_stop(In_Device->Rs_Pipeline, &Rs_Error);
	rs2_delete_context(In_Device->Rs_Context);
	rs2_delete_config(In_Device->Rs_Config);
	rs2_delete_device(In_Device->Rs_Device);

	return true;
}

void UFF_RealSenseBPLibrary::Realsense_Get_Frames(FRsDelegateFrames DelegateFrames, UPARAM(ref)URsDeviceObject*& In_Device, int32 Timeout)
{
	if (IsValid(In_Device) == false)
	{
		DelegateFrames.Execute(false, nullptr, "Device object is not valid.");
		return;
	}

	if (!In_Device->Rs_Pipeline)
	{
		DelegateFrames.Execute(false, nullptr, "Capture pipeline is not valid.");
		return;
	}

	AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [DelegateFrames, In_Device, Timeout]()
		{
			rs2_error* Rs_Error = 0;
			rs2_frame* Rs_Frames = rs2_pipeline_wait_for_frames(In_Device->Rs_Pipeline, Timeout, &Rs_Error);
			rs2_frame* EachFrame = rs2_extract_frame(Rs_Frames, 0, &Rs_Error);
			int64 Buffer_Size = rs2_get_frame_data_size(EachFrame, &Rs_Error);
			const uint8_t* FrameBuffer = (const uint8_t*)(rs2_get_frame_data(EachFrame, &Rs_Error));

			rs2_release_frame(EachFrame);
			rs2_release_frame(Rs_Frames);

			AsyncTask(ENamedThreads::GameThread, [DelegateFrames, FrameBuffer, In_Device, Buffer_Size]()
				{
					UTexture2D* Realsense_Texture = UTexture2D::CreateTransient(In_Device->Frame_Resolution.X, In_Device->Frame_Resolution.Y, PF_R8G8B8A8);
					Realsense_Texture->SRGB = 1;
					FTexture2DMipMap& Realsense_Texture_Mip = Realsense_Texture->GetPlatformData()->Mips[0];
					void* Realsense_Texture_Data = Realsense_Texture_Mip.BulkData.Lock(LOCK_READ_WRITE);

					FMemory::Memcpy(Realsense_Texture_Data, FrameBuffer, Buffer_Size);
					Realsense_Texture_Mip.BulkData.Unlock();
					Realsense_Texture->UpdateResource();

					DelegateFrames.ExecuteIfBound(true, Realsense_Texture, "Frames successfully captured.");
				}
			);
		}
	);
}