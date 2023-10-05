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

bool UFF_RealSenseBPLibrary::Realsense_Device_Get(URsDeviceObject*& Out_Device, UPARAM(ref)URsDeviceList*& In_Device_List, FString& Out_Code, int32 DeviceIndex)
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

bool UFF_RealSenseBPLibrary::Realsense_Device_Delete(UPARAM(ref)URsDeviceObject*& In_Device)
{
	if (IsValid(In_Device) == false)
	{
		return false;
	}
	
	rs2_delete_context(In_Device->Rs_Context);
	rs2_delete_device(In_Device->Rs_Device);

	In_Device = nullptr;

	return true;
}

/*
void UFF_RealSenseBPLibrary::RealSense_Point_Cloud(FString In_Path)
{
	AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [In_Path]()
		{
			rs2::context Rs_Context;
			rs2::device_list Rs_Device_List = Rs_Context.query_devices();
			rs2::device Rs_Device = Rs_Device_List[0];
			const char* DeviceInfo = Rs_Device.get_info(RS2_CAMERA_INFO_SERIAL_NUMBER);

			// I can see attached D455's serial number and it is correct.
			UE_LOG(LogTemp, Warning, TEXT("RealSense - Attached camera serial = %s"), *FString(DeviceInfo));

			rs2::config Rs_Config;
			Rs_Config.enable_device(DeviceInfo);

			rs2::pipeline Rs_Pipeline(Rs_Context);
			Rs_Pipeline.start(Rs_Config);
			
			rs2::frameset Frameset;
			Rs_Pipeline.wait_for_frames(30);

			// I tried this, too but wait result comes false.
			const std::chrono::steady_clock::duration StartTime = std::chrono::high_resolution_clock::now().time_since_epoch();
			while (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now().time_since_epoch() - StartTime).count() < 30)
			{
				bool WaitResult = Rs_Pipeline.try_wait_for_frames(&Frameset, 30);
				UE_LOG(LogTemp, Warning, TEXT("RealSense - Wait Result = %s"), WaitResult ? *FString("true") : *FString("false"));
			}

			// Frameset is NULL
			if (!Frameset)
			{
				AsyncTask(ENamedThreads::GameThread, []()
					{
						UE_LOG(LogTemp, Warning, TEXT("RealSense - Frameset is not valid !"));
					}
				);

				return;
			}

			rs2::depth_frame Frame_Depth = Frameset.get_depth_frame();
			if (!Frame_Depth)
			{
				AsyncTask(ENamedThreads::GameThread, []()
					{
						UE_LOG(LogTemp, Warning, TEXT("RealSense - Depth frame is not valid !"));
					}
				);

				return;
			}
			
			rs2::video_frame Frame_Color = Frameset.get_color_frame();
			if (!Frame_Color)
			{
				AsyncTask(ENamedThreads::GameThread, []()
					{
						UE_LOG(LogTemp, Warning, TEXT("RealSense - Color frame is not valid !"));
					}
				);

				return;
			}

			rs2::pointcloud PointCloud;
			PointCloud.map_to(Frame_Color);
			rs2::points Points = PointCloud.calculate(Frame_Depth);
			Points.export_to_ply(TCHAR_TO_UTF8(*In_Path), Frame_Color);

			Rs_Pipeline.stop();

			AsyncTask(ENamedThreads::GameThread, []()
				{
					
				}
			);
		}
	);
}
*/