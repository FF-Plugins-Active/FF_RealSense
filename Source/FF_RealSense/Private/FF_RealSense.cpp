// Copyright Epic Games, Inc. All Rights Reserved.

#include "FF_RealSense.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FFF_RealSenseModule"

void FFF_RealSenseModule::StartupModule()
{
#ifdef _WIN64
	const FString BasePluginDir = IPluginManager::Get().FindPlugin("FF_REALSENSE")->GetBaseDir();
	const FString DLL_Path = FPaths::Combine(*BasePluginDir, TEXT("Source/FF_RealSense/ThirdParty/Windows/libs/realsense2.dll"));
	RealSenseHandle = FPlatformProcess::GetDllHandle(*DLL_Path);

	if (RealSenseHandle != nullptr)
	{
		UE_LOG(LogTemp, Log, TEXT("realsense2.dll loaded successfully!"));
	}

	else
	{
		UE_LOG(LogTemp, Fatal, TEXT("realsense2.dll failed to load!"));
	}
#endif
}

void FFF_RealSenseModule::ShutdownModule()
{
#ifdef _WIN64
	FPlatformProcess::FreeDllHandle(RealSenseHandle);
	RealSenseHandle = nullptr;
#endif
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFF_RealSenseModule, FF_RealSense)