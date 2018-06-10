// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HowTo_PlayerCameraGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowTo_PlayerCameraGameModeBase() {}
// Cross Module References
	HOWTO_PLAYERCAMERA_API UClass* Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_NoRegister();
	HOWTO_PLAYERCAMERA_API UClass* Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HowTo_PlayerCamera();
// End Cross Module References
	void AHowTo_PlayerCameraGameModeBase::StaticRegisterNativesAHowTo_PlayerCameraGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase_NoRegister()
	{
		return AHowTo_PlayerCameraGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_HowTo_PlayerCamera,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "HowTo_PlayerCameraGameModeBase.h" },
				{ "ModuleRelativePath", "HowTo_PlayerCameraGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHowTo_PlayerCameraGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHowTo_PlayerCameraGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHowTo_PlayerCameraGameModeBase, 7512647);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowTo_PlayerCameraGameModeBase(Z_Construct_UClass_AHowTo_PlayerCameraGameModeBase, &AHowTo_PlayerCameraGameModeBase::StaticClass, TEXT("/Script/HowTo_PlayerCamera"), TEXT("AHowTo_PlayerCameraGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowTo_PlayerCameraGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
