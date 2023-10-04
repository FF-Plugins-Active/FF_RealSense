// Copyright Epic Games, Inc. All Rights Reserved.

#include "FF_RealSenseBPLibrary.h"
#include "FF_RealSense.h"

#include "ImageUtils.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "DynamicRHI.h"

#include "RHICommandList.h"
#include "RenderingThread.h"
#include "ScreenRendering.h"
#include "CommonRenderResources.h"

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

bool UFF_RealSenseBPLibrary::Realsense_Pipeline_Stop(UPARAM(ref)URsDeviceObject*& In_Device)
{
	if (IsValid(In_Device) == false)
	{
		return false;
	}

	TArray<rs2_config*> Array_Configs;
	In_Device->Map_Configs.GenerateValueArray(Array_Configs);

	TArray<rs2_pipeline*> Array_Pipelines;
	In_Device->Map_Pipelines.GenerateValueArray(Array_Pipelines);

	for (int32 Index_Pipeline = 0; Index_Pipeline < Array_Pipelines.Num(); Index_Pipeline++)
	{
		rs2_pipeline_stop(Array_Pipelines[Index_Pipeline], NULL);
		rs2_delete_config(Array_Configs[Index_Pipeline]);
	}
	
	rs2_delete_context(In_Device->Rs_Context);
	rs2_delete_device(In_Device->Rs_Device);

	In_Device = nullptr;

	return true;
}

void UFF_RealSenseBPLibrary::Realsense_Get_Distance(FRsDelegateDistance DelegateDistance, UPARAM(ref)URsDeviceObject*& In_Device, FVector2D Origin, int32 Timeout)
{
	if (IsValid(In_Device) == false)
	{
		DelegateDistance.Execute(false, 0, "Device object is not valid.");
		return;
	}

	if (In_Device->Map_Pipelines.Num() == 0)
	{
		DelegateDistance.Execute(false, 0, "Capture pipeline is not valid.");
		return;
	}

	AsyncTask(ENamedThreads::GameThread, [DelegateDistance, In_Device, Origin, Timeout]()
		{
			
			//rs2_frame* Rs_Frames = rs2_pipeline_wait_for_frames(In_Device->Rs_Pipeline, Timeout, NULL);
			//rs2_frame* Depth_Frame = rs2_extract_frame(Rs_Frames, 0, NULL);

			if (rs2_is_frame_extendable_to(NULL, RS2_EXTENSION_DEPTH_FRAME, NULL) != 0)
			{
				/*
				float Distance = rs2_depth_frame_get_distance(Depth_Frame, Origin.X, Origin.Y, NULL);
				rs2_release_frame(Depth_Frame);
				rs2_release_frame(Rs_Frames);
				*/
			float Distance = 0;
				AsyncTask(ENamedThreads::GameThread, [DelegateDistance, Distance]()
					{
						DelegateDistance.ExecuteIfBound(true, Distance, "Frames successfully captured.");
					}
				);
			}

			else
			{
				//rs2_release_frame(Depth_Frame);
				//rs2_release_frame(Rs_Frames);

				AsyncTask(ENamedThreads::GameThread, [DelegateDistance, In_Device]()
					{
						DelegateDistance.ExecuteIfBound(false, 0, "Frames successfully captured.");
					}
				);
			}
		}
	);
}