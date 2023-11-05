// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGameAttempt/Public/UI/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCard() {}
// Cross Module References
	CARDGAMEATTEMPT_API UClass* Z_Construct_UClass_UCard();
	CARDGAMEATTEMPT_API UClass* Z_Construct_UClass_UCard_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CardGameAttempt();
// End Cross Module References
	void UCard::StaticRegisterNativesUCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCard);
	UClass* Z_Construct_UClass_UCard_NoRegister()
	{
		return UCard::StaticClass();
	}
	struct Z_Construct_UClass_UCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardDescription_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CardGameAttempt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Card.h" },
		{ "ModuleRelativePath", "Public/UI/Card.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCard_Statics::NewProp_CardName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCard_Statics::NewProp_CardName = { "CardName", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCard, CardName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCard_Statics::NewProp_CardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::NewProp_CardName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCard_Statics::NewProp_CardImage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCard_Statics::NewProp_CardImage = { "CardImage", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCard, CardImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCard_Statics::NewProp_CardImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::NewProp_CardImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCard_Statics::NewProp_CardDescription_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Card.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCard_Statics::NewProp_CardDescription = { "CardDescription", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCard, CardDescription), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCard_Statics::NewProp_CardDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::NewProp_CardDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_CardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_CardImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_CardDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCard_Statics::ClassParams = {
		&UCard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCard()
	{
		if (!Z_Registration_Info_UClass_UCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCard.OuterSingleton, Z_Construct_UClass_UCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCard.OuterSingleton;
	}
	template<> CARDGAMEATTEMPT_API UClass* StaticClass<UCard>()
	{
		return UCard::StaticClass();
	}
	UCard::UCard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCard);
	UCard::~UCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_UI_Card_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_UI_Card_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCard, UCard::StaticClass, TEXT("UCard"), &Z_Registration_Info_UClass_UCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCard), 2438242642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_UI_Card_h_1096071422(TEXT("/Script/CardGameAttempt"),
		Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_UI_Card_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_UI_Card_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
