// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRHMD/Public/OculusXRHMDRuntimeSettings.h"
#include "OculusXRHMD/Public/OculusXRHMDTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRHMDRuntimeSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRHMDRuntimeSettings();
	OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRHMDRuntimeSettings_NoRegister();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_EProcessorFavor();
	OCULUSXRHMD_API UEnum* Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType();
	OCULUSXRHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSplashDesc();
	UPackage* Z_Construct_UPackage__Script_OculusXRHMD();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRSupportedDevices;
	static UEnum* EOculusXRSupportedDevices_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRSupportedDevices.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRSupportedDevices.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices, (UObject*)Z_Construct_UPackage__Script_OculusXRHMD(), TEXT("EOculusXRSupportedDevices"));
		}
		return Z_Registration_Info_UEnum_EOculusXRSupportedDevices.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRSupportedDevices>()
	{
		return EOculusXRSupportedDevices_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices_Statics::Enumerators[] = {
		{ "EOculusXRSupportedDevices::Quest2", (int64)EOculusXRSupportedDevices::Quest2 },
		{ "EOculusXRSupportedDevices::QuestPro", (int64)EOculusXRSupportedDevices::QuestPro },
		{ "EOculusXRSupportedDevices::Quest3", (int64)EOculusXRSupportedDevices::Quest3 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
		{ "Quest2.Comment", "/** 0 was the deprecated Meta Quest */" },
		{ "Quest2.DisplayName", "Meta Quest 2" },
		{ "Quest2.Name", "EOculusXRSupportedDevices::Quest2" },
		{ "Quest2.ToolTip", "0 was the deprecated Meta Quest" },
		{ "Quest3.DisplayName", "Meta Quest 3" },
		{ "Quest3.Name", "EOculusXRSupportedDevices::Quest3" },
		{ "QuestPro.DisplayName", "Meta Quest Pro" },
		{ "QuestPro.Name", "EOculusXRSupportedDevices::QuestPro" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRHMD,
		nullptr,
		"EOculusXRSupportedDevices",
		"EOculusXRSupportedDevices",
		Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRSupportedDevices.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRSupportedDevices.InnerSingleton, Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRSupportedDevices.InnerSingleton;
	}
	void UOculusXRHMDRuntimeSettings::StaticRegisterNativesUOculusXRHMDRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRHMDRuntimeSettings);
	UClass* Z_Construct_UClass_UOculusXRHMDRuntimeSettings_NoRegister()
	{
		return UOculusXRHMDRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_SystemSplashBackground_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemSplashBackground_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SystemSplashBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoEnabled_MetaData[];
#endif
		static void NewProp_bAutoEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoEnabled;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplashDescs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplashDescs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplashDescs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_XrApi_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XrApi_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_XrApi;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpace;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControllerPoseAlignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerPoseAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControllerPoseAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsDash_MetaData[];
#endif
		static void NewProp_bSupportsDash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsDash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompositesDepth_MetaData[];
#endif
		static void NewProp_bCompositesDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompositesDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHQDistortion_MetaData[];
#endif
		static void NewProp_bHQDistortion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHQDistortion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaXRJsonPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaXRJsonPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicResolution_MetaData[];
#endif
		static void NewProp_bDynamicResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelDensityMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelDensityMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPULevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CPULevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPULevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GPULevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedDevices_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedDevices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedDevices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedDevices;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SuggestedCpuPerfLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedCpuPerfLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SuggestedCpuPerfLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SuggestedGpuPerfLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedGpuPerfLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SuggestedGpuPerfLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FoveatedRenderingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoveatedRenderingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FoveatedRenderingMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FoveatedRenderingLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoveatedRenderingLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FoveatedRenderingLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicFoveatedRendering_MetaData[];
#endif
		static void NewProp_bDynamicFoveatedRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicFoveatedRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportEyeTrackedFoveatedRendering_MetaData[];
#endif
		static void NewProp_bSupportEyeTrackedFoveatedRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportEyeTrackedFoveatedRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompositeDepthMobile_MetaData[];
#endif
		static void NewProp_bCompositeDepthMobile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompositeDepthMobile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFocusAware_MetaData[];
#endif
		static void NewProp_bFocusAware_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFocusAware;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLateLatching_MetaData[];
#endif
		static void NewProp_bLateLatching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLateLatching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresSystemKeyboard_MetaData[];
#endif
		static void NewProp_bRequiresSystemKeyboard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresSystemKeyboard;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandTrackingSupport_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandTrackingSupport_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandTrackingSupport;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandTrackingFrequency_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandTrackingFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandTrackingFrequency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandTrackingVersion_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandTrackingVersion_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandTrackingVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInsightPassthroughEnabled_MetaData[];
#endif
		static void NewProp_bInsightPassthroughEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInsightPassthroughEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnchorSupportEnabled_MetaData[];
#endif
		static void NewProp_bAnchorSupportEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchorSupportEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnchorSharingEnabled_MetaData[];
#endif
		static void NewProp_bAnchorSharingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchorSharingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSceneSupportEnabled_MetaData[];
#endif
		static void NewProp_bSceneSupportEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSceneSupportEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBodyTrackingEnabled_MetaData[];
#endif
		static void NewProp_bBodyTrackingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBodyTrackingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEyeTrackingEnabled_MetaData[];
#endif
		static void NewProp_bEyeTrackingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEyeTrackingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFaceTrackingEnabled_MetaData[];
#endif
		static void NewProp_bFaceTrackingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFaceTrackingEnabled;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_FaceTrackingDataSource_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceTrackingDataSource_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingDataSource_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_FaceTrackingDataSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeploySoToDevice_MetaData[];
#endif
		static void NewProp_bDeploySoToDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeploySoToDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportExperimentalFeatures_MetaData[];
#endif
		static void NewProp_bSupportExperimentalFeatures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportExperimentalFeatures;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ProcessorFavor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessorFavor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProcessorFavor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileTurnOffEnabled_MetaData[];
#endif
		static void NewProp_bTileTurnOffEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileTurnOffEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRHMD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Implements the settings for the OculusVR plugin.\n*/" },
#endif
		{ "IncludePath", "OculusXRHMDRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements the settings for the OculusVR plugin." },
#endif
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SystemSplashBackground_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SystemSplashBackground_MetaData[] = {
		{ "Category", "System SplashScreen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Configure System Splash Screen background type. To configure Splash Image go to Project Settings > Platforms > Android > Launch Image. */" },
#endif
		{ "DisplayName", "System Splash Screen Background" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configure System Splash Screen background type. To configure Splash Image go to Project Settings > Platforms > Android > Launch Image." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SystemSplashBackground = { "SystemSplashBackground", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, SystemSplashBackground), Z_Construct_UEnum_OculusXRHMD_ESystemSplashBackgroundType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SystemSplashBackground_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SystemSplashBackground_MetaData) }; // 4185478579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_MetaData[] = {
		{ "Category", "Engine SplashScreen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the Splash screen is enabled. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the Splash screen is enabled." },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bAutoEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAutoEnabled = { "bAutoEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAutoEnabled_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SplashDescs_Inner = { "SplashDescs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRSplashDesc, METADATA_PARAMS(0, nullptr) }; // 304628265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SplashDescs_MetaData[] = {
		{ "Category", "Engine SplashScreen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An array of splash screen descriptors listing textures to show and their positions. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of splash screen descriptors listing textures to show and their positions." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SplashDescs = { "SplashDescs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, SplashDescs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SplashDescs_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SplashDescs_MetaData) }; // 304628265
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_XrApi_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_XrApi_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09This selects the XR API that the engine will use. If unsure, OVRPlugin OpenXR is the recommended API.\n\x09The OpenXR plugin must also be enabled to use Native OpenXR.\n\x09*/" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "XR API" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This selects the XR API that the engine will use. If unsure, OVRPlugin OpenXR is the recommended API.\nThe OpenXR plugin must also be enabled to use Native OpenXR." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_XrApi = { "XrApi", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, XrApi), Z_Construct_UEnum_OculusXRHMD_EOculusXRXrApi, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_XrApi_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_XrApi_MetaData) }; // 639612870
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ColorSpace_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The target color space */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The target color space" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, ColorSpace), Z_Construct_UEnum_OculusXRHMD_EOculusXRColorSpace, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ColorSpace_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ColorSpace_MetaData) }; // 3733253032
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ControllerPoseAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ControllerPoseAlignment_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the controller hand poses align to the Meta XR pose definitions or the OpenXR pose definitions */" },
#endif
		{ "EditCondition", "XrApi != EOculusXRXrApi::NativeOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the controller hand poses align to the Meta XR pose definitions or the OpenXR pose definitions" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ControllerPoseAlignment = { "ControllerPoseAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, ControllerPoseAlignment), Z_Construct_UEnum_OculusXRHMD_EOculusXRControllerPoseAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ControllerPoseAlignment_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ControllerPoseAlignment_MetaData) }; // 3515864375
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportsDash_MetaData[] = {
		{ "Category", "PC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether Dash is supported by the app, which will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!) */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Dash is supported by the app, which will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!)" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportsDash_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bSupportsDash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportsDash = { "bSupportsDash", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportsDash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportsDash_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportsDash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_MetaData[] = {
		{ "Category", "PC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the app's depth buffer is shared with the Rift Compositor, for layer (including Dash) compositing, PTW, and potentially more. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the app's depth buffer is shared with the Rift Compositor, for layer (including Dash) compositing, PTW, and potentially more." },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bCompositesDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositesDepth = { "bCompositesDepth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositesDepth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bHQDistortion_MetaData[] = {
		{ "Category", "PC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Computes mipmaps for the eye buffers every frame, for a higher quality distortion */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computes mipmaps for the eye buffers every frame, for a higher quality distortion" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bHQDistortion_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bHQDistortion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bHQDistortion = { "bHQDistortion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bHQDistortion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bHQDistortion_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bHQDistortion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_MetaXRJsonPath_MetaData[] = {
		{ "Category", "PC" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09Path to Meta XR Simulator JSON file (meta_openxr_simulator.json).\n\x09*/" },
#endif
		{ "DisplayName", "Meta XR Simulator JSON File." },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path to Meta XR Simulator JSON file (meta_openxr_simulator.json)." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_MetaXRJsonPath = { "MetaXRJsonPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, MetaXRJsonPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_MetaXRJsonPath_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_MetaXRJsonPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicResolution_MetaData[] = {
		{ "Category", "Mobile|Dynamic Resolution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum allowed pixel density. */" },
#endif
		{ "DisplayName", "Enable Dynamic Resolution" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowed pixel density." },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicResolution_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bDynamicResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicResolution = { "bDynamicResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicResolution_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicResolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_PixelDensityMin_MetaData[] = {
		{ "Category", "Mobile|Dynamic Resolution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum allowed pixel density. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum allowed pixel density." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_PixelDensityMin = { "PixelDensityMin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, PixelDensityMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_PixelDensityMin_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_PixelDensityMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_PixelDensityMax_MetaData[] = {
		{ "Category", "Mobile|Dynamic Resolution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum allowed pixel density. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum allowed pixel density." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_PixelDensityMax = { "PixelDensityMax", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, PixelDensityMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_PixelDensityMax_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_PixelDensityMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_CPULevel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default CPU level controlling CPU frequency on the mobile device */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Blueprint Function Get/SetSuggestedCpuAndGpuPerformanceLevels instead." },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default CPU level controlling CPU frequency on the mobile device" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, CPULevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_CPULevel_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_CPULevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_GPULevel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default GPU level controlling GPU frequency on the mobile device */" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Blueprint Function Get/SetSuggestedCpuAndGpuPerformanceLevels instead." },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default GPU level controlling GPU frequency on the mobile device" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, GPULevel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_GPULevel_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_GPULevel_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SupportedDevices_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SupportedDevices_Inner = { "SupportedDevices", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRHMD_EOculusXRSupportedDevices, METADATA_PARAMS(0, nullptr) }; // 3111328996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SupportedDevices_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Select supported Meta Quest Devices */" },
#endif
		{ "DisplayName", "Supported Meta Quest devices" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select supported Meta Quest Devices" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SupportedDevices = { "SupportedDevices", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, SupportedDevices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SupportedDevices_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SupportedDevices_MetaData) }; // 3111328996
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedCpuPerfLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedCpuPerfLevel_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Suggested CPU perf level when application starts on Oculus Quest */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Suggested CPU perf level when application starts on Oculus Quest" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedCpuPerfLevel = { "SuggestedCpuPerfLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, SuggestedCpuPerfLevel), Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedCpuPerfLevel_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedCpuPerfLevel_MetaData) }; // 542758215
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedGpuPerfLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedGpuPerfLevel_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Suggested GPU perf level when application starts on Oculus Quest */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Suggested GPU perf level when application starts on Oculus Quest" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedGpuPerfLevel = { "SuggestedGpuPerfLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, SuggestedGpuPerfLevel), Z_Construct_UEnum_OculusXRHMD_EOculusXRProcessorPerformanceLevel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedGpuPerfLevel_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedGpuPerfLevel_MetaData) }; // 542758215
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingMethod_MetaData[] = {
		{ "Category", "Mobile|Foveated Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Foveated rendering method */" },
#endif
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Foveated rendering method" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingMethod = { "FoveatedRenderingMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, FoveatedRenderingMethod), Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingMethod_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingMethod_MetaData) }; // 3859704462
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingLevel_MetaData[] = {
		{ "Category", "Mobile|Foveated Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Foveated rendering level */" },
#endif
		{ "EditCondition", "XrApi != EOculusXRXrApi::NativeOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Foveated rendering level" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingLevel = { "FoveatedRenderingLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, FoveatedRenderingLevel), Z_Construct_UEnum_OculusXRHMD_EOculusXRFoveatedRenderingLevel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingLevel_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingLevel_MetaData) }; // 3472220838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicFoveatedRendering_MetaData[] = {
		{ "Category", "Mobile|Foveated Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether foveated rendering levels will change dynamically based on performance headroom or not (up to the set Foveation Level) */" },
#endif
		{ "EditCondition", "XrApi != EOculusXRXrApi::NativeOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether foveated rendering levels will change dynamically based on performance headroom or not (up to the set Foveation Level)" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicFoveatedRendering_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bDynamicFoveatedRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicFoveatedRendering = { "bDynamicFoveatedRendering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicFoveatedRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicFoveatedRendering_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicFoveatedRendering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportEyeTrackedFoveatedRendering_MetaData[] = {
		{ "Category", "Mobile|Foveated Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether eye tracked foveated rendering can be used with the app. */" },
#endif
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether eye tracked foveated rendering can be used with the app." },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportEyeTrackedFoveatedRendering_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bSupportEyeTrackedFoveatedRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportEyeTrackedFoveatedRendering = { "bSupportEyeTrackedFoveatedRendering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportEyeTrackedFoveatedRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportEyeTrackedFoveatedRendering_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportEyeTrackedFoveatedRendering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositeDepthMobile_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the app's depth buffer is shared with the compositor to enable depth testing against other layers.\n\x09Mobile depth composition has performance overhead both on the engine (for resolving depth) and on the compositor (for depth testing against other layers) */" },
#endif
		{ "DisplayName", "Composite Depth" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the app's depth buffer is shared with the compositor to enable depth testing against other layers.\n      Mobile depth composition has performance overhead both on the engine (for resolving depth) and on the compositor (for depth testing against other layers)" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositeDepthMobile_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bCompositeDepthMobile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositeDepthMobile = { "bCompositeDepthMobile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositeDepthMobile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositeDepthMobile_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositeDepthMobile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFocusAware_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled the app will be focus aware. This will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!) */" },
#endif
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled the app will be focus aware. This will keep the app in foreground when the User presses the oculus button (needs the app to handle input focus loss!)" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFocusAware_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bFocusAware = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFocusAware = { "bFocusAware", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFocusAware_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFocusAware_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFocusAware_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bLateLatching_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** [Experimental]Enable Late latching for reducing HMD and controller latency, improve tracking prediction quality, multiview and vulkan must be enabled for this feature. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[Experimental]Enable Late latching for reducing HMD and controller latency, improve tracking prediction quality, multiview and vulkan must be enabled for this feature." },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bLateLatching_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bLateLatching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bLateLatching = { "bLateLatching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bLateLatching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bLateLatching_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bLateLatching_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled the app will use the Oculus system keyboard for input fields. This requires that the app be focus aware. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled the app will use the Oculus system keyboard for input fields. This requires that the app be focus aware." },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bRequiresSystemKeyboard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard = { "bRequiresSystemKeyboard", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether controllers and/or hands can be used with the app */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether controllers and/or hands can be used with the app" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport = { "HandTrackingSupport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, HandTrackingSupport), Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingSupport, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_MetaData) }; // 4116072007
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Note that a higher tracking frequency will reserve some performance headroom from the application's budget. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Note that a higher tracking frequency will reserve some performance headroom from the application's budget." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency = { "HandTrackingFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, HandTrackingFrequency), Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingFrequency, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency_MetaData) }; // 104216032
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingVersion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingVersion_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The version of hand tracking algorithm */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The version of hand tracking algorithm" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingVersion = { "HandTrackingVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, HandTrackingVersion), Z_Construct_UEnum_OculusXRHMD_EOculusXRHandTrackingVersion, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingVersion_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingVersion_MetaData) }; // 293394772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bInsightPassthroughEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether passthrough functionality can be used with the app */" },
#endif
		{ "DisplayName", "Passthrough Enabled" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether passthrough functionality can be used with the app" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bInsightPassthroughEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bInsightPassthroughEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bInsightPassthroughEnabled = { "bInsightPassthroughEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bInsightPassthroughEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bInsightPassthroughEnabled_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bInsightPassthroughEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSupportEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether Spatial Anchors can be used with the app */" },
#endif
		{ "DisplayName", "Anchor Support" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Spatial Anchors can be used with the app" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSupportEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bAnchorSupportEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSupportEnabled = { "bAnchorSupportEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSupportEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSupportEnabled_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSupportEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSharingEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether Spatial Anchor Sharing can be used with the app */" },
#endif
		{ "DisplayName", "Anchor Sharing" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Spatial Anchor Sharing can be used with the app" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSharingEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bAnchorSharingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSharingEnabled = { "bAnchorSharingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSharingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSharingEnabled_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSharingEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSceneSupportEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether Scene can be used with the app */" },
#endif
		{ "DisplayName", "Scene Support" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Scene can be used with the app" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSceneSupportEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bSceneSupportEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSceneSupportEnabled = { "bSceneSupportEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSceneSupportEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSceneSupportEnabled_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSceneSupportEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bBodyTrackingEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether body tracking functionality can be used with the app */" },
#endif
		{ "DisplayName", "Body Tracking Enabled" },
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether body tracking functionality can be used with the app" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bBodyTrackingEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bBodyTrackingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bBodyTrackingEnabled = { "bBodyTrackingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bBodyTrackingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bBodyTrackingEnabled_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bBodyTrackingEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bEyeTrackingEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether eye tracking functionality can be used with the app */" },
#endif
		{ "DisplayName", "Eye Tracking Enabled" },
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether eye tracking functionality can be used with the app" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bEyeTrackingEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bEyeTrackingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bEyeTrackingEnabled = { "bEyeTrackingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bEyeTrackingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bEyeTrackingEnabled_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bEyeTrackingEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFaceTrackingEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether face tracking functionality can be used with the app */" },
#endif
		{ "DisplayName", "Face Tracking Enabled" },
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether face tracking functionality can be used with the app" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFaceTrackingEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bFaceTrackingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFaceTrackingEnabled = { "bFaceTrackingEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFaceTrackingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFaceTrackingEnabled_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFaceTrackingEnabled_MetaData) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FaceTrackingDataSource_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FaceTrackingDataSource_ElementProp = { "FaceTrackingDataSource", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRHMD_EFaceTrackingDataSourceConfig, METADATA_PARAMS(0, nullptr) }; // 1820251538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FaceTrackingDataSource_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Select preffered Face Tracking data sources */" },
#endif
		{ "DisplayName", "Face Tracking Source" },
		{ "EditCondition", "XrApi == EOculusXRXrApi::OVRPluginOpenXR" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select preffered Face Tracking data sources" },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FaceTrackingDataSource = { "FaceTrackingDataSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, FaceTrackingDataSource), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FaceTrackingDataSource_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FaceTrackingDataSource_MetaData) }; // 1820251538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDeploySoToDevice_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** On supported Oculus mobile platforms, copy compiled .so directly to device. Allows updating compiled code without rebuilding and installing an APK. */" },
#endif
		{ "DisplayName", "Deploy compiled .so directly to device" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On supported Oculus mobile platforms, copy compiled .so directly to device. Allows updating compiled code without rebuilding and installing an APK." },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDeploySoToDevice_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bDeploySoToDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDeploySoToDevice = { "bDeploySoToDevice", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDeploySoToDevice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDeploySoToDevice_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDeploySoToDevice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportExperimentalFeatures_MetaData[] = {
		{ "Category", "Experimental" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether experimental features listed below can be used with the app. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether experimental features listed below can be used with the app." },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportExperimentalFeatures_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bSupportExperimentalFeatures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportExperimentalFeatures = { "bSupportExperimentalFeatures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportExperimentalFeatures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportExperimentalFeatures_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportExperimentalFeatures_MetaData) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ProcessorFavor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ProcessorFavor_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If selected, will increase the frequency of one processor at the expense of decreasing the frequency of the other on supported devices. */" },
#endif
		{ "DisplayName", "Processor Favor" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If selected, will increase the frequency of one processor at the expense of decreasing the frequency of the other on supported devices." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ProcessorFavor = { "ProcessorFavor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRHMDRuntimeSettings, ProcessorFavor), Z_Construct_UEnum_OculusXRHMD_EProcessorFavor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ProcessorFavor_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ProcessorFavor_MetaData) }; // 2300531910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bTileTurnOffEnabled_MetaData[] = {
		{ "Category", "Mobile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether Tile Turn Off is enabled in app */" },
#endif
		{ "DisplayName", "Tile Turn Off" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/OculusXRHMDRuntimeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Tile Turn Off is enabled in app" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bTileTurnOffEnabled_SetBit(void* Obj)
	{
		((UOculusXRHMDRuntimeSettings*)Obj)->bTileTurnOffEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bTileTurnOffEnabled = { "bTileTurnOffEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRHMDRuntimeSettings), &Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bTileTurnOffEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bTileTurnOffEnabled_MetaData), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bTileTurnOffEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SystemSplashBackground_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SystemSplashBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAutoEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SplashDescs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SplashDescs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_XrApi_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_XrApi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ColorSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ControllerPoseAlignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ControllerPoseAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportsDash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositesDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bHQDistortion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_MetaXRJsonPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_PixelDensityMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_PixelDensityMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_CPULevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_GPULevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SupportedDevices_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SupportedDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SupportedDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedCpuPerfLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedCpuPerfLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedGpuPerfLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_SuggestedGpuPerfLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FoveatedRenderingLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDynamicFoveatedRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportEyeTrackedFoveatedRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bCompositeDepthMobile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFocusAware,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bLateLatching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bRequiresSystemKeyboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingVersion_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_HandTrackingVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bInsightPassthroughEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSupportEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bAnchorSharingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSceneSupportEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bBodyTrackingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bEyeTrackingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bFaceTrackingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FaceTrackingDataSource_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FaceTrackingDataSource_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_FaceTrackingDataSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bDeploySoToDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bSupportExperimentalFeatures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ProcessorFavor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_ProcessorFavor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::NewProp_bTileTurnOffEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRHMDRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::ClassParams = {
		&UOculusXRHMDRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRHMDRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings.OuterSingleton, Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings.OuterSingleton;
	}
	template<> OCULUSXRHMD_API UClass* StaticClass<UOculusXRHMDRuntimeSettings>()
	{
		return UOculusXRHMDRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRHMDRuntimeSettings);
	UOculusXRHMDRuntimeSettings::~UOculusXRHMDRuntimeSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_Statics::EnumInfo[] = {
		{ EOculusXRSupportedDevices_StaticEnum, TEXT("EOculusXRSupportedDevices"), &Z_Registration_Info_UEnum_EOculusXRSupportedDevices, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3111328996U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRHMDRuntimeSettings, UOculusXRHMDRuntimeSettings::StaticClass, TEXT("UOculusXRHMDRuntimeSettings"), &Z_Registration_Info_UClass_UOculusXRHMDRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRHMDRuntimeSettings), 2493255208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_3895889339(TEXT("/Script/OculusXRHMD"),
		Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
