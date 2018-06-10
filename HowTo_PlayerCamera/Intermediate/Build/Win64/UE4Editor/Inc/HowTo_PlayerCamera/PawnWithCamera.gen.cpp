// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PawnWithCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnWithCamera() {}
// Cross Module References
	HOWTO_PLAYERCAMERA_API UClass* Z_Construct_UClass_APawnWithCamera_NoRegister();
	HOWTO_PLAYERCAMERA_API UClass* Z_Construct_UClass_APawnWithCamera();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_HowTo_PlayerCamera();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void APawnWithCamera::StaticRegisterNativesAPawnWithCamera()
	{
	}
	UClass* Z_Construct_UClass_APawnWithCamera_NoRegister()
	{
		return APawnWithCamera::StaticClass();
	}
	UClass* Z_Construct_UClass_APawnWithCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_HowTo_PlayerCamera,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "PawnWithCamera.h" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxPitch_MetaData[] = {
				{ "Category", "PawnWithCamera" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxPitch = { UE4CodeGen_Private::EPropertyClass::Float, "maxPitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawnWithCamera, maxPitch), METADATA_PARAMS(NewProp_maxPitch_MetaData, ARRAY_COUNT(NewProp_maxPitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minPitch_MetaData[] = {
				{ "Category", "PawnWithCamera" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minPitch = { UE4CodeGen_Private::EPropertyClass::Float, "minPitch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawnWithCamera, minPitch), METADATA_PARAMS(NewProp_minPitch_MetaData, ARRAY_COUNT(NewProp_minPitch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeedMultiplier_MetaData[] = {
				{ "Category", "PawnWithCamera" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeedMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "moveSpeedMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawnWithCamera, moveSpeedMultiplier), METADATA_PARAMS(NewProp_moveSpeedMultiplier_MetaData, ARRAY_COUNT(NewProp_moveSpeedMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minZoomDistance_MetaData[] = {
				{ "Category", "PawnWithCamera" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minZoomDistance = { UE4CodeGen_Private::EPropertyClass::Float, "minZoomDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawnWithCamera, minZoomDistance), METADATA_PARAMS(NewProp_minZoomDistance_MetaData, ARRAY_COUNT(NewProp_minZoomDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxZoomDistance_MetaData[] = {
				{ "Category", "PawnWithCamera" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxZoomDistance = { UE4CodeGen_Private::EPropertyClass::Float, "maxZoomDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawnWithCamera, maxZoomDistance), METADATA_PARAMS(NewProp_maxZoomDistance_MetaData, ARRAY_COUNT(NewProp_maxZoomDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minZoomFOV_MetaData[] = {
				{ "Category", "PawnWithCamera" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minZoomFOV = { UE4CodeGen_Private::EPropertyClass::Float, "minZoomFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawnWithCamera, minZoomFOV), METADATA_PARAMS(NewProp_minZoomFOV_MetaData, ARRAY_COUNT(NewProp_minZoomFOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxZoomFOV_MetaData[] = {
				{ "Category", "PawnWithCamera" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxZoomFOV = { UE4CodeGen_Private::EPropertyClass::Float, "maxZoomFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawnWithCamera, maxZoomFOV), METADATA_PARAMS(NewProp_maxZoomFOV_MetaData, ARRAY_COUNT(NewProp_maxZoomFOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoomOutSpeedMultiplier_MetaData[] = {
				{ "Category", "PawnWithCamera" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zoomOutSpeedMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "zoomOutSpeedMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawnWithCamera, zoomOutSpeedMultiplier), METADATA_PARAMS(NewProp_zoomOutSpeedMultiplier_MetaData, ARRAY_COUNT(NewProp_zoomOutSpeedMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zoomInSpeedMultiplier_MetaData[] = {
				{ "Category", "PawnWithCamera" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
				{ "ToolTip", "Zoom variables" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zoomInSpeedMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "zoomInSpeedMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawnWithCamera, zoomInSpeedMultiplier), METADATA_PARAMS(NewProp_zoomInSpeedMultiplier_MetaData, ARRAY_COUNT(NewProp_zoomInSpeedMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurStaticMesh_MetaData[] = {
				{ "Category", "PawnWithCamera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurStaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "OurStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080009, 1, nullptr, STRUCT_OFFSET(APawnWithCamera, OurStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_OurStaticMesh_MetaData, ARRAY_COUNT(NewProp_OurStaticMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurCameraSpringArm_MetaData[] = {
				{ "Category", "PawnWithCamera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PawnWithCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurCameraSpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "OurCameraSpringArm", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080009, 1, nullptr, STRUCT_OFFSET(APawnWithCamera, OurCameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_OurCameraSpringArm_MetaData, ARRAY_COUNT(NewProp_OurCameraSpringArm_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_maxPitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_minPitch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_moveSpeedMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_minZoomDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_maxZoomDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_minZoomFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_maxZoomFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_zoomOutSpeedMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_zoomInSpeedMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OurStaticMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OurCameraSpringArm,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APawnWithCamera>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APawnWithCamera::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(APawnWithCamera, 3638687391);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnWithCamera(Z_Construct_UClass_APawnWithCamera, &APawnWithCamera::StaticClass, TEXT("/Script/HowTo_PlayerCamera"), TEXT("APawnWithCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnWithCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
