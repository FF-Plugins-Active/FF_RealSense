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

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegateRs_GameThread);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegateRs_Runnable, FRealSenseTextureBuffer, Out_Buffer);

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
	
	// Timer
	FTimerHandle Timer_Capture;

	// Queues.
	TCircularQueue<FRealSenseTextureBuffer> Rs_Circ_Queue_Frame = TCircularQueue<FRealSenseTextureBuffer>(35);

	// Thread Related Variables.
	class FRs_Thread* Rs_Thread = nullptr;
	FString ThreadName = "";

	// Parameters.
	float Rate = 0.f;
	float TimeOut = 0.f;
	FVector2D Size;

	// RealSense Related Variables.
	rs2_config* Rs_Config = nullptr;
	rs2_pipeline* Rs_Pipeline = nullptr;
	rs2_format RsFormat = RS2_FORMAT_BGRA8;
	rs2_stream RsStreamType = RS2_STREAM_COLOR;
	rs2_pipeline_profile* Rs_Pipeline_Profile = nullptr;

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ToolTip = "", ExposeOnSpawn = "true"))
	URsDeviceObject* In_Device = nullptr;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (ToolTip = "", ExposeOnSpawn = "true"))
	ERsStreamType StreamType = ERsStreamType::Color;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (ToolTip = "", ExposeOnSpawn = "true"))
	int32 StreamIndex = 0;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (ToolTip = "", ExposeOnSpawn = "true"))
	int32 FPS = 30;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ToolTip = "", ExposeOnSpawn = "true"))
	FVector2D Distance_Origin;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (ToolTip = "", ExposeOnSpawn = "true"))
	bool bUseSrgb = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* Out_Texture = nullptr;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FRealSenseTextureBuffer CurrentFrame;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RealSense - Initialize Thread", Keywords = "intel, realsense, thread, init"), Category = "FF_RealSense")
	virtual bool Rs_Thread_Init();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RealSense - Stop Thread", Keywords = "intel, realsense, thread, stop"), Category = "FF_RealSense")
	virtual void Rs_Thread_Stop();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RealSense - Toggle Thread", Keywords = "intel, realsense, thread, stream, toggle, pause, continue"), Category = "FF_RealSense")
	virtual void Rs_Thread_Toggle(bool bIsPaused);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "RealSense - Get Stream", Keywords = "intel, realsense, thread, get, stream"), Category = "FF_RealSense")
	virtual void Rs_Get_Stream();

	UFUNCTION(BlueprintImplementableEvent, Category = "FF_RealSense")
	void OnFrameCaptured_GameThread();

	UPROPERTY(BlueprintAssignable, Category = "FF_RealSense")
	FDelegateRs_GameThread DelegateRs_GameThread;

	UFUNCTION(BlueprintImplementableEvent, Category = "FF_RealSense")
	void OnFrameCaptured_Runnable(FRealSenseTextureBuffer Out_Buffer);

	UPROPERTY(BlueprintAssignable, Category = "FF_RealSense")
	FDelegateRs_Runnable DelegateRs_Runnable;

};