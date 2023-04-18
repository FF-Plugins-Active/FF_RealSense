// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FF_RealSenseBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URsDeviceList;
class URsDeviceObject;
class UTexture2D;
enum class ERsStreamType : uint8;
#ifdef FF_REALSENSE_FF_RealSenseBPLibrary_generated_h
#error "FF_RealSenseBPLibrary.generated.h already included, missing '#pragma once' in FF_RealSenseBPLibrary.h"
#endif
#define FF_REALSENSE_FF_RealSenseBPLibrary_generated_h

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_RPC_WRAPPERS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURsDeviceList(); \
	friend struct Z_Construct_UClass_URsDeviceList_Statics; \
public: \
	DECLARE_CLASS(URsDeviceList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(URsDeviceList)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesURsDeviceList(); \
	friend struct Z_Construct_UClass_URsDeviceList_Statics; \
public: \
	DECLARE_CLASS(URsDeviceList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(URsDeviceList)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URsDeviceList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URsDeviceList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URsDeviceList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URsDeviceList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URsDeviceList(URsDeviceList&&); \
	NO_API URsDeviceList(const URsDeviceList&); \
public: \
	NO_API virtual ~URsDeviceList();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URsDeviceList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URsDeviceList(URsDeviceList&&); \
	NO_API URsDeviceList(const URsDeviceList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URsDeviceList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URsDeviceList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URsDeviceList) \
	NO_API virtual ~URsDeviceList();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_23_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FF_REALSENSE_API UClass* StaticClass<class URsDeviceList>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_RPC_WRAPPERS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURsDeviceObject(); \
	friend struct Z_Construct_UClass_URsDeviceObject_Statics; \
public: \
	DECLARE_CLASS(URsDeviceObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(URsDeviceObject)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_INCLASS \
private: \
	static void StaticRegisterNativesURsDeviceObject(); \
	friend struct Z_Construct_UClass_URsDeviceObject_Statics; \
public: \
	DECLARE_CLASS(URsDeviceObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(URsDeviceObject)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URsDeviceObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URsDeviceObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URsDeviceObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URsDeviceObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URsDeviceObject(URsDeviceObject&&); \
	NO_API URsDeviceObject(const URsDeviceObject&); \
public: \
	NO_API virtual ~URsDeviceObject();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URsDeviceObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URsDeviceObject(URsDeviceObject&&); \
	NO_API URsDeviceObject(const URsDeviceObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URsDeviceObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URsDeviceObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URsDeviceObject) \
	NO_API virtual ~URsDeviceObject();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_35_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FF_REALSENSE_API UClass* StaticClass<class URsDeviceObject>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_71_DELEGATE \
struct _Script_FF_RealSense_eventRsDelegateFrames_Parms \
{ \
	bool bIsSuccessfull; \
	FString Out_Code; \
}; \
static inline void FRsDelegateFrames_DelegateWrapper(const FScriptDelegate& RsDelegateFrames, bool bIsSuccessfull, const FString& Out_Code) \
{ \
	_Script_FF_RealSense_eventRsDelegateFrames_Parms Parms; \
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false; \
	Parms.Out_Code=Out_Code; \
	RsDelegateFrames.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_74_DELEGATE \
struct _Script_FF_RealSense_eventRsDelegateDistance_Parms \
{ \
	bool bIsSuccessfull; \
	float Out_Distance; \
	FString Out_Code; \
}; \
static inline void FRsDelegateDistance_DelegateWrapper(const FScriptDelegate& RsDelegateDistance, bool bIsSuccessfull, float Out_Distance, const FString& Out_Code) \
{ \
	_Script_FF_RealSense_eventRsDelegateDistance_Parms Parms; \
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false; \
	Parms.Out_Distance=Out_Distance; \
	Parms.Out_Code=Out_Code; \
	RsDelegateDistance.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_77_DELEGATE \
struct _Script_FF_RealSense_eventRsDelegateRotation_Parms \
{ \
	bool bIsSuccessfull; \
	FRotator Out_Distance; \
	FString Out_Code; \
}; \
static inline void FRsDelegateRotation_DelegateWrapper(const FScriptDelegate& RsDelegateRotation, bool bIsSuccessfull, FRotator Out_Distance, const FString& Out_Code) \
{ \
	_Script_FF_RealSense_eventRsDelegateRotation_Parms Parms; \
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false; \
	Parms.Out_Distance=Out_Distance; \
	Parms.Out_Code=Out_Code; \
	RsDelegateRotation.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRealsense_Get_Distance); \
	DECLARE_FUNCTION(execRealsense_Get_Stream); \
	DECLARE_FUNCTION(execRealsense_Create_T2D); \
	DECLARE_FUNCTION(execRealsense_Pipeline_Stop); \
	DECLARE_FUNCTION(execRealsense_Pipeline_Init); \
	DECLARE_FUNCTION(execRealsense_Get_Each_Device); \
	DECLARE_FUNCTION(execRealsense_Device_List_Delete); \
	DECLARE_FUNCTION(execRealsense_Device_List_Get);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRealsense_Get_Distance); \
	DECLARE_FUNCTION(execRealsense_Get_Stream); \
	DECLARE_FUNCTION(execRealsense_Create_T2D); \
	DECLARE_FUNCTION(execRealsense_Pipeline_Stop); \
	DECLARE_FUNCTION(execRealsense_Pipeline_Init); \
	DECLARE_FUNCTION(execRealsense_Get_Each_Device); \
	DECLARE_FUNCTION(execRealsense_Device_List_Delete); \
	DECLARE_FUNCTION(execRealsense_Device_List_Get);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFF_RealSenseBPLibrary(); \
	friend struct Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFF_RealSenseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(UFF_RealSenseBPLibrary)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUFF_RealSenseBPLibrary(); \
	friend struct Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFF_RealSenseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(UFF_RealSenseBPLibrary)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFF_RealSenseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFF_RealSenseBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFF_RealSenseBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFF_RealSenseBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFF_RealSenseBPLibrary(UFF_RealSenseBPLibrary&&); \
	NO_API UFF_RealSenseBPLibrary(const UFF_RealSenseBPLibrary&); \
public: \
	NO_API virtual ~UFF_RealSenseBPLibrary();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFF_RealSenseBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFF_RealSenseBPLibrary(UFF_RealSenseBPLibrary&&); \
	NO_API UFF_RealSenseBPLibrary(const UFF_RealSenseBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFF_RealSenseBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFF_RealSenseBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFF_RealSenseBPLibrary) \
	NO_API virtual ~UFF_RealSenseBPLibrary();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_79_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_82_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FF_RealSenseBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FF_REALSENSE_API UClass* StaticClass<class UFF_RealSenseBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h


#define FOREACH_ENUM_ERSSTREAMTYPE(op) \
	op(ERsStreamType::Color) \
	op(ERsStreamType::Infrared) 

enum class ERsStreamType : uint8;
template<> struct TIsUEnumClass<ERsStreamType> { enum { Value = true }; };
template<> FF_REALSENSE_API UEnum* StaticEnum<ERsStreamType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
