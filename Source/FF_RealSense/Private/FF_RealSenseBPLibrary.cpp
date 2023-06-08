// Copyright Epic Games, Inc. All Rights Reserved.

#include "FF_RealSenseBPLibrary.h"
#include "FF_RealSense.h"

#ifdef __ANDROID__
THIRD_PARTY_INCLUDES_START
#include <jni.h>
THIRD_PARTY_INCLUDES_END
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#endif

UFF_RealSenseBPLibrary::UFF_RealSenseBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UFF_RealSenseBPLibrary::Realsense_Init_Android()
{
#ifdef __ANDROID__

	JNIEnv* JavaEnv = FAndroidApplication::GetJavaEnv();

	const ANSICHAR* RealSense_Class_Name = "com/Plugins/FF_RealSense/FF_RealSense";
	jclass RealSense_Class = FAndroidApplication::FindJavaClass(RealSense_Class_Name);
	jmethodID RealSense_Method = FJavaWrapper::FindStaticMethod(JavaEnv, RealSense_Class, "RealSenseInit", "(Landroid/app/Activity;)V", false);

	jobject ActivityOjbect = FJavaWrapper::GameActivityThis;
	JavaEnv->CallStaticVoidMethod(RealSense_Class, RealSense_Method, ActivityOjbect);

#endif
}

bool UFF_RealSenseBPLibrary::Realsense_Device_List_Get(URsDeviceList*& Out_Device_List)
{
	rs2_error* Rs_Error = 0;

	rs2_context* Rs_Context = rs2_create_context(RS2_API_VERSION, &Rs_Error);
	rs2_device_list* Rs_Device_List = rs2_query_devices(Rs_Context, &Rs_Error);
	int32 DeviceCount = rs2_get_device_count(Rs_Device_List, NULL);

	if (DeviceCount == 0)
	{
		return false;
	}

	URsDeviceList* DeviceList = NewObject<URsDeviceList>();
	DeviceList->Rs_Device_List = Rs_Device_List;
	DeviceList->Rs_Context = Rs_Context;
	DeviceList->Rs_Device_Count = DeviceCount;

	Out_Device_List = DeviceList;

	return true;
}

bool UFF_RealSenseBPLibrary::Realsense_Device_List_Delete(UPARAM(ref)URsDeviceList*& In_Device_List, FString& Out_Code)
{
	if (IsValid(In_Device_List) == false)
	{
		Out_Code = "Device list is invalid.";
		return false;
	}

	rs2_delete_device_list(In_Device_List->Rs_Device_List);
	In_Device_List = nullptr;

	return true;
}

bool UFF_RealSenseBPLibrary::Realsense_Get_Each_Device(URsDeviceObject*& Out_Device, UPARAM(ref)URsDeviceList*& In_Device_List, FString& Out_Code, int32 DeviceIndex)
{
	if (IsValid(In_Device_List) == false)
	{
		Out_Code = "Device list is invalid.";
		return false;
	}

	if (In_Device_List->Rs_Device_Count == 0)
	{
		return false;
	}

	rs2_error* Rs_Error = 0;
	rs2_device* EachDevice = rs2_create_device(In_Device_List->Rs_Device_List, DeviceIndex, &Rs_Error);

	if (!EachDevice)
	{
		return false;
	}

	URsDeviceObject* DeviceObject = NewObject<URsDeviceObject>();
	DeviceObject->Rs_Device = EachDevice;
	DeviceObject->Rs_Context = In_Device_List->Rs_Context;
	DeviceObject->Device_Firmware = rs2_get_device_info(EachDevice, rs2_camera_info::RS2_CAMERA_INFO_FIRMWARE_VERSION, NULL);
	DeviceObject->Device_Ip = rs2_get_device_info(EachDevice, rs2_camera_info::RS2_CAMERA_INFO_IP_ADDRESS, NULL);
	DeviceObject->Device_Name = rs2_get_device_info(EachDevice, rs2_camera_info::RS2_CAMERA_INFO_NAME, NULL);
	DeviceObject->Product_Id = rs2_get_device_info(EachDevice, rs2_camera_info::RS2_CAMERA_INFO_PRODUCT_ID, NULL);
	DeviceObject->Product_Line = rs2_get_device_info(EachDevice, rs2_camera_info::RS2_CAMERA_INFO_PRODUCT_LINE, NULL);
	DeviceObject->Device_Serial = rs2_get_device_info(EachDevice, rs2_camera_info::RS2_CAMERA_INFO_SERIAL_NUMBER, NULL);

	Out_Device = DeviceObject;

	return true;
}

bool UFF_RealSenseBPLibrary::Realsense_Pipeline_Init(UPARAM(ref)URsDeviceObject*& In_Device, ERsStreamType StreamType, ERsResolutions In_Size, int32 StreamIndex, int32 FPS)
{
	if (IsValid(In_Device) == false)
	{
		return false;
	}

	rs2_stream RsStreamType = RS2_STREAM_COLOR;
	rs2_format RsFormat = RS2_FORMAT_BGRA8;

	switch (StreamType)
	{
	case ERsStreamType::Color:
		RsStreamType = RS2_STREAM_COLOR;
		RsFormat = RS2_FORMAT_BGRA8;
		break;

	case ERsStreamType::Infrared:
		RsStreamType = RS2_STREAM_INFRARED;
		RsFormat = RS2_FORMAT_BGRA8;
		break;

	case ERsStreamType::Depth:
		RsStreamType = RS2_STREAM_DEPTH;
		RsFormat = RS2_FORMAT_Z16;
		break;
	}

	FVector2D Size;
	switch (In_Size)
	{
	case ERsResolutions::Reso_1280_800:

		if (StreamType == ERsStreamType::Infrared || StreamType == ERsStreamType::Depth)
		{
			Size = FVector2D(1280, 720);
		}

		else
		{
			Size = FVector2D(1280, 800);
		}

		break;

	case ERsResolutions::Reso_1280_720:
		Size = FVector2D(1280, 720);
		break;

	case ERsResolutions::Reso_640_480:
		Size = FVector2D(640, 480);
		break;

	case ERsResolutions::Reso_640_360:
		Size = FVector2D(640, 360);
		break;

	default:
		Size = FVector2D(1280, 800);
		break;
	}

	rs2_config* Rs_Config = rs2_create_config(NULL);
	rs2_config_enable_stream(Rs_Config, RsStreamType, StreamIndex, Size.X, Size.Y, RsFormat, FPS, NULL);

	rs2_pipeline* Rs_Pipeline = rs2_create_pipeline(In_Device->Rs_Context, NULL);
	rs2_pipeline_profile* Rs_Pipeline_Profile = rs2_pipeline_start_with_config(Rs_Pipeline, Rs_Config, NULL);

	In_Device->Rs_Pipeline = Rs_Pipeline;
	In_Device->Frame_Resolution = Size;
	In_Device->Rs_Config = Rs_Config;

	if (StreamType == ERsStreamType::Depth)
	{
		In_Device->bIsDepth = true;
	}

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

	In_Device = nullptr;

	return true;
}

void UFF_RealSenseBPLibrary::Realsense_Create_T2D(UTexture2D*& Out_T2D, FVector2D Size, bool bSrgb, bool bIsDepth)
{
	if (bIsDepth == true)
	{
		Out_T2D = UTexture2D::CreateTransient(Size.X, Size.Y, PF_R8G8B8A8);
	}

	else
	{
		Out_T2D = UTexture2D::CreateTransient(Size.X, Size.Y, PF_B8G8R8A8);
	}

	Out_T2D->SRGB = bSrgb;
}

void UFF_RealSenseBPLibrary::Realsense_Get_Stream(FRsDelegateFrames DelegateFrames, UPARAM(ref)URsDeviceObject*& In_Device, UPARAM(ref)UTexture2D*& In_T2D, int32 Timeout)
{
	if (IsValid(In_Device) == false)
	{
		DelegateFrames.Execute(false, "Device object is not valid.");
		return;
	}

	if (!In_Device->Rs_Pipeline)
	{
		DelegateFrames.Execute(false, "Capture pipeline is not valid.");
		return;
	}

	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [DelegateFrames, In_Device, In_T2D, Timeout]()
		{
			rs2_frame* Rs_Frames = rs2_pipeline_wait_for_frames(In_Device->Rs_Pipeline, Timeout, NULL);
			rs2_frame* First_Frame = rs2_extract_frame(Rs_Frames, 0, NULL);
			
			int64 Buffer_Size = 0;
			uint8_t* FrameBuffer = nullptr;
			if (In_Device->bIsDepth)
			{
				rs2_processing_block* Colorizer = rs2_create_colorizer(NULL);
				rs2_frame_queue* frame_queue = rs2_create_frame_queue(1, NULL);
				rs2_start_processing_queue(Colorizer, frame_queue, NULL);
				rs2_frame_add_ref(First_Frame, NULL);
				rs2_process_frame(Colorizer, First_Frame, NULL);

				rs2_frame* colorized_frame = rs2_wait_for_frame(frame_queue, Timeout, NULL);

				Buffer_Size = rs2_get_frame_data_size(colorized_frame, NULL);
				FrameBuffer = (uint8_t*)(rs2_get_frame_data(colorized_frame, NULL));

				rs2_release_frame(colorized_frame);
				rs2_release_frame(First_Frame);
				rs2_release_frame(Rs_Frames);
			}

			else
			{
				Buffer_Size = rs2_get_frame_data_size(First_Frame, NULL);
				FrameBuffer = (uint8_t*)(rs2_get_frame_data(First_Frame, NULL));

				rs2_release_frame(First_Frame);
				rs2_release_frame(Rs_Frames);
			}

			AsyncTask(ENamedThreads::GameThread, [DelegateFrames, In_Device, In_T2D, FrameBuffer, Buffer_Size]()
				{
					FTexture2DMipMap& Rs_Texture_Mip = In_T2D->GetPlatformData()->Mips[0];
					void* Rs_Texture_Data = Rs_Texture_Mip.BulkData.Lock(LOCK_READ_WRITE);

					FMemory::Memcpy(Rs_Texture_Data, FrameBuffer, Buffer_Size);

					Rs_Texture_Mip.BulkData.Unlock();
					In_T2D->UpdateResource();

					DelegateFrames.ExecuteIfBound(true, "Frames successfully captured.");
				}
			);
		}
	);
}

void UFF_RealSenseBPLibrary::Realsense_Get_Distance(FRsDelegateDistance DelegateDistance, UPARAM(ref)URsDeviceObject*& In_Device, FVector2D Origin, int32 Timeout)
{
	if (IsValid(In_Device) == false)
	{
		DelegateDistance.Execute(false, 0, "Device object is not valid.");
		return;
	}

	if (!In_Device->Rs_Pipeline)
	{
		DelegateDistance.Execute(false, 0, "Capture pipeline is not valid.");
		return;
	}

	AsyncTask(ENamedThreads::GameThread, [DelegateDistance, In_Device, Origin, Timeout]()
		{
			rs2_frame* Rs_Frames = rs2_pipeline_wait_for_frames(In_Device->Rs_Pipeline, Timeout, NULL);
			rs2_frame* Depth_Frame = rs2_extract_frame(Rs_Frames, 0, NULL);

			if (rs2_is_frame_extendable_to(Depth_Frame, RS2_EXTENSION_DEPTH_FRAME, NULL) != 0)
			{
				float Distance = rs2_depth_frame_get_distance(Depth_Frame, Origin.X, Origin.Y, NULL);
				rs2_release_frame(Depth_Frame);
				rs2_release_frame(Rs_Frames);

				AsyncTask(ENamedThreads::GameThread, [DelegateDistance, Distance]()
					{
						DelegateDistance.ExecuteIfBound(true, Distance, "Frames successfully captured.");
					}
				);
			}

			else
			{
				rs2_release_frame(Depth_Frame);
				rs2_release_frame(Rs_Frames);

				AsyncTask(ENamedThreads::GameThread, [DelegateDistance, In_Device]()
					{
						DelegateDistance.ExecuteIfBound(false, 0, "Frames successfully captured.");
					}
				);
			}
		}
	);
}