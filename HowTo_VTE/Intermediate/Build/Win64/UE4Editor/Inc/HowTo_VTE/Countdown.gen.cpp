// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Countdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountdown() {}
// Cross Module References
	HOWTO_VTE_API UClass* Z_Construct_UClass_ACountdown_NoRegister();
	HOWTO_VTE_API UClass* Z_Construct_UClass_ACountdown();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HowTo_VTE();
	HOWTO_VTE_API UFunction* Z_Construct_UFunction_ACountdown_CountdownHasFinished();
// End Cross Module References
	static FName NAME_ACountdown_CountdownHasFinished = FName(TEXT("CountdownHasFinished"));
	void ACountdown::CountdownHasFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACountdown_CountdownHasFinished),NULL);
	}
	void ACountdown::StaticRegisterNativesACountdown()
	{
		UClass* Class = ACountdown::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CountdownHasFinished", &ACountdown::execCountdownHasFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ACountdown_CountdownHasFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Countdown.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACountdown, "CountdownHasFinished", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACountdown_NoRegister()
	{
		return ACountdown::StaticClass();
	}
	UClass* Z_Construct_UClass_ACountdown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_HowTo_VTE,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ACountdown_CountdownHasFinished, "CountdownHasFinished" }, // 712652607
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Countdown.h" },
				{ "ModuleRelativePath", "Countdown.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountdownInterval_MetaData[] = {
				{ "Category", "Countdown" },
				{ "ModuleRelativePath", "Countdown.h" },
				{ "ToolTip", "How long in seconds, the countdown will run." },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CountdownInterval = { UE4CodeGen_Private::EPropertyClass::Int, "CountdownInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACountdown, CountdownInterval), METADATA_PARAMS(NewProp_CountdownInterval_MetaData, ARRAY_COUNT(NewProp_CountdownInterval_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CountdownInterval,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACountdown>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACountdown::StaticClass,
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
	IMPLEMENT_CLASS(ACountdown, 4194609768);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACountdown(Z_Construct_UClass_ACountdown, &ACountdown::StaticClass, TEXT("/Script/HowTo_VTE"), TEXT("ACountdown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACountdown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
