// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/LatentActions/SaveGameAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameAction() {}
// Cross Module References
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_ESaveGameResult();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveGameResult;
	static UEnum* ESaveGameResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESaveGameResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESaveGameResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SaveExtension_ESaveGameResult, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ESaveGameResult"));
		}
		return Z_Registration_Info_UEnum_ESaveGameResult.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UEnum* StaticEnum<ESaveGameResult>()
	{
		return ESaveGameResult_StaticEnum();
	}
	struct Z_Construct_UEnum_SaveExtension_ESaveGameResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SaveExtension_ESaveGameResult_Statics::Enumerators[] = {
		{ "ESaveGameResult::Saving", (int64)ESaveGameResult::Saving },
		{ "ESaveGameResult::Continue", (int64)ESaveGameResult::Continue },
		{ "ESaveGameResult::Failed", (int64)ESaveGameResult::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SaveExtension_ESaveGameResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enum used to indicate quote execution results\n */" },
		{ "Continue.Name", "ESaveGameResult::Continue" },
		{ "Failed.Name", "ESaveGameResult::Failed" },
		{ "ModuleRelativePath", "Public/LatentActions/SaveGameAction.h" },
		{ "Saving.Hidden", "" },
		{ "Saving.Name", "ESaveGameResult::Saving" },
		{ "ToolTip", "Enum used to indicate quote execution results" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SaveExtension_ESaveGameResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		"ESaveGameResult",
		"ESaveGameResult",
		Z_Construct_UEnum_SaveExtension_ESaveGameResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SaveExtension_ESaveGameResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SaveExtension_ESaveGameResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SaveExtension_ESaveGameResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SaveExtension_ESaveGameResult()
	{
		if (!Z_Registration_Info_UEnum_ESaveGameResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveGameResult.InnerSingleton, Z_Construct_UEnum_SaveExtension_ESaveGameResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESaveGameResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_SaveGameAction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_SaveGameAction_h_Statics::EnumInfo[] = {
		{ ESaveGameResult_StaticEnum, TEXT("ESaveGameResult"), &Z_Registration_Info_UEnum_ESaveGameResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3728026513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_SaveGameAction_h_4081858081(TEXT("/Script/SaveExtension"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_SaveGameAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_SaveGameAction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
