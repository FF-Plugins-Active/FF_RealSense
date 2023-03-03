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
	FF_REALSENSE_API UClass* Z_Construct_UClass_URsDeviceList();
	FF_REALSENSE_API UClass* Z_Construct_UClass_URsDeviceList_NoRegister();
	FF_REALSENSE_API UClass* Z_Construct_UClass_URsDeviceObject();
	FF_REALSENSE_API UClass* Z_Construct_UClass_URsDeviceObject_NoRegister();
	FF_REALSENSE_API UEnum* Z_Construct_UEnum_FF_RealSense_ERsStreamType();
	FF_REALSENSE_API UFunction* Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature();
	FF_REALSENSE_API UFunction* Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FF_RealSense();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERsStreamType;
	static UEnum* ERsStreamType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERsStreamType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERsStreamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FF_RealSense_ERsStreamType, Z_Construct_UPackage__Script_FF_RealSense(), TEXT("ERsStreamType"));
		}
		return Z_Registration_Info_UEnum_ERsStreamType.OuterSingleton;
	}
	template<> FF_REALSENSE_API UEnum* StaticEnum<ERsStreamType>()
	{
		return ERsStreamType_StaticEnum();
	}
	struct Z_Construct_UEnum_FF_RealSense_ERsStreamType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FF_RealSense_ERsStreamType_Statics::Enumerators[] = {
		{ "ERsStreamType::Color", (int64)ERsStreamType::Color },
		{ "ERsStreamType::Infrared", (int64)ERsStreamType::Infrared },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FF_RealSense_ERsStreamType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Color.DisplayName", "Color" },
		{ "Color.Name", "ERsStreamType::Color" },
		{ "Infrared.DisplayName", "Infrared" },
		{ "Infrared.Name", "ERsStreamType::Infrared" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FF_RealSense_ERsStreamType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FF_RealSense,
		nullptr,
		"ERsStreamType",
		"ERsStreamType",
		Z_Construct_UEnum_FF_RealSense_ERsStreamType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FF_RealSense_ERsStreamType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FF_RealSense_ERsStreamType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FF_RealSense_ERsStreamType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FF_RealSense_ERsStreamType()
	{
		if (!Z_Registration_Info_UEnum_ERsStreamType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERsStreamType.InnerSingleton, Z_Construct_UEnum_FF_RealSense_ERsStreamType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERsStreamType.InnerSingleton;
	}
	void URsDeviceList::StaticRegisterNativesURsDeviceList()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URsDeviceList);
	UClass* Z_Construct_UClass_URsDeviceList_NoRegister()
	{
		return URsDeviceList::StaticClass();
	}
	struct Z_Construct_UClass_URsDeviceList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URsDeviceList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FF_RealSense,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URsDeviceList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FF_RealSenseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URsDeviceList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URsDeviceList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URsDeviceList_Statics::ClassParams = {
		&URsDeviceList::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URsDeviceList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URsDeviceList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URsDeviceList()
	{
		if (!Z_Registration_Info_UClass_URsDeviceList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URsDeviceList.OuterSingleton, Z_Construct_UClass_URsDeviceList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URsDeviceList.OuterSingleton;
	}
	template<> FF_REALSENSE_API UClass* StaticClass<URsDeviceList>()
	{
		return URsDeviceList::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URsDeviceList);
	URsDeviceList::~URsDeviceList() {}
	void URsDeviceObject::StaticRegisterNativesURsDeviceObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URsDeviceObject);
	UClass* Z_Construct_UClass_URsDeviceObject_NoRegister()
	{
		return URsDeviceObject::StaticClass();
	}
	struct Z_Construct_UClass_URsDeviceObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Device_Firmware_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Device_Firmware;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Device_Ip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Device_Ip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Device_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Device_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Product_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Product_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Product_Line_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Product_Line;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Device_Serial_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Device_Serial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URsDeviceObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FF_RealSense,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URsDeviceObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FF_RealSenseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Frame_Resolution_MetaData[] = {
		{ "Category", "RsDeviceObject" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Frame_Resolution = { "Frame_Resolution", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URsDeviceObject, Frame_Resolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Frame_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Frame_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Firmware_MetaData[] = {
		{ "Category", "RsDeviceObject" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Firmware = { "Device_Firmware", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URsDeviceObject, Device_Firmware), METADATA_PARAMS(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Firmware_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Firmware_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Ip_MetaData[] = {
		{ "Category", "RsDeviceObject" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Ip = { "Device_Ip", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URsDeviceObject, Device_Ip), METADATA_PARAMS(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Ip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Name_MetaData[] = {
		{ "Category", "RsDeviceObject" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Name = { "Device_Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URsDeviceObject, Device_Name), METADATA_PARAMS(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Product_Id_MetaData[] = {
		{ "Category", "RsDeviceObject" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Product_Id = { "Product_Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URsDeviceObject, Product_Id), METADATA_PARAMS(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Product_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Product_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Product_Line_MetaData[] = {
		{ "Category", "RsDeviceObject" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Product_Line = { "Product_Line", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URsDeviceObject, Product_Line), METADATA_PARAMS(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Product_Line_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Product_Line_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Serial_MetaData[] = {
		{ "Category", "RsDeviceObject" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Serial = { "Device_Serial", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URsDeviceObject, Device_Serial), METADATA_PARAMS(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Serial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Serial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URsDeviceObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Frame_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Firmware,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Ip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Product_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Product_Line,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URsDeviceObject_Statics::NewProp_Device_Serial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URsDeviceObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URsDeviceObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URsDeviceObject_Statics::ClassParams = {
		&URsDeviceObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URsDeviceObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URsDeviceObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URsDeviceObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URsDeviceObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URsDeviceObject()
	{
		if (!Z_Registration_Info_UClass_URsDeviceObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URsDeviceObject.OuterSingleton, Z_Construct_UClass_URsDeviceObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URsDeviceObject.OuterSingleton;
	}
	template<> FF_REALSENSE_API UClass* StaticClass<URsDeviceObject>()
	{
		return URsDeviceObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URsDeviceObject);
	URsDeviceObject::~URsDeviceObject() {}
	struct Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics
	{
		struct _Script_FF_RealSense_eventRsDelegateFrames_Parms
		{
			bool bIsSuccessfull;
			FString Out_Code;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FF_RealSense_eventRsDelegateFrames_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature_Statics::NewProp_bIsSuccessfull,
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
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Get_Distance)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateDistance);
		P_GET_OBJECT_REF(URsDeviceObject,Z_Param_Out_In_Device);
		P_GET_STRUCT(FVector2D,Z_Param_Origin);
		P_GET_PROPERTY(FIntProperty,Z_Param_Timeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFF_RealSenseBPLibrary::Realsense_Get_Distance(FRsDelegateDistance(Z_Param_DelegateDistance),Z_Param_Out_In_Device,Z_Param_Origin,Z_Param_Timeout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Get_Stream)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateFrames);
		P_GET_OBJECT_REF(URsDeviceObject,Z_Param_Out_In_Device);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_In_T2D);
		P_GET_PROPERTY(FIntProperty,Z_Param_Timeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFF_RealSenseBPLibrary::Realsense_Get_Stream(FRsDelegateFrames(Z_Param_DelegateFrames),Z_Param_Out_In_Device,Z_Param_Out_In_T2D,Z_Param_Timeout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Create_T2D)
	{
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Out_T2D);
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFF_RealSenseBPLibrary::Realsense_Create_T2D(Z_Param_Out_Out_T2D,Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Pipeline_Stop)
	{
		P_GET_OBJECT_REF(URsDeviceObject,Z_Param_Out_In_Device);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFF_RealSenseBPLibrary::Realsense_Pipeline_Stop(Z_Param_Out_In_Device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Pipeline_Init)
	{
		P_GET_OBJECT_REF(URsDeviceObject,Z_Param_Out_In_Device);
		P_GET_ENUM(ERsStreamType,Z_Param_StreamType);
		P_GET_STRUCT(FVector2D,Z_Param_In_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_StreamIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_FPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFF_RealSenseBPLibrary::Realsense_Pipeline_Init(Z_Param_Out_In_Device,ERsStreamType(Z_Param_StreamType),Z_Param_In_Size,Z_Param_StreamIndex,Z_Param_FPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Get_Each_Device)
	{
		P_GET_OBJECT_REF(URsDeviceObject,Z_Param_Out_Out_Device);
		P_GET_OBJECT_REF(URsDeviceList,Z_Param_Out_In_Device_List);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_GET_PROPERTY(FIntProperty,Z_Param_DeviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFF_RealSenseBPLibrary::Realsense_Get_Each_Device(Z_Param_Out_Out_Device,Z_Param_Out_In_Device_List,Z_Param_Out_Out_Code,Z_Param_DeviceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Device_List_Delete)
	{
		P_GET_OBJECT_REF(URsDeviceList,Z_Param_Out_In_Device_List);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFF_RealSenseBPLibrary::Realsense_Device_List_Delete(Z_Param_Out_In_Device_List,Z_Param_Out_Out_Code);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFF_RealSenseBPLibrary::execRealsense_Device_List_Get)
	{
		P_GET_OBJECT_REF(URsDeviceList,Z_Param_Out_Out_Device_List);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Device_Count);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Out_Code);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFF_RealSenseBPLibrary::Realsense_Device_List_Get(Z_Param_Out_Out_Device_List,Z_Param_Out_Device_Count,Z_Param_Out_Out_Code);
		P_NATIVE_END;
	}
	void UFF_RealSenseBPLibrary::StaticRegisterNativesUFF_RealSenseBPLibrary()
	{
		UClass* Class = UFF_RealSenseBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Realsense_Create_T2D", &UFF_RealSenseBPLibrary::execRealsense_Create_T2D },
			{ "Realsense_Device_List_Delete", &UFF_RealSenseBPLibrary::execRealsense_Device_List_Delete },
			{ "Realsense_Device_List_Get", &UFF_RealSenseBPLibrary::execRealsense_Device_List_Get },
			{ "Realsense_Get_Distance", &UFF_RealSenseBPLibrary::execRealsense_Get_Distance },
			{ "Realsense_Get_Each_Device", &UFF_RealSenseBPLibrary::execRealsense_Get_Each_Device },
			{ "Realsense_Get_Stream", &UFF_RealSenseBPLibrary::execRealsense_Get_Stream },
			{ "Realsense_Pipeline_Init", &UFF_RealSenseBPLibrary::execRealsense_Pipeline_Init },
			{ "Realsense_Pipeline_Stop", &UFF_RealSenseBPLibrary::execRealsense_Pipeline_Stop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Create_T2D_Parms
		{
			UTexture2D* Out_T2D;
			FVector2D Size;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_T2D;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::NewProp_Out_T2D = { "Out_T2D", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Create_T2D_Parms, Out_T2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Create_T2D_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::NewProp_Out_T2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense" },
		{ "DisplayName", "Realsense Create Texture2D" },
		{ "Keywords", "intel, realsense, get, frames, create, texture, 2d, t2d" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Create_T2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::FF_RealSenseBPLibrary_eventRealsense_Create_T2D_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Device_List_Delete_Parms
		{
			URsDeviceList* In_Device_List;
			FString Out_Code;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Device_List;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::NewProp_In_Device_List = { "In_Device_List", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Device_List_Delete_Parms, In_Device_List), Z_Construct_UClass_URsDeviceList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Device_List_Delete_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FF_RealSenseBPLibrary_eventRealsense_Device_List_Delete_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FF_RealSenseBPLibrary_eventRealsense_Device_List_Delete_Parms), &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::NewProp_In_Device_List,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense" },
		{ "DisplayName", "Realsense Delete Device List" },
		{ "Keywords", "intel, realsense, devices, list, delete, remove" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Device_List_Delete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::FF_RealSenseBPLibrary_eventRealsense_Device_List_Delete_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Device_List_Get_Parms
		{
			URsDeviceList* Out_Device_List;
			int32 Device_Count;
			FString Out_Code;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Device_List;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Device_Count;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::NewProp_Out_Device_List = { "Out_Device_List", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Device_List_Get_Parms, Out_Device_List), Z_Construct_UClass_URsDeviceList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::NewProp_Device_Count = { "Device_Count", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Device_List_Get_Parms, Device_Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Device_List_Get_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FF_RealSenseBPLibrary_eventRealsense_Device_List_Get_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FF_RealSenseBPLibrary_eventRealsense_Device_List_Get_Parms), &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::NewProp_Out_Device_List,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::NewProp_Device_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense|System" },
		{ "DisplayName", "Realsense Get Device List" },
		{ "Keywords", "intel, realsense, devices, list, get" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Device_List_Get", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::FF_RealSenseBPLibrary_eventRealsense_Device_List_Get_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms
		{
			FScriptDelegate DelegateDistance;
			URsDeviceObject* In_Device;
			FVector2D Origin;
			int32 Timeout;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateDistance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Device;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_DelegateDistance = { "DelegateDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms, DelegateDistance), Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateDistance__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3831337043
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_In_Device = { "In_Device", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms, In_Device), Z_Construct_UClass_URsDeviceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms, Origin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_DelegateDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_In_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::NewProp_Timeout,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense" },
		{ "CPP_Default_Timeout", "1" },
		{ "DisplayName", "Realsense Get Distance" },
		{ "Keywords", "intel, realsense, get, distance" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Get_Distance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::FF_RealSenseBPLibrary_eventRealsense_Get_Distance_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Get_Each_Device_Parms
		{
			URsDeviceObject* Out_Device;
			URsDeviceList* In_Device_List;
			FString Out_Code;
			int32 DeviceIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Out_Device;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Device_List;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Out_Code;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_Out_Device = { "Out_Device", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Each_Device_Parms, Out_Device), Z_Construct_UClass_URsDeviceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_In_Device_List = { "In_Device_List", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Each_Device_Parms, In_Device_List), Z_Construct_UClass_URsDeviceList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_Out_Code = { "Out_Code", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Each_Device_Parms, Out_Code), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_DeviceIndex = { "DeviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Each_Device_Parms, DeviceIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FF_RealSenseBPLibrary_eventRealsense_Get_Each_Device_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FF_RealSenseBPLibrary_eventRealsense_Get_Each_Device_Parms), &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_Out_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_In_Device_List,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_Out_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_DeviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense" },
		{ "DisplayName", "Realsense Get Each Device" },
		{ "Keywords", "intel, realsense, get, each, device" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Get_Each_Device", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::FF_RealSenseBPLibrary_eventRealsense_Get_Each_Device_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Get_Stream_Parms
		{
			FScriptDelegate DelegateFrames;
			URsDeviceObject* In_Device;
			UTexture2D* In_T2D;
			int32 Timeout;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateFrames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Device;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_T2D;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::NewProp_DelegateFrames = { "DelegateFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Stream_Parms, DelegateFrames), Z_Construct_UDelegateFunction_FF_RealSense_RsDelegateFrames__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1615030037
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::NewProp_In_Device = { "In_Device", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Stream_Parms, In_Device), Z_Construct_UClass_URsDeviceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::NewProp_In_T2D = { "In_T2D", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Stream_Parms, In_T2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Get_Stream_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::NewProp_DelegateFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::NewProp_In_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::NewProp_In_T2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::NewProp_Timeout,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense" },
		{ "CPP_Default_Timeout", "1" },
		{ "DisplayName", "Realsense Get Stream" },
		{ "Keywords", "intel, realsense, get, frames" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Get_Stream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::FF_RealSenseBPLibrary_eventRealsense_Get_Stream_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Pipeline_Init_Parms
		{
			URsDeviceObject* In_Device;
			ERsStreamType StreamType;
			FVector2D In_Size;
			int32 StreamIndex;
			int32 FPS;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Device;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StreamType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StreamType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_In_Size;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StreamIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FPS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_In_Device = { "In_Device", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Pipeline_Init_Parms, In_Device), Z_Construct_UClass_URsDeviceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_StreamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_StreamType = { "StreamType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Pipeline_Init_Parms, StreamType), Z_Construct_UEnum_FF_RealSense_ERsStreamType, METADATA_PARAMS(nullptr, 0) }; // 2691965364
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_In_Size = { "In_Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Pipeline_Init_Parms, In_Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_StreamIndex = { "StreamIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Pipeline_Init_Parms, StreamIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Pipeline_Init_Parms, FPS), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FF_RealSenseBPLibrary_eventRealsense_Pipeline_Init_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FF_RealSenseBPLibrary_eventRealsense_Pipeline_Init_Parms), &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_In_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_StreamType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_StreamType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_In_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_StreamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense" },
		{ "CPP_Default_FPS", "30" },
		{ "CPP_Default_StreamIndex", "0" },
		{ "DisplayName", "Realsense Pipeline Init" },
		{ "Keywords", "intel, realsense, pipeline, init, color, infrared, depth" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Pipeline_Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::FF_RealSenseBPLibrary_eventRealsense_Pipeline_Init_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics
	{
		struct FF_RealSenseBPLibrary_eventRealsense_Pipeline_Stop_Parms
		{
			URsDeviceObject* In_Device;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_In_Device;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::NewProp_In_Device = { "In_Device", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FF_RealSenseBPLibrary_eventRealsense_Pipeline_Stop_Parms, In_Device), Z_Construct_UClass_URsDeviceObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FF_RealSenseBPLibrary_eventRealsense_Pipeline_Stop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FF_RealSenseBPLibrary_eventRealsense_Pipeline_Stop_Parms), &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::NewProp_In_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_Realsense" },
		{ "DisplayName", "Realsense Stop Pipeline" },
		{ "Keywords", "intel, realsense, pipeline, stop" },
		{ "ModuleRelativePath", "Public/FF_RealSenseBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFF_RealSenseBPLibrary, nullptr, "Realsense_Pipeline_Stop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::FF_RealSenseBPLibrary_eventRealsense_Pipeline_Stop_Parms), Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Create_T2D, "Realsense_Create_T2D" }, // 886258156
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Delete, "Realsense_Device_List_Delete" }, // 933752882
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Device_List_Get, "Realsense_Device_List_Get" }, // 114925573
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Distance, "Realsense_Get_Distance" }, // 3811513222
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Each_Device, "Realsense_Get_Each_Device" }, // 4079323689
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Get_Stream, "Realsense_Get_Stream" }, // 2715382904
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Init, "Realsense_Pipeline_Init" }, // 2814210147
		{ &Z_Construct_UFunction_UFF_RealSenseBPLibrary_Realsense_Pipeline_Stop, "Realsense_Pipeline_Stop" }, // 2361254823
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
		{ ERsStreamType_StaticEnum, TEXT("ERsStreamType"), &Z_Registration_Info_UEnum_ERsStreamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2691965364U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URsDeviceList, URsDeviceList::StaticClass, TEXT("URsDeviceList"), &Z_Registration_Info_UClass_URsDeviceList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URsDeviceList), 1090655853U) },
		{ Z_Construct_UClass_URsDeviceObject, URsDeviceObject::StaticClass, TEXT("URsDeviceObject"), &Z_Registration_Info_UClass_URsDeviceObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URsDeviceObject), 2052621500U) },
		{ Z_Construct_UClass_UFF_RealSenseBPLibrary, UFF_RealSenseBPLibrary::StaticClass, TEXT("UFF_RealSenseBPLibrary"), &Z_Registration_Info_UClass_UFF_RealSenseBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFF_RealSenseBPLibrary), 4148490057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_3266346845(TEXT("/Script/FF_RealSense"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
