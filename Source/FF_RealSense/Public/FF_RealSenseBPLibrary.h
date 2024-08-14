// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

// Custom Includes.
#include "Rs_Enums.h"

// External Includes.
#include "FF_QR_ProcessorBPLibrary.h"

THIRD_PARTY_INCLUDES_START
#include <librealsense2/rs.hpp>
THIRD_PARTY_INCLUDES_END

#include "FF_RealSenseBPLibrary.generated.h"

USTRUCT(BlueprintType)
struct FF_REALSENSE_API FRealSenseTextureBuffer
{
	GENERATED_BODY()

public:

	uint8* Buffer = nullptr;

	UPROPERTY(BlueprintReadOnly)
	int64 BufferSize = 0;

	UPROPERTY(BlueprintReadOnly)
	FVector2D ImageSize = FVector2D();

	UPROPERTY(BlueprintReadOnly)
	float Distance = 0;

	UPROPERTY(BlueprintReadOnly)
	ERsStreamType StreamType = ERsStreamType::Color;

	UPROPERTY(BlueprintReadOnly)
	TArray<FZXingScanResult> ZXingResults;

};

UCLASS(BlueprintType)
class FF_REALSENSE_API URsDeviceList : public UObject
{
	GENERATED_BODY()

public:

	rs2_device_list* Rs_Device_List = nullptr;
	rs2_context* Rs_Context = nullptr;

	UPROPERTY(BlueprintReadOnly)
	int32 Rs_Device_Count = 0;

	// ~URsDeviceList start.
	void BeginDestroy();
	// ~URsDeviceList finish.

};

UCLASS(BlueprintType)
class FF_REALSENSE_API URsDeviceObject : public UObject
{
	GENERATED_BODY()

public:

	rs2_device* Rs_Device = nullptr;
	rs2_context* Rs_Context = nullptr;

	UPROPERTY(BlueprintReadOnly)
	FVector2D Frame_Resolution = FVector2D();

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

	// ~URsDeviceList start.
	void BeginDestroy();
	// ~URsDeviceList finish.

};

UCLASS()
class UFF_RealSenseBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense - Get Device List", Keywords = "intel, realsense, devices, list, get"), Category = "Frozen Forest|FF_RealSense")
	static bool Realsense_Device_List_Get(URsDeviceList*& Out_Device_List);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense - Get Device", Keywords = "intel, realsense, device, get"), Category = "Frozen Forest|FF_RealSense")
	static bool Realsense_Device_Get(URsDeviceObject*& Out_Device, UPARAM(ref)URsDeviceList*& In_Device_List, FString& Out_Code, int32 DeviceIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense - Get Buffer as Array", Keywords = "intel, realsense, device, delete"), Category = "Frozen Forest|FF_RealSense")
	static bool Realsense_Buffer_Array(TArray<uint8>& Out_Array, FRealSenseTextureBuffer BufferStruct);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense - Get Buffer as UTF8", Keywords = "intel, realsense, device, delete"), Category = "Frozen Forest|FF_RealSense")
	static bool GetBufferAsUtf8(FString& Out_Utf8, FRealSenseTextureBuffer BufferStruct);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense - Get Buffer as Base64Url", Keywords = "intel, realsense, device, delete"), Category = "Frozen Forest|FF_RealSense")
	static bool GetBufferAsBase64(FString& Out_Base64, FRealSenseTextureBuffer BufferStruct);

};