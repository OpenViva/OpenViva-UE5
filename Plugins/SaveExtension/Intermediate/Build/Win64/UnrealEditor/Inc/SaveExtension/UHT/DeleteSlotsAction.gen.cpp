// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/LatentActions/DeleteSlotsAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeleteSlotsAction() {}
// Cross Module References
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeleteSlotsResult;
	static UEnum* EDeleteSlotsResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDeleteSlotsResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDeleteSlotsResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult, Z_Construct_UPackage__Script_SaveExtension(), TEXT("EDeleteSlotsResult"));
		}
		return Z_Registration_Info_UEnum_EDeleteSlotsResult.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UEnum* StaticEnum<EDeleteSlotsResult>()
	{
		return EDeleteSlotsResult_StaticEnum();
	}
	struct Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult_Statics::Enumerators[] = {
		{ "EDeleteSlotsResult::Completed", (int64)EDeleteSlotsResult::Completed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enum used to indicate quote execution results\n */" },
		{ "Completed.Name", "EDeleteSlotsResult::Completed" },
		{ "ModuleRelativePath", "Public/LatentActions/DeleteSlotsAction.h" },
		{ "ToolTip", "Enum used to indicate quote execution results" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		"EDeleteSlotsResult",
		"EDeleteSlotsResult",
		Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult()
	{
		if (!Z_Registration_Info_UEnum_EDeleteSlotsResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeleteSlotsResult.InnerSingleton, Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDeleteSlotsResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_DeleteSlotsAction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_DeleteSlotsAction_h_Statics::EnumInfo[] = {
		{ EDeleteSlotsResult_StaticEnum, TEXT("EDeleteSlotsResult"), &Z_Registration_Info_UEnum_EDeleteSlotsResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1603029251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_DeleteSlotsAction_h_4105608478(TEXT("/Script/SaveExtension"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_DeleteSlotsAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_DeleteSlotsAction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
