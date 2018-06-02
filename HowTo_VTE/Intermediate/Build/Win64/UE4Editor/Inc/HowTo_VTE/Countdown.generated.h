// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_VTE_Countdown_generated_h
#error "Countdown.generated.h already included, missing '#pragma once' in Countdown.h"
#endif
#define HOWTO_VTE_Countdown_generated_h

#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_RPC_WRAPPERS \
	virtual void CountdownHasFinished_Implementation(); \
 \
	DECLARE_FUNCTION(execCountdownHasFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CountdownHasFinished_Implementation(); \
		P_NATIVE_END; \
	}


#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCountdownHasFinished) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CountdownHasFinished_Implementation(); \
		P_NATIVE_END; \
	}


#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_EVENT_PARMS
#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_CALLBACK_WRAPPERS
#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACountdown(); \
	friend HOWTO_VTE_API class UClass* Z_Construct_UClass_ACountdown(); \
public: \
	DECLARE_CLASS(ACountdown, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HowTo_VTE"), NO_API) \
	DECLARE_SERIALIZER(ACountdown) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACountdown(); \
	friend HOWTO_VTE_API class UClass* Z_Construct_UClass_ACountdown(); \
public: \
	DECLARE_CLASS(ACountdown, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HowTo_VTE"), NO_API) \
	DECLARE_SERIALIZER(ACountdown) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACountdown(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACountdown) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountdown); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountdown); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACountdown(ACountdown&&); \
	NO_API ACountdown(const ACountdown&); \
public:


#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACountdown(ACountdown&&); \
	NO_API ACountdown(const ACountdown&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACountdown); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACountdown); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACountdown)


#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_PRIVATE_PROPERTY_OFFSET
#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_10_PROLOG \
	HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_EVENT_PARMS


#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_PRIVATE_PROPERTY_OFFSET \
	HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_RPC_WRAPPERS \
	HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_CALLBACK_WRAPPERS \
	HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_INCLASS \
	HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_PRIVATE_PROPERTY_OFFSET \
	HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_CALLBACK_WRAPPERS \
	HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_INCLASS_NO_PURE_DECLS \
	HowTo_VTE_Source_HowTo_VTE_Countdown_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_VTE_Source_HowTo_VTE_Countdown_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
