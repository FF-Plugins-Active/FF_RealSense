// Copyright Epic Games, Inc. All Rights Reserved.

#include "FF_RealSense.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FFF_RealSenseModule"

void FFF_RealSenseModule::StartupModule()
{
#ifdef _WIN64
	const FString BasePluginDir = IPluginManager::Get().FindPlugin("FF_REALSENSE")->GetBaseDir();
	
	const FString Path_realsense2 = FPaths::Combine(*BasePluginDir, TEXT("Source/FF_RealSense/ThirdParty/Windows/libs/realsense2.dll"));
	const FString Path_Intel_Realsense = FPaths::Combine(*BasePluginDir, TEXT("Source/FF_RealSense/ThirdParty/Windows/libs/Intel.Realsense.dll"));

	Handle_realsense2 = FPlatformProcess::GetDllHandle(*Path_realsense2);
	Handle_Intel_Realsense = FPlatformProcess::GetDllHandle(*Path_Intel_Realsense);

	if (Handle_realsense2 != nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("realsense2.dll loaded successfully!"));
	}

	else
	{
		UE_LOG(LogTemp, Fatal, TEXT("realsense2.dll failed to load!"));
	}

	if (Handle_Intel_Realsense != nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("Intel.Realsense.dll loaded successfully!"));
	}

	else
	{
		UE_LOG(LogTemp, Fatal, TEXT("Intel.Realsense.dll failed to load!"));
	}

#endif
}

void FFF_RealSenseModule::ShutdownModule()
{
#ifdef _WIN64
	
	FPlatformProcess::FreeDllHandle(Handle_realsense2);
	Handle_realsense2 = nullptr;

	FPlatformProcess::FreeDllHandle(Handle_Intel_Realsense);
	Handle_Intel_Realsense = nullptr;

#endif
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFF_RealSenseModule, FF_RealSense)