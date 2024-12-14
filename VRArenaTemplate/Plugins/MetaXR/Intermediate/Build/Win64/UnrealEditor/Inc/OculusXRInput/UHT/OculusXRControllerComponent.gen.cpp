// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../../Users/nick/Documents/GitHub/VRArenaTemplate/VRArenaTemplate/Plugins/MetaXR/Source/OculusXRInput/Public/OculusXRControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRControllerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRControllerComponent();
	OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRControllerComponent_NoRegister();
	OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRSide();
	UPackage* Z_Construct_UPackage__Script_OculusXRInput();
// End Cross Module References
	void UOculusXRControllerComponent::StaticRegisterNativesUOculusXRControllerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRControllerComponent);
	UClass* Z_Construct_UClass_UOculusXRControllerComponent_NoRegister()
	{
		return UOculusXRControllerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRControllerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderWhenUsingControllerDrivenHands_MetaData[];
#endif
		static void NewProp_RenderWhenUsingControllerDrivenHands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderWhenUsingControllerDrivenHands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRControllerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRInput,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRControllerComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRControllerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHand" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "OculusXRControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_SkeletonType_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The skeleton that will be loaded */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The skeleton that will be loaded" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRControllerComponent, SkeletonType), Z_Construct_UEnum_OculusXRInput_EOculusXRSide, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_SkeletonType_MetaData), Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_SkeletonType_MetaData) }; // 718879456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_RenderWhenUsingControllerDrivenHands_MetaData[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should this controller be rendered when using controller driven hand poses */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should this controller be rendered when using controller driven hand poses" },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_RenderWhenUsingControllerDrivenHands_SetBit(void* Obj)
	{
		((UOculusXRControllerComponent*)Obj)->RenderWhenUsingControllerDrivenHands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_RenderWhenUsingControllerDrivenHands = { "RenderWhenUsingControllerDrivenHands", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRControllerComponent), &Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_RenderWhenUsingControllerDrivenHands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_RenderWhenUsingControllerDrivenHands_MetaData), Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_RenderWhenUsingControllerDrivenHands_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRControllerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_SkeletonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_SkeletonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRControllerComponent_Statics::NewProp_RenderWhenUsingControllerDrivenHands,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRControllerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRControllerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRControllerComponent_Statics::ClassParams = {
		&UOculusXRControllerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusXRControllerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRControllerComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRControllerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRControllerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRControllerComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusXRControllerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRControllerComponent.OuterSingleton, Z_Construct_UClass_UOculusXRControllerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRControllerComponent.OuterSingleton;
	}
	template<> OCULUSXRINPUT_API UClass* StaticClass<UOculusXRControllerComponent>()
	{
		return UOculusXRControllerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRControllerComponent);
	UOculusXRControllerComponent::~UOculusXRControllerComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRControllerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRControllerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRControllerComponent, UOculusXRControllerComponent::StaticClass, TEXT("UOculusXRControllerComponent"), &Z_Registration_Info_UClass_UOculusXRControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRControllerComponent), 2956277696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRControllerComponent_h_705410196(TEXT("/Script/OculusXRInput"),
		Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nick_Documents_GitHub_VRArenaTemplate_VRArenaTemplate_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRControllerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
