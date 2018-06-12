// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef HOWTO_UMG_HowTo_UMGGameModeBase_generated_h
#error "HowTo_UMGGameModeBase.generated.h already included, missing '#pragma once' in HowTo_UMGGameModeBase.h"
#endif
#define HOWTO_UMG_HowTo_UMGGameModeBase_generated_h

#define HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHowTo_UMGGameModeBase(); \
	friend HOWTO_UMG_API class UClass* Z_Construct_UClass_AHowTo_UMGGameModeBase(); \
public: \
	DECLARE_CLASS(AHowTo_UMGGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/HowTo_UMG"), NO_API) \
	DECLARE_SERIALIZER(AHowTo_UMGGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAHowTo_UMGGameModeBase(); \
	friend HOWTO_UMG_API class UClass* Z_Construct_UClass_AHowTo_UMGGameModeBase(); \
public: \
	DECLARE_CLASS(AHowTo_UMGGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/HowTo_UMG"), NO_API) \
	DECLARE_SERIALIZER(AHowTo_UMGGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHowTo_UMGGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHowTo_UMGGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHowTo_UMGGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHowTo_UMGGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHowTo_UMGGameModeBase(AHowTo_UMGGameModeBase&&); \
	NO_API AHowTo_UMGGameModeBase(const AHowTo_UMGGameModeBase&); \
public:


#define HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHowTo_UMGGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHowTo_UMGGameModeBase(AHowTo_UMGGameModeBase&&); \
	NO_API AHowTo_UMGGameModeBase(const AHowTo_UMGGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHowTo_UMGGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHowTo_UMGGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHowTo_UMGGameModeBase)


#define HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartingWidgetClass() { return STRUCT_OFFSET(AHowTo_UMGGameModeBase, StartingWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AHowTo_UMGGameModeBase, CurrentWidget); }


#define HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_13_PROLOG
#define HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_RPC_WRAPPERS \
	HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_INCLASS \
	HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_UMG_Source_HowTo_UMG_HowTo_UMGGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
