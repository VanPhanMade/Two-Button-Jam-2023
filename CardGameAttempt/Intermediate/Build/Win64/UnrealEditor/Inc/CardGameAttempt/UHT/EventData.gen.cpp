// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGameAttempt/Public/Data/EventData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventData() {}
// Cross Module References
	CARDGAMEATTEMPT_API UScriptStruct* Z_Construct_UScriptStruct_FCardData();
	CARDGAMEATTEMPT_API UScriptStruct* Z_Construct_UScriptStruct_FEventData();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_CardGameAttempt();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CardData;
class UScriptStruct* FCardData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CardData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CardData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCardData, (UObject*)Z_Construct_UPackage__Script_CardGameAttempt(), TEXT("CardData"));
	}
	return Z_Registration_Info_UScriptStruct_CardData.OuterSingleton;
}
template<> CARDGAMEATTEMPT_API UScriptStruct* StaticStruct<FCardData>()
{
	return FCardData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCardData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CardName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CardDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectedEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/EventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCardData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardImage_MetaData[] = {
		{ "Category", "CardData" },
		{ "ModuleRelativePath", "Public/Data/EventData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardImage = { "CardImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCardData, CardImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardName_MetaData[] = {
		{ "Category", "CardData" },
		{ "ModuleRelativePath", "Public/Data/EventData.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardName = { "CardName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCardData, CardName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardDescription_MetaData[] = {
		{ "Category", "CardData" },
		{ "ModuleRelativePath", "Public/Data/EventData.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardDescription = { "CardDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCardData, CardDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCardData_Statics::NewProp_ConnectedEvent_MetaData[] = {
		{ "Category", "CardData" },
		{ "ModuleRelativePath", "Public/Data/EventData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCardData_Statics::NewProp_ConnectedEvent = { "ConnectedEvent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCardData, ConnectedEvent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_ConnectedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::NewProp_ConnectedEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCardData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_CardDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardData_Statics::NewProp_ConnectedEvent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CardGameAttempt,
		nullptr,
		&NewStructOps,
		"CardData",
		sizeof(FCardData),
		alignof(FCardData),
		Z_Construct_UScriptStruct_FCardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCardData()
	{
		if (!Z_Registration_Info_UScriptStruct_CardData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CardData.InnerSingleton, Z_Construct_UScriptStruct_FCardData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CardData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEventData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FEventData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventData;
class UScriptStruct* FEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventData, (UObject*)Z_Construct_UPackage__Script_CardGameAttempt(), TEXT("EventData"));
	}
	return Z_Registration_Info_UScriptStruct_EventData.OuterSingleton;
}
template<> CARDGAMEATTEMPT_API UScriptStruct* StaticStruct<FEventData>()
{
	return FEventData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventSFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftCardData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftCardData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightCardData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightCardData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventDialogueDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EventDialogueDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/EventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventImage_MetaData[] = {
		{ "Category", "Event Data" },
		{ "ModuleRelativePath", "Public/Data/EventData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventImage = { "EventImage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventData, EventImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventSFX_MetaData[] = {
		{ "Category", "Event Data" },
		{ "ModuleRelativePath", "Public/Data/EventData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventSFX = { "EventSFX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventData, EventSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventSFX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventData_Statics::NewProp_LeftCardData_MetaData[] = {
		{ "Category", "Event Data" },
		{ "ModuleRelativePath", "Public/Data/EventData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_LeftCardData = { "LeftCardData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventData, LeftCardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventData_Statics::NewProp_LeftCardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::NewProp_LeftCardData_MetaData)) }; // 23054046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventData_Statics::NewProp_RightCardData_MetaData[] = {
		{ "Category", "Event Data" },
		{ "ModuleRelativePath", "Public/Data/EventData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_RightCardData = { "RightCardData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventData, RightCardData), Z_Construct_UScriptStruct_FCardData, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventData_Statics::NewProp_RightCardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::NewProp_RightCardData_MetaData)) }; // 23054046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventDialogueDuration_MetaData[] = {
		{ "Category", "Event Data" },
		{ "ModuleRelativePath", "Public/Data/EventData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventDialogueDuration = { "EventDialogueDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventData, EventDialogueDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventDialogueDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventDialogueDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventSFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_LeftCardData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_RightCardData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventData_Statics::NewProp_EventDialogueDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CardGameAttempt,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EventData",
		sizeof(FEventData),
		alignof(FEventData),
		Z_Construct_UScriptStruct_FEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventData()
	{
		if (!Z_Registration_Info_UScriptStruct_EventData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventData.InnerSingleton, Z_Construct_UScriptStruct_FEventData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_Data_EventData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_Data_EventData_h_Statics::ScriptStructInfo[] = {
		{ FCardData::StaticStruct, Z_Construct_UScriptStruct_FCardData_Statics::NewStructOps, TEXT("CardData"), &Z_Registration_Info_UScriptStruct_CardData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCardData), 23054046U) },
		{ FEventData::StaticStruct, Z_Construct_UScriptStruct_FEventData_Statics::NewStructOps, TEXT("EventData"), &Z_Registration_Info_UScriptStruct_EventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventData), 1397957952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_Data_EventData_h_3367538011(TEXT("/Script/CardGameAttempt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_Data_EventData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_Repositories_Two_Button_Jam_2023_CardGameAttempt_Source_CardGameAttempt_Public_Data_EventData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
