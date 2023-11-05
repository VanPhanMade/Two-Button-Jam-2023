// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGameAttempt/Public/Characters/BasicCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicCharacter() {}
// Cross Module References
	CARDGAMEATTEMPT_API UClass* Z_Construct_UClass_ABasicCharacter();
	CARDGAMEATTEMPT_API UClass* Z_Construct_UClass_ABasicCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardGameAttempt();
// End Cross Module References
	void ABasicCharacter::StaticRegisterNativesABasicCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasicCharacter);
	UClass* Z_Construct_UClass_ABasicCharacter_NoRegister()
	{
		return ABasicCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABasicCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractActionLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractActionLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractActionRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractActionRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CardGameAttempt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/BasicCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/BasicCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Input */" },
		{ "ModuleRelativePath", "Public/Characters/BasicCharacter.h" },
		{ "ToolTip", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractActionLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/BasicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractActionLeft = { "InteractActionLeft", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicCharacter, InteractActionLeft), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractActionLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractActionLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractActionRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/BasicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractActionRight = { "InteractActionRight", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicCharacter, InteractActionRight), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractActionRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractActionRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "/** Components */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/BasicCharacter.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractSFX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Variables" },
		{ "Comment", "/** Variables */" },
		{ "ModuleRelativePath", "Public/Characters/BasicCharacter.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractSFX = { "InteractSFX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicCharacter, InteractSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractSFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicCharacter_Statics::NewProp_HUD_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/Characters/BasicCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABasicCharacter_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABasicCharacter, HUD), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_HUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::NewProp_HUD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractActionLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractActionRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_InteractSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicCharacter_Statics::NewProp_HUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicCharacter_Statics::ClassParams = {
		&ABasicCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasicCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicCharacter()
	{
		if (!Z_Registration_Info_UClass_ABasicCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicCharacter.OuterSingleton, Z_Construct_UClass_ABasicCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasicCharacter.OuterSingleton;
	}
	template<> CARDGAMEATTEMPT_API UClass* StaticClass<ABasicCharacter>()
	{
		return ABasicCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicCharacter);
	ABasicCharacter::~ABasicCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_Characters_BasicCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_Characters_BasicCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasicCharacter, ABasicCharacter::StaticClass, TEXT("ABasicCharacter"), &Z_Registration_Info_UClass_ABasicCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicCharacter), 1704350927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_Characters_BasicCharacter_h_2217890393(TEXT("/Script/CardGameAttempt"),
		Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_Characters_BasicCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_Characters_BasicCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
