// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGameAttempt/Public/UI/CardGameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardGameHUD() {}
// Cross Module References
	CARDGAMEATTEMPT_API UClass* Z_Construct_UClass_UCard_NoRegister();
	CARDGAMEATTEMPT_API UClass* Z_Construct_UClass_UCardGameHUD();
	CARDGAMEATTEMPT_API UClass* Z_Construct_UClass_UCardGameHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardGameAttempt();
// End Cross Module References
	void UCardGameHUD::StaticRegisterNativesUCardGameHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCardGameHUD);
	UClass* Z_Construct_UClass_UCardGameHUD_NoRegister()
	{
		return UCardGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_UCardGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializeAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitializeAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartGameAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartGameAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoCardsSelectedAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoCardsSelectedAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftCardSelectedAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftCardSelectedAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightCardSelectedAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightCardSelectedAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftCardConfirmedAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftCardConfirmedAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightCardConfirmedAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightCardConfirmedAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftCard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftCard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightCard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightCard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventImg_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventImg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntroSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IntroSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPickedSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardPickedSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventsDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventsDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCardGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CardGameAttempt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/CardGameHUD.h" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_InitializeAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Comment", "/** Bindings */" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
		{ "ToolTip", "Bindings" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_InitializeAnimation = { "InitializeAnimation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, InitializeAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_InitializeAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_InitializeAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_StartGameAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_StartGameAnim = { "StartGameAnim", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, StartGameAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_StartGameAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_StartGameAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_NoCardsSelectedAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_NoCardsSelectedAnim = { "NoCardsSelectedAnim", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, NoCardsSelectedAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_NoCardsSelectedAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_NoCardsSelectedAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCardSelectedAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCardSelectedAnim = { "LeftCardSelectedAnim", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, LeftCardSelectedAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCardSelectedAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCardSelectedAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCardSelectedAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCardSelectedAnim = { "RightCardSelectedAnim", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, RightCardSelectedAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCardSelectedAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCardSelectedAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCardConfirmedAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCardConfirmedAnim = { "LeftCardConfirmedAnim", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, LeftCardConfirmedAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCardConfirmedAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCardConfirmedAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCardConfirmedAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCardConfirmedAnim = { "RightCardConfirmedAnim", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, RightCardConfirmedAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCardConfirmedAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCardConfirmedAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCard = { "LeftCard", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, LeftCard), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCard = { "RightCard", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, RightCard), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_EventImg_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_EventImg = { "EventImg", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, EventImg), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_EventImg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_EventImg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_IntroSFX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Variables" },
		{ "Comment", "/** Varaibles */" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
		{ "ToolTip", "Varaibles" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_IntroSFX = { "IntroSFX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, IntroSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_IntroSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_IntroSFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_CardPickedSFX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_CardPickedSFX = { "CardPickedSFX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, CardPickedSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_CardPickedSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_CardPickedSFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCardGameHUD_Statics::NewProp_EventsDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/UI/CardGameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCardGameHUD_Statics::NewProp_EventsDataTable = { "EventsDataTable", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCardGameHUD, EventsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_EventsDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::NewProp_EventsDataTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCardGameHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_InitializeAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_StartGameAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_NoCardsSelectedAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCardSelectedAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCardSelectedAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCardConfirmedAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCardConfirmedAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_LeftCard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_RightCard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_EventImg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_IntroSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_CardPickedSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardGameHUD_Statics::NewProp_EventsDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCardGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardGameHUD_Statics::ClassParams = {
		&UCardGameHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCardGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCardGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCardGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCardGameHUD()
	{
		if (!Z_Registration_Info_UClass_UCardGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardGameHUD.OuterSingleton, Z_Construct_UClass_UCardGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCardGameHUD.OuterSingleton;
	}
	template<> CARDGAMEATTEMPT_API UClass* StaticClass<UCardGameHUD>()
	{
		return UCardGameHUD::StaticClass();
	}
	UCardGameHUD::UCardGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCardGameHUD);
	UCardGameHUD::~UCardGameHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_UI_CardGameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_UI_CardGameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCardGameHUD, UCardGameHUD::StaticClass, TEXT("UCardGameHUD"), &Z_Registration_Info_UClass_UCardGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardGameHUD), 424075504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_UI_CardGameHUD_h_2343213272(TEXT("/Script/CardGameAttempt"),
		Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_UI_CardGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_UI_CardGameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
