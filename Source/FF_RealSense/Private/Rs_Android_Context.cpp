// Fill out your copyright notice in the Description page of Project Settings.

#include "Rs_Android_Context.h"

// Sets default values
ARs_Android_Context::ARs_Android_Context()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned.
void ARs_Android_Context::BeginPlay()
{
	Super::BeginPlay();

	//this->RS_Android_Init();
}

// Called when the game ends or when destroyed.
void ARs_Android_Context::EndPlay(EEndPlayReason::Type Reason)
{
	//this->RS_Android_Close();

	Super::EndPlay(Reason);
}

// Called every frame.
void ARs_Android_Context::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARs_Android_Context::RS_Android_Init()
{
#ifdef __ANDROID__

	this->JavaEnv = FAndroidApplication::GetJavaEnv();
	this->GameActivity = FJavaWrapper::GameActivityThis;
	this->RS_Class = FAndroidApplication::FindJavaClass(RS_Class_Name);

	jmethodID RS_Method_Init = FJavaWrapper::FindStaticMethod(this->JavaEnv, this->RS_Class, "RealSense_Init", "(Landroid/app/Activity;)V", false);
	this->JavaEnv->CallStaticVoidMethod(this->RS_Class, RS_Method_Init, GameActivity);

#endif
}

void ARs_Android_Context::RS_Android_Close()
{
#ifdef __ANDROID__

	if (!this->JavaEnv)
	{
		return;
	}

	if (this->GameActivity == NULL)
	{
		return;
	}

	if (this->RS_Class == NULL)
	{
		return;
	}
	
	jmethodID RS_Method_Destruct = FJavaWrapper::FindStaticMethod(this->JavaEnv, this->RS_Class, "Realsense_Destruct", "(Ljava/lang/String;)V", false);
	this->JavaEnv->CallStaticVoidMethod(this->RS_Class, RS_Method_Destruct);

#endif
}