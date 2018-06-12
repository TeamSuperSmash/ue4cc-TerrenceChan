// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HowTo_UMGGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowTo_UMGGameModeBase() {}
// Cross Module References
	HOWTO_UMG_API UClass* Z_Construct_UClass_AHowTo_UMGGameModeBase_NoRegister();
	HOWTO_UMG_API UClass* Z_Construct_UClass_AHowTo_UMGGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HowTo_UMG();
	HOWTO_UMG_API UFunction* Z_Construct_UFunction_AHowTo_UMGGameModeBase_ChangeMenuWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AHowTo_UMGGameModeBase::StaticRegisterNativesAHowTo_UMGGameModeBase()
	{
		UClass* Class = AHowTo_UMGGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", &AHowTo_UMGGameModeBase::execChangeMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AHowTo_UMGGameModeBase_ChangeMenuWidget()
	{
		struct HowTo_UMGGameModeBase_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "NewWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(HowTo_UMGGameModeBase_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewWidgetClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UMG Game" },
				{ "ModuleRelativePath", "HowTo_UMGGameModeBase.h" },
				{ "ToolTip", "Remove current menu widget and create new one from the specified class." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHowTo_UMGGameModeBase, "ChangeMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HowTo_UMGGameModeBase_eventChangeMenuWidget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHowTo_UMGGameModeBase_NoRegister()
	{
		return AHowTo_UMGGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AHowTo_UMGGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_HowTo_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AHowTo_UMGGameModeBase_ChangeMenuWidget, "ChangeMenuWidget" }, // 2195609418
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "HowTo_UMGGameModeBase.h" },
				{ "ModuleRelativePath", "HowTo_UMGGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "HowTo_UMGGameModeBase.h" },
				{ "ToolTip", "The widget instance that we are using in our menu." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AHowTo_UMGGameModeBase, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_CurrentWidget_MetaData, ARRAY_COUNT(NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWidgetClass_MetaData[] = {
				{ "Category", "UMG Game" },
				{ "ModuleRelativePath", "HowTo_UMGGameModeBase.h" },
				{ "ToolTip", "Widget class will be used as menu when game starts." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "StartingWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000015, 1, nullptr, STRUCT_OFFSET(AHowTo_UMGGameModeBase, StartingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_StartingWidgetClass_MetaData, ARRAY_COUNT(NewProp_StartingWidgetClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartingWidgetClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHowTo_UMGGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHowTo_UMGGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(AHowTo_UMGGameModeBase, 2966977585);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHowTo_UMGGameModeBase(Z_Construct_UClass_AHowTo_UMGGameModeBase, &AHowTo_UMGGameModeBase::StaticClass, TEXT("/Script/HowTo_UMG"), TEXT("AHowTo_UMGGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHowTo_UMGGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
