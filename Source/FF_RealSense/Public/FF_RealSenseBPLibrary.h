// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

THIRD_PARTY_INCLUDES_START
#include <librealsense2/rs.h>
#include <librealsense2/h/rs_pipeline.h>
#include <librealsense2/h/rs_frame.h>
THIRD_PARTY_INCLUDES_END

#include "FF_RealSenseBPLibrary.generated.h"

UCLASS(BlueprintType)
class FF_REALSENSE_API URsDeviceList : public UObject
{
	GENERATED_BODY()

public:

	rs2_device_list* Rs_Device_List;
	rs2_context* Rs_Context;

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

};

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRsDelegateFrames, bool, bIsSuccessfull, UTexture2D*, Out_Frame, FString, Out_Code);

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRsDelegateDistance, bool, bIsSuccessfull, float, Out_Distance, FString, Out_Code);

UCLASS()
class UFF_RealSenseBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Get Device List", Keywords = "intel, realsense, devices, list, get"), Category = "FF_Realsense|System")
	static bool Realsense_Device_List_Get(URsDeviceList*& Out_Device_List, int32& Device_Count, FString& Out_Code);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Delete Device List", Keywords = "intel, realsense, devices, list, delete, remove"), Category = "FF_Realsense|System")
	static bool Realsense_Device_List_Delete(UPARAM(ref)URsDeviceList*& In_Device_List, FString& Out_Code);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Get Each Device", Keywords = "intel, realsense, get, each, device"), Category = "FF_Realsense|System")
	static bool Realsense_Get_Each_Device(URsDeviceObject*& Out_Device, UPARAM(ref)URsDeviceList*& In_Device_List, FString& Out_Code, int32 DeviceIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Init Pipeline", Keywords = "intel, realsense, pipeline, init"), Category = "FF_Realsense|System")
	static bool Realsense_Pipeline_Init(UPARAM(ref)URsDeviceObject*& In_Device, FVector2D In_Size, int32 StreamIndex = 0, int32 FPS = 30);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Stop Pipeline", Keywords = "intel, realsense, pipeline, stop"), Category = "FF_Realsense|System")
	static bool Realsense_Pipeline_Stop(UPARAM(ref)URsDeviceObject*& In_Device);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Get Frames", Keywords = "intel, realsense, get, frames"), Category = "FF_Realsense|Get")
	static void Realsense_Get_Frames(FRsDelegateFrames DelegateFrames, UPARAM(ref)URsDeviceObject*& In_Device, int32 Timeout = 10);

};