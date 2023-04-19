// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/LatentActions/LoadGameAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadGameAction() {}
// Cross Module References
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_ELoadGameResult();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadGameResult;
	static UEnum* ELoadGameResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoadGameResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoadGameResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SaveExtension_ELoadGameResult, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ELoadGameResult"));
		}
		return Z_Registration_Info_UEnum_ELoadGameResult.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UEnum* StaticEnum<ELoadGameResult>()
	{
		return ELoadGameResult_StaticEnum();
	}
	struct Z_Construct_UEnum_SaveExtension_ELoadGameResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SaveExtension_ELoadGameResult_Statics::Enumerators[] = {
		{ "ELoadGameResult::Loading", (int64)ELoadGameResult::Loading },
		{ "ELoadGameResult::Continue", (int64)ELoadGameResult::Continue },
		{ "ELoadGameResult::Failed", (int64)ELoadGameResult::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SaveExtension_ELoadGameResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enum used to indicate quote execution results\n */" },
		{ "Continue.Name", "ELoadGameResult::Continue" },
		{ "Failed.Name", "ELoadGameResult::Failed" },
		{ "Loading.Hidden", "" },
		{ "Loading.Name", "ELoadGameResult::Loading" },
		{ "ModuleRelativePath", "Public/LatentActions/LoadGameAction.h" },
		{ "ToolTip", "Enum used to indicate quote execution results" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SaveExtension_ELoadGameResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		"ELoadGameResult",
		"ELoadGameResult",
		Z_Construct_UEnum_SaveExtension_ELoadGameResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SaveExtension_ELoadGameResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SaveExtension_ELoadGameResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SaveExtension_ELoadGameResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SaveExtension_ELoadGameResult()
	{
		if (!Z_Registration_Info_UEnum_ELoadGameResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadGameResult.InnerSingleton, Z_Construct_UEnum_SaveExtension_ELoadGameResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoadGameResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadGameAction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadGameAction_h_Statics::EnumInfo[] = {
		{ ELoadGameResult_StaticEnum, TEXT("ELoadGameResult"), &Z_Registration_Info_UEnum_ELoadGameResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1385456098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadGameAction_h_1680643911(TEXT("/Script/SaveExtension"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadGameAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadGameAction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
