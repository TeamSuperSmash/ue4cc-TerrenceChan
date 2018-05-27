// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FPSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}
// Cross Module References
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPSProject();
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFPSCharacter_Fire();
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward();
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight();
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFPSCharacter_SetPitchSensitivity();
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFPSCharacter_SetYawSensitivity();
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump();
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFPSCharacter_StopJump();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		UClass* Class = AFPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AFPSCharacter::execFire },
			{ "MoveForward", &AFPSCharacter::execMoveForward },
			{ "MoveRight", &AFPSCharacter::execMoveRight },
			{ "SetPitchSensitivity", &AFPSCharacter::execSetPitchSensitivity },
			{ "SetYawSensitivity", &AFPSCharacter::execSetYawSensitivity },
			{ "StartJump", &AFPSCharacter::execStartJump },
			{ "StopJump", &AFPSCharacter::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FPSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward()
	{
		struct FPSCharacter_eventMoveForward_Parms
		{
			float value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FPSCharacter_eventMoveForward_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FPSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "MoveForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FPSCharacter_eventMoveForward_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight()
	{
		struct FPSCharacter_eventMoveRight_Parms
		{
			float value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FPSCharacter_eventMoveRight_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FPSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "MoveRight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FPSCharacter_eventMoveRight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_SetPitchSensitivity()
	{
		struct FPSCharacter_eventSetPitchSensitivity_Parms
		{
			float value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FPSCharacter_eventSetPitchSensitivity_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FPSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "SetPitchSensitivity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FPSCharacter_eventSetPitchSensitivity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_SetYawSensitivity()
	{
		struct FPSCharacter_eventSetYawSensitivity_Parms
		{
			float value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FPSCharacter_eventSetYawSensitivity_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FPSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "SetYawSensitivity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FPSCharacter_eventSetYawSensitivity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FPSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "StartJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FPSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, "StopJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_FPSProject,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AFPSCharacter_Fire, "Fire" }, // 8720140
				{ &Z_Construct_UFunction_AFPSCharacter_MoveForward, "MoveForward" }, // 2488841890
				{ &Z_Construct_UFunction_AFPSCharacter_MoveRight, "MoveRight" }, // 602583744
				{ &Z_Construct_UFunction_AFPSCharacter_SetPitchSensitivity, "SetPitchSensitivity" }, // 9236800
				{ &Z_Construct_UFunction_AFPSCharacter_SetYawSensitivity, "SetYawSensitivity" }, // 3710798074
				{ &Z_Construct_UFunction_AFPSCharacter_StartJump, "StartJump" }, // 74167985
				{ &Z_Construct_UFunction_AFPSCharacter_StopJump, "StopJump" }, // 4029124474
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "FPSCharacter.h" },
				{ "ModuleRelativePath", "FPSCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "FPSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, ProjectileClass), Z_Construct_UClass_AFPSProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileClass_MetaData, ARRAY_COUNT(NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "FPSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "MuzzleOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MuzzleOffset_MetaData, ARRAY_COUNT(NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSMesh_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FPSCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSMesh = { UE4CodeGen_Private::EPropertyClass::Object, "FPSMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, FPSMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_FPSMesh_MetaData, ARRAY_COUNT(NewProp_FPSMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSCameraComponent_MetaData[] = {
				{ "Category", "FPSCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FPSCharacter.h" },
				{ "ToolTip", "FPS Camera." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPSCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FPSCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AFPSCharacter, FPSCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FPSCameraComponent_MetaData, ARRAY_COUNT(NewProp_FPSCameraComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuzzleOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FPSMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FPSCameraComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFPSCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacter, 2588030896);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, &AFPSCharacter::StaticClass, TEXT("/Script/FPSProject"), TEXT("AFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
