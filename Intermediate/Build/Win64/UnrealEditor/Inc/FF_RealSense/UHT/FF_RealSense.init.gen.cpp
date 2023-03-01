// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFF_RealSense_init() {}
	FF_REALSENSE_API UFunction* Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature();
	FF_REALSENSE_API UFunction* Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FF_RealSense;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FF_RealSense()
	{
		if (!Z_Registration_Info_UPackage__Script_FF_RealSense.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FF_RealSense",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x085CE17A,
				0x6B789410,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FF_RealSense.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FF_RealSense.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FF_RealSense(Z_Construct_UPackage__Script_FF_RealSense, TEXT("/Script/FF_RealSense"), Z_Registration_Info_UPackage__Script_FF_RealSense, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x085CE17A, 0x6B789410));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
