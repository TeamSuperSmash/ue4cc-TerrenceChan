// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HowTo_VTEGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowTo_VTEGameModeBase() {}
// Cross Module References
	HOWTO_VTE_API UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase_NoRegister();
	HOWTO_VTE_API UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HowTo_VTE();
// End Cross Module References
	void AHowTo_VTEGameModeBase::StaticRegisterNativesAHowTo_VTEGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase_NoRegister()
	{
		return AHowTo_VTEGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AHowTo_VTEGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_HowTo_VTE,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "HowTo_VTEGameModeBase.h" },
				{ "ModuleRelativePath", "HowTo_VTEGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHowTo_VTEGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHowTo_VTEGameModeBase::StaticClass,
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
	IMPLEMENT_CLASS(AHowTo_VTEGameModeBase, 1803842744);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowTo_VTEGameModeBase(Z_Construct_UClass_AHowTo_VTEGameModeBase, &AHowTo_VTEGameModeBase::StaticClass, TEXT("/Script/HowTo_VTE"), TEXT("AHowTo_VTEGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowTo_VTEGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
