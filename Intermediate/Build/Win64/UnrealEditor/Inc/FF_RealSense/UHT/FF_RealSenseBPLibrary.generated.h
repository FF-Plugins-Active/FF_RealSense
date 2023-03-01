// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FF_RealSenseBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URealsenseFrames;
class URealsenseObject;
class UTexture2D;
enum class ERsFrameTypes : uint8;
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
	static void StaticRegisterNativesURealsenseObject(); \
	friend struct Z_Construct_UClass_URealsenseObject_Statics; \
public: \
	DECLARE_CLASS(URealsenseObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(URealsenseObject)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesURealsenseObject(); \
	friend struct Z_Construct_UClass_URealsenseObject_Statics; \
public: \
	DECLARE_CLASS(URealsenseObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(URealsenseObject)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealsenseObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealsenseObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealsenseObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealsenseObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealsenseObject(URealsenseObject&&); \
	NO_API URealsenseObject(const URealsenseObject&); \
public: \
	NO_API virtual ~URealsenseObject();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealsenseObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealsenseObject(URealsenseObject&&); \
	NO_API URealsenseObject(const URealsenseObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealsenseObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealsenseObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealsenseObject) \
	NO_API virtual ~URealsenseObject();


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


template<> FF_REALSENSE_API UClass* StaticClass<class URealsenseObject>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_RPC_WRAPPERS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealsenseFrames(); \
	friend struct Z_Construct_UClass_URealsenseFrames_Statics; \
public: \
	DECLARE_CLASS(URealsenseFrames, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(URealsenseFrames)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_INCLASS \
private: \
	static void StaticRegisterNativesURealsenseFrames(); \
	friend struct Z_Construct_UClass_URealsenseFrames_Statics; \
public: \
	DECLARE_CLASS(URealsenseFrames, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(URealsenseFrames)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealsenseFrames(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealsenseFrames) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealsenseFrames); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealsenseFrames); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealsenseFrames(URealsenseFrames&&); \
	NO_API URealsenseFrames(const URealsenseFrames&); \
public: \
	NO_API virtual ~URealsenseFrames();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealsenseFrames(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URealsenseFrames(URealsenseFrames&&); \
	NO_API URealsenseFrames(const URealsenseFrames&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealsenseFrames); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealsenseFrames); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealsenseFrames) \
	NO_API virtual ~URealsenseFrames();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_34_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FF_REALSENSE_API UClass* StaticClass<class URealsenseFrames>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_46_DELEGATE \
struct _Script_FF_RealSense_eventRsDelegateFrames_Parms \
{ \
	bool bIsSuccessfull; \
	URealsenseFrames* Out_Frames; \
	FString Out_Code; \
}; \
static inline void FRsDelegateFrames_DelegateWrapper(const FScriptDelegate& RsDelegateFrames, bool bIsSuccessfull, URealsenseFrames* Out_Frames, const FString& Out_Code) \
{ \
	_Script_FF_RealSense_eventRsDelegateFrames_Parms Parms; \
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false; \
	Parms.Out_Frames=Out_Frames; \
	Parms.Out_Code=Out_Code; \
	RsDelegateFrames.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_49_DELEGATE \
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


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRealsense_Get_Texture); \
	DECLARE_FUNCTION(execRealsense_Get_Distance); \
	DECLARE_FUNCTION(execRealsense_Get_Frames); \
	DECLARE_FUNCTION(execRealsense_Stop); \
	DECLARE_FUNCTION(execRealsense_Init);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRealsense_Get_Texture); \
	DECLARE_FUNCTION(execRealsense_Get_Distance); \
	DECLARE_FUNCTION(execRealsense_Get_Frames); \
	DECLARE_FUNCTION(execRealsense_Stop); \
	DECLARE_FUNCTION(execRealsense_Init);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFF_RealSenseBPLibrary(); \
	friend struct Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFF_RealSenseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(UFF_RealSenseBPLibrary)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUFF_RealSenseBPLibrary(); \
	friend struct Z_Construct_UClass_UFF_RealSenseBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFF_RealSenseBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FF_RealSense"), NO_API) \
	DECLARE_SERIALIZER(UFF_RealSenseBPLibrary)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_STANDARD_CONSTRUCTORS \
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


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_ENHANCED_CONSTRUCTORS \
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


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_51_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h_54_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FF_RealSenseBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FF_REALSENSE_API UClass* StaticClass<class UFF_RealSenseBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_FF_RealSense_Source_FF_RealSense_Public_FF_RealSenseBPLibrary_h


#define FOREACH_ENUM_ERSFRAMETYPES(op) \
	op(ERsFrameTypes::Color) \
	op(ERsFrameTypes::Depth) \
	op(ERsFrameTypes::Infrared) \
	op(ERsFrameTypes::Fisheye) 

enum class ERsFrameTypes : uint8;
template<> struct TIsUEnumClass<ERsFrameTypes> { enum { Value = true }; };
template<> FF_REALSENSE_API UEnum* StaticEnum<ERsFrameTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
