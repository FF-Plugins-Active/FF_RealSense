// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FF_RealSense/Public/FF_RealSenseBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFF_RealSenseBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FF_REALSENSE_API UClass* Z_Construct_UClass_UFF_RealSenseBPLibrary();
	FF_REALSENSE_API UClass* Z_Construct_UClass_UFF_RealSenseBPLibrary_NoRegister();
	FF_REALSENSE_API UClass* Z_Construct_UClass_URealsenseFrames();
	FF_REALSENSE_API UClass* Z_Construct_UClass_URealsenseFrames_NoRegister();
	FF_REALSENSE_API UClass* Z_Construct_UClass_URealsenseObject();
	FF_REALSENSE_API UClass* Z_Construct_UClass_URealsenseObject_NoRegister();
	FF_REALSENSE_API UEnum* Z_Construct_UEnum_FF_RealSense_ERsFrameTypes();
	FF_REALSENSE_API UFunction* Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature();
	FF_REALSENSE_API UFunction* Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FF_RealSense();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERsFrameTypes;
	static UEnum* ERsFrameTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERsFrameTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERsFrameTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FF_RealSense_ERsFrameTypes, Z_Construct_UPackage__Script_FF_RealSense(), TEXT("ERsFrameTypes"));
		}
		return Z_Registration_Info_UEnum_ERsFrameTypes.OuterSingleton;
	}
	template<> FF_REALSENSE_API UEnum* StaticEnum<ERsFrameTypes>()
	{
		return ERsFrameTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_FF_RealSense_ERsFrameTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FF_RealSense_ERsFrameTypes_Statics::Enumerators[] = {
		{ "ERsFrameTypes::Color", (int64)ERsFrameTypes::Color },
		{ "ERsFrameTypes::Depth", (int64)ERsFrameTypes::Depth },
		{ "ERsFrameTypes::Infrared", (int64)ERsFrameTypes::Infrared },
		{ "ERsFrameTypes::Fisheye", (int64)ERsFrameTypes::Fisheye },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FF_RealSense_ERsFrameTypes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Color.DisplayName", "Color" },
		{ "Color.Name", "ERsFrameTypes::Color" },
		{ "Depth.DisplayName", "Depth" },
		{ "Depth.Name", "ERsFrameTypes::Depth" },
		{ "Fisheye.DisplayName", "Fisheye" },
		{ "Fisheye.Name", "ERsFrameTypes::Fisheye" },
		{ "Infrared.DisplayName", "Infrared" },
		{ "Infrared.Name", "ERsFrameTypes::Infrared" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FF_RealSense_ERsFrameTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FF_RealSense,
		nullptr,
		"ERsFrameTypes",
		"ERsFrameTypes",
		Z_Construct_UEnum_FF_RealSense_ERsFrameTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FF_RealSense_ERsFrameTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FF_RealSense_ERsFrameTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FF_RealSense_ERsFrameTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FF_RealSense_ERsFrameTypes()
	{
		if (!Z_Registration_Info_UEnum_ERsFrameTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERsFrameTypes.InnerSingleton, Z_Construct_UEnum_FF_RealSense_ERsFrameTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERsFrameTypes.InnerSingleton;
	}
	void URealsenseObject::StaticRegisterNativesURealsenseObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealsenseObject);
	UClass* Z_Construct_UClass_URealsenseObject_NoRegister()
	{
		return URealsenseObject::StaticClass();
	}
	struct Z_Construct_UClass_URealsenseObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealsenseObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FF_RealSense,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealsenseObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FF_RealSenseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealsenseObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealsenseObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealsenseObject_Statics::ClassParams = {
		&URealsenseObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealsenseObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealsenseObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealsenseObject()
	{
		if (!Z_Registration_Info_UClass_URealsenseObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealsenseObject.OuterSingleton, Z_Construct_UClass_URealsenseObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealsenseObject.OuterSingleton;
	}
	template<> FF_REALSENSE_API UClass* StaticClass<URealsenseObject>()
	{
		return URealsenseObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealsenseObject);
	URealsenseObject::~URealsenseObject() {}
	void URealsenseFrames::StaticRegisterNativesURealsenseFrames()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealsenseFrames);
	UClass* Z_Construct_UClass_URealsenseFrames_NoRegister()
	{
		return URealsenseFrames::StaticClass();
	}
	struct Z_Construct_UClass_URealsenseFrames_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealsenseFrames_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FF_RealSense,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealsenseFrames_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FF_RealSenseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealsenseFrames_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealsenseFrames>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealsenseFrames_Statics::ClassParams = {
		&URealsenseFrames::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealsenseFrames_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealsenseFrames_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealsenseFrames()
	{
		if (!Z_Registration_Info_UClass_URealsenseFrames.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealsenseFrames.OuterSingleton, Z_Construct_UClass_URealsenseFrames_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealsenseFrames.OuterSingleton;
	}
	template<> FF_REALSENSE_API UClass* StaticClass<URealsenseFrames>()
	{
		return URealsenseFrames::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealsenseFrames);
	URealsenseFrames::~URealsenseFrames() {}
	struct Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics
	{
		struct _Script_FF_RealSense_eventRsDelegateFrames_Parms
		{
			bool bIsSuccessfull;
			URealsenseFrames* Out_Frames;
			FString Out_Code;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Frames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit(void* Obj)
	{
		((_Script_FF_RealSense_eventRsDelegateFrames_Parms*)Obj)->bIsSuccessfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::NewProp_bIsSuccessfull = { "bIsSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_FF_RealSense_eventRsDelegateFrames_Parms), &Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::NewProp_Out_Frames = { "Out_Frames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FF_RealSense_eventRsDelegateFrames_Parms, Out_Frames), Z_Construct_UClass_URealsenseFrames_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FF_RealSense_eventRsDelegateFrames_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::NewProp_bIsSuccessfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::NewProp_Out_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::NewProp_Out_Code,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FF_RealSense, nullptr, "RsDelegateFrames__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::_Script_FF_RealSense_eventRsDelegateFrames_Parms), Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics
	{
		struct _Script_FF_RealSense_eventRsDelegateDistance_Parms
		{
			bool bIsSuccessfull;
			float Out_Distance;
			FString Out_Code;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Out_Distance;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit(void* Obj)
	{
		((_Script_FF_RealSense_eventRsDelegateDistance_Parms*)Obj)->bIsSuccessfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::NewProp_bIsSuccessfull = { "bIsSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_FF_RealSense_eventRsDelegateDistance_Parms), &Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::NewProp_Out_Distance = { "Out_Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FF_RealSense_eventRsDelegateDistance_Parms, Out_Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FF_RealSense_eventRsDelegateDistance_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::NewProp_bIsSuccessfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::NewProp_Out_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::NewProp_Out_Code,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FF_RealSense, nullptr, "RsDelegateDistance__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::_Script_FF_RealSense_eventRsDelegateDistance_Parms), Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Get_Texture)
	{
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Out_Texture);
		P_GET_OBJECT_REF(URealsenseFrames,Z_Param_Out_In_Rs_Frames);
		P_GET_STRUCT(FVector2D,Z_Param_In_Size);
		P_GET_ENUM(ERsFrameTypes,Z_Param_FrameTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFF_RealSenseBPLibrary::Realsense_Get_Texture(Z_Param_Out_Out_Texture,Z_Param_Out_In_Rs_Frames,Z_Param_In_Size,ERsFrameTypes(Z_Param_FrameTypes));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Get_Distance)
	{
		P_GET_OBJECT_REF(URealsenseFrames,Z_Param_Out_In_Rs_Frames);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Out_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFF_RealSenseBPLibrary::Realsense_Get_Distance(Z_Param_Out_In_Rs_Frames,Z_Param_Out_Out_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Get_Frames)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateFrames);
		P_GET_OBJECT(URealsenseObject,Z_Param_In_Rs_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFF_RealSenseBPLibrary::Realsense_Get_Frames(FRsDelegateFrames(Z_Param_DelegateFrames),Z_Param_In_Rs_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Stop)
	{
		P_GET_OBJECT_REF(URealsenseObject,Z_Param_Out_In_Rs_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFF_RealSenseBPLibrary::Realsense_Stop(Z_Param_Out_In_Rs_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Init)
	{
		P_GET_OBJECT_REF(URealsenseObject,Z_Param_Out_Out_Rs_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFF_RealSenseBPLibrary::Realsense_Init(Z_Param_Out_Out_Rs_Object);
		P_NATIVE_END;
	}
	void UFF_RealSenseBPLibrary::StaticRegisterNativesUFF_RealSenseBPLibrary()
	{
		UClass* Class = UFF_RealSenseBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Realsense_Get_Distance", &UFF_RealSenseBPLibrary::execRealsense_Get_Distance },
			{ "Realsense_Get_Frames", &UFF_RealSenseBPLibrary::execRealsense_Get_Frames },
			{ "Realsense_Get_Texture", &UFF_RealSenseBPLibrary::execRealsense_Get_Texture },
			{ "Realsense_Init", &UFF_RealSenseBPLibrary::execRealsense_Init },
			{ "Realsense_Stop", &UFF_RealSenseBPLibrary::execRealsense_Stop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms
		{
			URealsenseFrames* In_Rs_Frames;
			float Out_Distance;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Rs_Frames;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Out_Distance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_In_Rs_Frames = { "In_Rs_Frames", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms, In_Rs_Frames), Z_Construct_UClass_URealsenseFrames_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_Out_Distance = { "Out_Distance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms, Out_Distance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms), &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_In_Rs_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_Out_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense|Get" },
		{ "DisplayName", "Realsense Get Distance" },
		{ "Keywords", "intel, realsense, get, distance" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Get_Distance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Get_Frames_Parms
		{
			FScriptDelegate DelegateFrames;
			URealsenseObject* In_Rs_Object;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateFrames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Rs_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::NewProp_DelegateFrames = { "DelegateFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Frames_Parms, DelegateFrames), Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1416335575
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::NewProp_In_Rs_Object = { "In_Rs_Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Frames_Parms, In_Rs_Object), Z_Construct_UClass_URealsenseObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::NewProp_DelegateFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::NewProp_In_Rs_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense|Get" },
		{ "DisplayName", "Realsense Get Frames" },
		{ "Keywords", "intel, realsense, get, frames" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Get_Frames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::FF_RealSenseBPLibrary_eventRealsense_Get_Frames_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Get_Texture_Parms
		{
			UTexture2D* Out_Texture;
			URealsenseFrames* In_Rs_Frames;
			FVector2D In_Size;
			ERsFrameTypes FrameTypes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Texture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Rs_Frames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Size;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrameTypes_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FrameTypes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_Out_Texture = { "Out_Texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Texture_Parms, Out_Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_In_Rs_Frames = { "In_Rs_Frames", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Texture_Parms, In_Rs_Frames), Z_Construct_UClass_URealsenseFrames_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_In_Size = { "In_Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Texture_Parms, In_Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_FrameTypes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_FrameTypes = { "FrameTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Texture_Parms, FrameTypes), Z_Construct_UEnum_FF_RealSense_ERsFrameTypes, METADATA_PARAMS(nullptr, 0) }; // 2249959479
	void Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FF_RealSenseBPLibrary_eventRealsense_Get_Texture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FF_RealSenseBPLibrary_eventRealsense_Get_Texture_Parms), &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_Out_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_In_Rs_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_In_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_FrameTypes_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_FrameTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense|Get" },
		{ "CPP_Default_FrameTypes", "Color" },
		{ "DisplayName", "Realsense Get Texture" },
		{ "Keywords", "intel, realsense, get, texture, 2d" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Get_Texture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::FF_RealSenseBPLibrary_eventRealsense_Get_Texture_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Init_Parms
		{
			URealsenseObject* Out_Rs_Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Rs_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics::NewProp_Out_Rs_Object = { "Out_Rs_Object", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Init_Parms, Out_Rs_Object), Z_Construct_UClass_URealsenseObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics::NewProp_Out_Rs_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense|System" },
		{ "DisplayName", "Realsense Init" },
		{ "Keywords", "intel, realsense, init" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics::FF_RealSenseBPLibrary_eventRealsense_Init_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Stop_Parms
		{
			URealsenseObject* In_Rs_Object;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Rs_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::NewProp_In_Rs_Object = { "In_Rs_Object", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Stop_Parms, In_Rs_Object), Z_Construct_UClass_URealsenseObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FF_RealSenseBPLibrary_eventRealsense_Stop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FF_RealSenseBPLibrary_eventRealsense_Stop_Parms), &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::NewProp_In_Rs_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense|System" },
		{ "DisplayName", "Realsense Stop" },
		{ "Keywords", "intel, realsense, stop" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Stop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::FF_RealSenseBPLibrary_eventRealsense_Stop_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFF_RealSenseBPLibrary);
	UClass* Z_Construct_UClass_UFF_RealSenseBPLibrary_NoRegister()
	{
		return UFF_RealSenseBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FF_RealSense,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance, "Realsense_Get_Distance" }, // 847236968
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Frames, "Realsense_Get_Frames" }, // 1250639552
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Texture, "Realsense_Get_Texture" }, // 2204122107
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Init, "Realsense_Init" }, // 2637990483
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Stop, "Realsense_Stop" }, // 4161946569
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FF_RealSenseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFF_RealSenseBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics::ClassParams = {
		&UFF_RealSenseBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFF_RealSenseBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UFF_RealSenseBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFF_RealSenseBPLibrary.OuterSingleton, Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFF_RealSenseBPLibrary.OuterSingleton;
	}
	template<> FF_REALSENSE_API UClass* StaticClass<UFF_RealSenseBPLibrary>()
	{
		return UFF_RealSenseBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFF_RealSenseBPLibrary);
	UFF_RealSenseBPLibrary::~UFF_RealSenseBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics::EnumInfo[] = {
		{ ERsFrameTypes_StaticEnum, TEXT("ERsFrameTypes"), &Z_Registration_Info_UEnum_ERsFrameTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2249959479U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealsenseObject, URealsenseObject::StaticClass, TEXT("URealsenseObject"), &Z_Registration_Info_UClass_URealsenseObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealsenseObject), 1047920717U) },
		{ Z_Construct_UClass_URealsenseFrames, URealsenseFrames::StaticClass, TEXT("URealsenseFrames"), &Z_Registration_Info_UClass_URealsenseFrames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealsenseFrames), 286966699U) },
		{ Z_Construct_UClass_UFF_RealSenseBPLibrary, UFF_RealSenseBPLibrary::StaticClass, TEXT("UFF_RealSenseBPLibrary"), &Z_Registration_Info_UClass_UFF_RealSenseBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFF_RealSenseBPLibrary), 938024977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_1081607680(TEXT("/Script/FF_RealSense"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
