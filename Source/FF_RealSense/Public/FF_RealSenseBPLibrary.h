// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

THIRD_PARTY_INCLUDES_START
#include "librealsense2/rs.hpp"
THIRD_PARTY_INCLUDES_END

#include "FF_RealSenseBPLibrary.generated.h"

UENUM(BlueprintType)
enum class ERsFrameTypes : uint8
{
	Color		UMETA(DisplayName = "Color"),
	Depth		UMETA(DisplayName = "Depth"),
	Infrared	UMETA(DisplayName = "Infrared"),
	Fisheye		UMETA(DisplayName = "Fisheye"),
};
ENUM_CLASS_FLAGS(ERsFrameTypes)

UCLASS(BlueprintType)
class FF_REALSENSE_API URealsenseObject : public UObject
{
	GENERATED_BODY()

public:

	rs2::pipeline Realsense_Pipeline;

};

UCLASS(BlueprintType)
class FF_REALSENSE_API URealsenseFrames : public UObject
{
	GENERATED_BODY()

public:

	rs2::frameset Rs_Frames;

};

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRsDelegateFrames, bool, bIsSuccessfull, URealsenseFrames*, Out_Frames, FString, Out_Code);

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRsDelegateDistance, bool, bIsSuccessfull, float, Out_Distance, FString, Out_Code);

UCLASS()
class UFF_RealSenseBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Init", Keywords = "intel, realsense, init"), Category = "FF_Realsense|System")
	static void Realsense_Init(URealsenseObject*& Out_Rs_Object);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Stop", Keywords = "intel, realsense, stop"), Category = "FF_Realsense|System")
	static bool Realsense_Stop(UPARAM(ref)URealsenseObject*& In_Rs_Object);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Get Frames", Keywords = "intel, realsense, get, frames"), Category = "FF_Realsense|Get")
	static void Realsense_Get_Frames(FRsDelegateFrames DelegateFrames, URealsenseObject* In_Rs_Object);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Get Distance", Keywords = "intel, realsense, get, distance"), Category = "FF_Realsense|Get")
	static bool Realsense_Get_Distance(UPARAM(ref)URealsenseFrames*& In_Rs_Frames, float& Out_Distance);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Realsense Get Texture", Keywords = "intel, realsense, get, texture, 2d"), Category = "FF_Realsense|Get")
	static bool Realsense_Get_Texture(UTexture2D*& Out_Texture, UPARAM(ref)URealsenseFrames*& In_Rs_Frames, FVector2D In_Size, ERsFrameTypes FrameTypes = ERsFrameTypes::Color);

};
