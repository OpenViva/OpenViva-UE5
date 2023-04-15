// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/LatentActions/LoadInfosAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadInfosAction() {}
// Cross Module References
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_ELoadInfoResult();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoadInfoResult;
	static UEnum* ELoadInfoResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoadInfoResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoadInfoResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SaveExtension_ELoadInfoResult, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ELoadInfoResult"));
		}
		return Z_Registration_Info_UEnum_ELoadInfoResult.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UEnum* StaticEnum<ELoadInfoResult>()
	{
		return ELoadInfoResult_StaticEnum();
	}
	struct Z_Construct_UEnum_SaveExtension_ELoadInfoResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SaveExtension_ELoadInfoResult_Statics::Enumerators[] = {
		{ "ELoadInfoResult::Completed", (int64)ELoadInfoResult::Completed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SaveExtension_ELoadInfoResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enum used to indicate quote execution results\n */" },
		{ "Completed.Name", "ELoadInfoResult::Completed" },
		{ "ModuleRelativePath", "Public/LatentActions/LoadInfosAction.h" },
		{ "ToolTip", "Enum used to indicate quote execution results" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SaveExtension_ELoadInfoResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		"ELoadInfoResult",
		"ELoadInfoResult",
		Z_Construct_UEnum_SaveExtension_ELoadInfoResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SaveExtension_ELoadInfoResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SaveExtension_ELoadInfoResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SaveExtension_ELoadInfoResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SaveExtension_ELoadInfoResult()
	{
		if (!Z_Registration_Info_UEnum_ELoadInfoResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoadInfoResult.InnerSingleton, Z_Construct_UEnum_SaveExtension_ELoadInfoResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoadInfoResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadInfosAction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadInfosAction_h_Statics::EnumInfo[] = {
		{ ELoadInfoResult_StaticEnum, TEXT("ELoadInfoResult"), &Z_Registration_Info_UEnum_ELoadInfoResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2984091777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadInfosAction_h_1566453346(TEXT("/Script/SaveExtension"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadInfosAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadInfosAction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
