// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

// External Includes.
#include "FF_QR_ProcessorBPLibrary.h"

// Custom Includes.
#include "Rs_Enums.h"

THIRD_PARTY_INCLUDES_START
#include <librealsense2/rs.hpp>
THIRD_PARTY_INCLUDES_END

#include "FF_RealSenseBPLibrary.generated.h"

USTRUCT(BlueprintType)
struct FF_REALSENSE_API FRealSenseTextureBuffer
{
	GENERATED_BODY()

public:

	uint8* Buffer = NULL;

	UPROPERTY(BlueprintReadOnly)
	int64 BufferSize = 0;

	UPROPERTY(BlueprintReadOnly)
	float Distance = 0;

	UPROPERTY(BlueprintReadOnly)
	TArray<FZXingScanResult> QR_Params;

	UPROPERTY(BlueprintReadOnly)
	ERsStreamType StreamType = ERsStreamType::None;

};

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
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRsDelegateRotation, bool, bIsSuccessfull, FRotator, Out_Distance, FString, Out_Code);

UCLASS()
class UFF_RealSenseBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense - Init Android", ToolTip = "You HAVE to call this node once after Android permissions (camera and USB) granted and before using your Intel RealSense.", Keywords = "intel, realsense, devices, list, get"), Category = "FF_Realsense|System")
	static void Realsense_Init_Android();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense - Get Device List", Keywords = "intel, realsense, devices, list, get"), Category = "FF_Realsense|System")
	static bool Realsense_Device_List_Get(URsDeviceList*& Out_Device_List);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense - Delete Device List", Keywords = "intel, realsense, devices, list, delete, remove"), Category = "FF_Realsense")
	static bool Realsense_Device_List_Delete(UPARAM(ref)URsDeviceList*& In_Device_List, FString& Out_Code);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense - Get Device", Keywords = "intel, realsense, device, get"), Category = "FF_Realsense")
	static bool Realsense_Device_Get(URsDeviceObject*& Out_Device, UPARAM(ref)URsDeviceList*& In_Device_List, FString& Out_Code, int32 DeviceIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense - Delete Device", Keywords = "intel, realsense, device, delete"), Category = "FF_Realsense")
	static bool Realsense_Device_Delete(UPARAM(ref)URsDeviceObject*& In_Device);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense - Get Buffer as Array", Keywords = "intel, realsense, device, delete"), Category = "FF_Realsense")
	static bool Realsense_Buffer_Array(FRealSenseTextureBuffer BufferStruct, TArray<uint8>& Out_Array);

};