// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_PROJECT_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define TEST_PROJECT_MyActor_generated_h

#define Test_Project_Source_Test_Project_MyActor_h_11_RPC_WRAPPERS
#define Test_Project_Source_Test_Project_MyActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Test_Project_Source_Test_Project_MyActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend TEST_PROJECT_API class UClass* Z_Construct_UClass_AMyActor(); \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test_Project"), NO_API) \
	DECLARE_SERIALIZER(AMyActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test_Project_Source_Test_Project_MyActor_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend TEST_PROJECT_API class UClass* Z_Construct_UClass_AMyActor(); \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Test_Project"), NO_API) \
	DECLARE_SERIALIZER(AMyActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Test_Project_Source_Test_Project_MyActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define Test_Project_Source_Test_Project_MyActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define Test_Project_Source_Test_Project_MyActor_h_11_PRIVATE_PROPERTY_OFFSET
#define Test_Project_Source_Test_Project_MyActor_h_8_PROLOG
#define Test_Project_Source_Test_Project_MyActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Project_Source_Test_Project_MyActor_h_11_PRIVATE_PROPERTY_OFFSET \
	Test_Project_Source_Test_Project_MyActor_h_11_RPC_WRAPPERS \
	Test_Project_Source_Test_Project_MyActor_h_11_INCLASS \
	Test_Project_Source_Test_Project_MyActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Project_Source_Test_Project_MyActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Project_Source_Test_Project_MyActor_h_11_PRIVATE_PROPERTY_OFFSET \
	Test_Project_Source_Test_Project_MyActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Project_Source_Test_Project_MyActor_h_11_INCLASS_NO_PURE_DECLS \
	Test_Project_Source_Test_Project_MyActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Project_Source_Test_Project_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
