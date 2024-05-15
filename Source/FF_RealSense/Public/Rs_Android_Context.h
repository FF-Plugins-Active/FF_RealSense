// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#ifdef __ANDROID__
THIRD_PARTY_INCLUDES_START
#include <jni.h>
THIRD_PARTY_INCLUDES_END
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#endif

#include "Rs_Android_Context.generated.h"

UCLASS()
class FF_REALSENSE_API ARs_Android_Context : public AActor
{
	GENERATED_BODY()

protected:
	
	// Called when the game starts or when spawned.
	virtual void BeginPlay() override;

	// Called when the game ends or when destroyed.
	virtual void EndPlay(EEndPlayReason::Type Reason) override;

public:	
	
	// Sets default values for this actor's properties.
	ARs_Android_Context();

	// Called every frame.
	virtual void Tick(float DeltaTime) override;

#ifdef __ANDROID__

	JNIEnv* JavaEnv = nullptr;
	jobject GameActivity = NULL;

	const ANSICHAR* RS_Class_Name = "com/Plugins/FF_RealSense/FF_RealSense";
	jclass RS_Class = NULL;

#endif

	UFUNCTION(BlueprintCallable)
	virtual void RS_Android_Init();

	UFUNCTION(BlueprintCallable)
	virtual void RS_Android_Close();

};
