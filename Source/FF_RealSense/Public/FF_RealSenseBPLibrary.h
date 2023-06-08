// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

THIRD_PARTY_INCLUDES_START
#include <librealsense2/rs.h>
#include <librealsense2/rs.hpp>
#include <librealsense2/h/rs_pipeline.h>
#include <librealsense2/h/rs_frame.h>
THIRD_PARTY_INCLUDES_END

#include "FF_RealSenseBPLibrary.generated.h"

UENUM(BlueprintType)
enum class ERsStreamType : uint8
{
	Color		UMETA(DisplayName = "Color"),
	Infrared	UMETA(DisplayName = "Infrared"),
	Depth		UMETA(DisplayName = "Depth"),
};
ENUM_CLASS_FLAGS(ERsStreamType)

UENUM(BlueprintType)
enum class ERsResolutions : uint8
{
	Reso_1280_800	UMETA(DisplayName = "1280 x 800"),
	Reso_1280_720	UMETA(DisplayName = "1280 x 720"),
	Reso_640_480	UMETA(DisplayName = "640 x 480"),
	Reso_640_360	UMETA(DisplayName = "640 x 360"),
};
ENUM_CLASS_FLAGS(ERsResolutions)

UCLASS(BlueprintType)
class FF_REALSENSE_API URsDeviceList : public UObject
{
	GENERATED_BODY()

public:

	rs2_device_list* Rs_Device_List;
	rs2_context* Rs_Context;

	UPROPERTY(BlueprintReadOnly)
	int32 Rs_Device_Count = 0;

};

UCLASS(BlueprintType)
class FF_REALSENSE_API URsDeviceObject : public UObject
{
	GENERATED_BODY()

public:

	rs2_device* Rs_Device;
	rs2_context* Rs_Context;
	rs2_config* Rs_Config;
	rs2_pipeline* Rs_Pipeline;

	UPROPERTY(BlueprintReadOnly)
	FVector2D Frame_Resolution;

	UPROPERTY(BlueprintReadOnly)
	FString Device_Firmware;

	UPROPERTY(BlueprintReadOnly)
	FString Device_Ip;

	UPROPERTY(BlueprintReadOnly)
	FString Device_Name;

	UPROPERTY(BlueprintReadOnly)
	FString Product_Id;

	UPROPERTY(BlueprintReadOnly)
	FString Product_Line;

	UPROPERTY(BlueprintReadOnly)
	FString Device_Serial;

	UPROPERTY(BlueprintReadOnly)
	bool bIsDepth = false;

};

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRsDelegateFrames, bool, bIsSuccessfull, FString, Out_Code);

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRsDelegateDistance, bool, bIsSuccessfull, float, Out_Distance, FString, Out_Code);

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRsDelegateRotation, bool, bIsSuccessfull, FRotator, Out_Distance, FString, Out_Code);

UCLASS()
class UFF_RealSenseBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Init Android", ToolTip = "You HAVE to call this node once after Android permissions (camera and USB) granted and before using your Intel RealSense.", Keywords = "intel, realsense, devices, list, get"), Category = "FF_Realsense|System")
	static void Realsense_Init_Android();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Get Device List", Keywords = "intel, realsense, devices, list, get"), Category = "FF_Realsense|System")
	static bool Realsense_Device_List_Get(URsDeviceList*& Out_Device_List);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Delete Device List", Keywords = "intel, realsense, devices, list, delete, remove"), Category = "FF_Realsense")
	static bool Realsense_Device_List_Delete(UPARAM(ref)URsDeviceList*& In_Device_List, FString& Out_Code);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Get Each Device", Keywords = "intel, realsense, get, each, device"), Category = "FF_Realsense")
	static bool Realsense_Get_Each_Device(URsDeviceObject*& Out_Device, UPARAM(ref)URsDeviceList*& In_Device_List, FString& Out_Code, int32 DeviceIndex);

	/*
	* @param In_Size 1280x800 only works with "Color" stream type. If you select other streams, 1280x800 converts itself to 1280x720.
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Pipeline Init", Keywords = "intel, realsense, pipeline, init, color, infrared, depth"), Category = "FF_Realsense")
	static bool Realsense_Pipeline_Init(UPARAM(ref)URsDeviceObject*& In_Device, ERsStreamType StreamType, ERsResolutions In_Size, int32 StreamIndex = 0, int32 FPS = 30);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Stop Pipeline", Keywords = "intel, realsense, pipeline, stop"), Category = "FF_Realsense")
	static bool Realsense_Pipeline_Stop(UPARAM(ref)URsDeviceObject*& In_Device);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Create Texture2D", Keywords = "intel, realsense, get, frames, create, texture, 2d, t2d"), Category = "FF_Realsense")
	static void Realsense_Create_T2D(UTexture2D*& Out_T2D, FVector2D Size, bool bSrgb);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Get Stream", Keywords = "intel, realsense, get, frames"), Category = "FF_Realsense")
	static void Realsense_Get_Stream(FRsDelegateFrames DelegateFrames, UPARAM(ref)URsDeviceObject*& In_Device, UPARAM(ref)UTexture2D*& In_T2D, int32 Timeout = 1);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Get Distance", Keywords = "intel, realsense, get, distance"), Category = "FF_Realsense")
	static void Realsense_Get_Distance(FRsDelegateDistance DelegateDistance, UPARAM(ref)URsDeviceObject*& In_Device, FVector2D Origin, int32 Timeout = 1);

};