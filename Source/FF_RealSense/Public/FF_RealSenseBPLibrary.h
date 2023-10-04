// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

// Custom Include
#include "Rs_Enums.h"

THIRD_PARTY_INCLUDES_START
#include <librealsense2/rs.hpp>
THIRD_PARTY_INCLUDES_END

#include "FF_RealSenseBPLibrary.generated.h"

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
	TMap<ERsStreamType, rs2_config*> Map_Configs;
	TMap<ERsStreamType, rs2_pipeline*> Map_Pipelines;

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

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Stop Pipeline", Keywords = "intel, realsense, pipeline, stop"), Category = "FF_Realsense")
	static bool Realsense_Pipeline_Stop(UPARAM(ref)URsDeviceObject*& In_Device);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Get Distance", Keywords = "intel, realsense, get, distance"), Category = "FF_Realsense")
	static void Realsense_Get_Distance(FRsDelegateDistance DelegateDistance, UPARAM(ref)URsDeviceObject*& In_Device, FVector2D Origin, int32 Timeout = 1);

};