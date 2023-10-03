// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

// Custom Includes
#include "Rs_Thread.h"
#include "FF_RealSenseBPLibrary.h"

// UE Includes
#include "HAL/RunnableThread.h"
#include "Containers/CircularQueue.h"

#include "Rs_Stream.generated.h"

UCLASS()
class FF_REALSENSE_API ARs_Stream : public AActor
{
	GENERATED_BODY()
	
protected:

	// Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	// Called when the game ends or when destroyed.
	virtual void EndPlay(EEndPlayReason::Type Reason) override;

public:	
	
	// Sets default values for this actor's properties.
	ARs_Stream();

	// Called every frame.
	virtual void Tick(float DeltaTime) override;
	
	// FRunnable Thread Queue.
	TCircularQueue<uint8*> Rs_Circ_Queue = TCircularQueue<uint8*>(100);

	// Threads
	class FRs_Thread* Rs_Thread = nullptr;
	FString ThreadName = "";

	// Realsense Params.
	FVector2D Size;
	rs2_stream RsStreamType = RS2_STREAM_COLOR;
	rs2_format RsFormat = RS2_FORMAT_BGRA8;
	rs2_pipeline* Rs_Pipeline = nullptr;
	rs2_pipeline_profile* Rs_Pipeline_Profile = nullptr;

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ToolTip = "", ExposeOnSpawn = "true"))
	URsDeviceObject* In_Device = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ToolTip = "", ExposeOnSpawn = "true"))
	ERsStreamType StreamType = ERsStreamType::None;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ToolTip = "", ExposeOnSpawn = "true"))
	int32 StreamIndex = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ToolTip = "", ExposeOnSpawn = "true"))
	int32 FPS = 30;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* Target_Texture = nullptr;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Close All Windows", Keywords = "close, all, window"), Category = "FF_RealSense")
	virtual bool Rs_Init_Thread();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RealSense - Get Stream", Keywords = "close, all, window"), Category = "FF_RealSense")
	virtual bool Rs_Get_Stream();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RealSense - Is Thread Active", Keywords = "close, all, window"), Category = "FF_RealSense")
	virtual bool Rs_Is_Thread_Active();

};
