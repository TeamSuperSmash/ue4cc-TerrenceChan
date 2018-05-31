// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HowTo_PlayerInputGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowTo_PlayerInputGameModeBase() {}
// Cross Module References
	HOWTO_PLAYERINPUT_API UClass* Z_Construct_UClass_AHowTo_PlayerInputGameModeBase_NoRegister();
	HOWTO_PLAYERINPUT_API UClass* Z_Construct_UClass_AHowTo_PlayerInputGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HowTo_PlayerInput();
// End Cross Module References
	void AHowTo_PlayerInputGameModeBase::StaticRegisterNativesAHowTo_PlayerInputGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHowTo_PlayerInputGameModeBase_NoRegister()
	{
		return AHowTo_PlayerInputGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AHowTo_PlayerInputGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_HowTo_PlayerInput,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "HowTo_PlayerInputGameModeBase.h" },
				{ "ModuleRelativePath", "HowTo_PlayerInputGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHowTo_PlayerInputGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHowTo_PlayerInputGameModeBase::StaticClass,
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
	IMPLEMENT_CLASS(AHowTo_PlayerInputGameModeBase, 254224592);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowTo_PlayerInputGameModeBase(Z_Construct_UClass_AHowTo_PlayerInputGameModeBase, &AHowTo_PlayerInputGameModeBase::StaticClass, TEXT("/Script/HowTo_PlayerInput"), TEXT("AHowTo_PlayerInputGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowTo_PlayerInputGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
