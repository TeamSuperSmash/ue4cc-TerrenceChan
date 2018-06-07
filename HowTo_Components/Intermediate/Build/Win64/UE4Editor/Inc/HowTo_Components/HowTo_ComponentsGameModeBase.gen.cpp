// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HowTo_ComponentsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowTo_ComponentsGameModeBase() {}
// Cross Module References
	HOWTO_COMPONENTS_API UClass* Z_Construct_UClass_AHowTo_ComponentsGameModeBase_NoRegister();
	HOWTO_COMPONENTS_API UClass* Z_Construct_UClass_AHowTo_ComponentsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HowTo_Components();
// End Cross Module References
	void AHowTo_ComponentsGameModeBase::StaticRegisterNativesAHowTo_ComponentsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHowTo_ComponentsGameModeBase_NoRegister()
	{
		return AHowTo_ComponentsGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AHowTo_ComponentsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_HowTo_Components,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "HowTo_ComponentsGameModeBase.h" },
				{ "ModuleRelativePath", "HowTo_ComponentsGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHowTo_ComponentsGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHowTo_ComponentsGameModeBase::StaticClass,
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
	IMPLEMENT_CLASS(AHowTo_ComponentsGameModeBase, 3083015874);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowTo_ComponentsGameModeBase(Z_Construct_UClass_AHowTo_ComponentsGameModeBase, &AHowTo_ComponentsGameModeBase::StaticClass, TEXT("/Script/HowTo_Components"), TEXT("AHowTo_ComponentsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowTo_ComponentsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
