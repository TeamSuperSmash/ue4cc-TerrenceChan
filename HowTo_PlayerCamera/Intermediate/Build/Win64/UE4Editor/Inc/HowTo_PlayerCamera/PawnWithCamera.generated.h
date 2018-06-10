// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_PLAYERCAMERA_PawnWithCamera_generated_h
#error "PawnWithCamera.generated.h already included, missing '#pragma once' in PawnWithCamera.h"
#endif
#define HOWTO_PLAYERCAMERA_PawnWithCamera_generated_h

#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_RPC_WRAPPERS
#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnWithCamera(); \
	friend HOWTO_PLAYERCAMERA_API class UClass* Z_Construct_UClass_APawnWithCamera(); \
public: \
	DECLARE_CLASS(APawnWithCamera, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HowTo_PlayerCamera"), NO_API) \
	DECLARE_SERIALIZER(APawnWithCamera) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPawnWithCamera(); \
	friend HOWTO_PLAYERCAMERA_API class UClass* Z_Construct_UClass_APawnWithCamera(); \
public: \
	DECLARE_CLASS(APawnWithCamera, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HowTo_PlayerCamera"), NO_API) \
	DECLARE_SERIALIZER(APawnWithCamera) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnWithCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnWithCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnWithCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnWithCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnWithCamera(APawnWithCamera&&); \
	NO_API APawnWithCamera(const APawnWithCamera&); \
public:


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnWithCamera(APawnWithCamera&&); \
	NO_API APawnWithCamera(const APawnWithCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnWithCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnWithCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnWithCamera)


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OurCameraSpringArm() { return STRUCT_OFFSET(APawnWithCamera, OurCameraSpringArm); } \
	FORCEINLINE static uint32 __PPO__OurStaticMesh() { return STRUCT_OFFSET(APawnWithCamera, OurStaticMesh); }


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_13_PROLOG
#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_PRIVATE_PROPERTY_OFFSET \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_RPC_WRAPPERS \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_INCLASS \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_PRIVATE_PROPERTY_OFFSET \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_INCLASS_NO_PURE_DECLS \
	HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_PlayerCamera_Source_HowTo_PlayerCamera_PawnWithCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
