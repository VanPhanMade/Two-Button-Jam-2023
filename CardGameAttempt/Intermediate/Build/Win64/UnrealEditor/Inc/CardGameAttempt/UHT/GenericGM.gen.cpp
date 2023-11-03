// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGameAttempt/Public/GameModes/GenericGM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenericGM() {}
// Cross Module References
	CARDGAMEATTEMPT_API UClass* Z_Construct_UClass_AGenericGM();
	CARDGAMEATTEMPT_API UClass* Z_Construct_UClass_AGenericGM_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CardGameAttempt();
// End Cross Module References
	void AGenericGM::StaticRegisterNativesAGenericGM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGenericGM);
	UClass* Z_Construct_UClass_AGenericGM_NoRegister()
	{
		return AGenericGM::StaticClass();
	}
	struct Z_Construct_UClass_AGenericGM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenericGM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CardGameAttempt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenericGM_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/GenericGM.h" },
		{ "ModuleRelativePath", "Public/GameModes/GenericGM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenericGM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenericGM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGenericGM_Statics::ClassParams = {
		&AGenericGM::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGenericGM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGenericGM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGenericGM()
	{
		if (!Z_Registration_Info_UClass_AGenericGM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGenericGM.OuterSingleton, Z_Construct_UClass_AGenericGM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGenericGM.OuterSingleton;
	}
	template<> CARDGAMEATTEMPT_API UClass* StaticClass<AGenericGM>()
	{
		return AGenericGM::StaticClass();
	}
	AGenericGM::AGenericGM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenericGM);
	AGenericGM::~AGenericGM() {}
	struct Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_CardGameAttempt_Source_CardGameAttempt_Public_GameModes_GenericGM_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_CardGameAttempt_Source_CardGameAttempt_Public_GameModes_GenericGM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGenericGM, AGenericGM::StaticClass, TEXT("AGenericGM"), &Z_Registration_Info_UClass_AGenericGM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGenericGM), 3367704966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_CardGameAttempt_Source_CardGameAttempt_Public_GameModes_GenericGM_h_3073546919(TEXT("/Script/CardGameAttempt"),
		Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_CardGameAttempt_Source_CardGameAttempt_Public_GameModes_GenericGM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Documents_Projects_Unreal_CardGameAttempt_Source_CardGameAttempt_Public_GameModes_GenericGM_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
