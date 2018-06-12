// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HowTo_UMGPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowTo_UMGPlayerController() {}
// Cross Module References
	HOWTO_UMG_API UClass* Z_Construct_UClass_AHowTo_UMGPlayerController_NoRegister();
	HOWTO_UMG_API UClass* Z_Construct_UClass_AHowTo_UMGPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_HowTo_UMG();
// End Cross Module References
	void AHowTo_UMGPlayerController::StaticRegisterNativesAHowTo_UMGPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AHowTo_UMGPlayerController_NoRegister()
	{
		return AHowTo_UMGPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AHowTo_UMGPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_HowTo_UMG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "HowTo_UMGPlayerController.h" },
				{ "ModuleRelativePath", "HowTo_UMGPlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHowTo_UMGPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHowTo_UMGPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHowTo_UMGPlayerController, 3942333613);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowTo_UMGPlayerController(Z_Construct_UClass_AHowTo_UMGPlayerController, &AHowTo_UMGPlayerController::StaticClass, TEXT("/Script/HowTo_UMG"), TEXT("AHowTo_UMGPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowTo_UMGPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
