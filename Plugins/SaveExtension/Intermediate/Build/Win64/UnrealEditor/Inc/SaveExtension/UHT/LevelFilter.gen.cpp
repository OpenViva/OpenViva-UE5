// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/LevelFilter.h"
#include "SaveExtension/Public/Misc/ClassFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelFilter() {}
// Cross Module References
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSEActorClassFilter();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSEComponentClassFilter();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSELevelFilter();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SELevelFilter;
class UScriptStruct* FSELevelFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SELevelFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SELevelFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSELevelFilter, Z_Construct_UPackage__Script_SaveExtension(), TEXT("SELevelFilter"));
	}
	return Z_Registration_Info_UScriptStruct_SELevelFilter.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FSELevelFilter>()
{
	return FSELevelFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSELevelFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadActorFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadActorFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStoreComponents_MetaData[];
#endif
		static void NewProp_bStoreComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStoreComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadComponentFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadComponentFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSELevelFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains all settings that affect saving.\n * This information is saved to be restored while loading.\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelFilter.h" },
		{ "ToolTip", "Contains all settings that affect saving.\nThis information is saved to be restored while loading." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSELevelFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_ActorFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_ActorFilter = { "ActorFilter", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSELevelFilter, ActorFilter), Z_Construct_UScriptStruct_FSEActorClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_ActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_ActorFilter_MetaData)) }; // 852519658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_LoadActorFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_LoadActorFilter = { "LoadActorFilter", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSELevelFilter, LoadActorFilter), Z_Construct_UScriptStruct_FSEActorClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_LoadActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_LoadActorFilter_MetaData)) }; // 852519658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_bStoreComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_bStoreComponents_SetBit(void* Obj)
	{
		((FSELevelFilter*)Obj)->bStoreComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_bStoreComponents = { "bStoreComponents", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSELevelFilter), &Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_bStoreComponents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_bStoreComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_bStoreComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_ComponentFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_ComponentFilter = { "ComponentFilter", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSELevelFilter, ComponentFilter), Z_Construct_UScriptStruct_FSEComponentClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_ComponentFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_ComponentFilter_MetaData)) }; // 501877309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_LoadComponentFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_LoadComponentFilter = { "LoadComponentFilter", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSELevelFilter, LoadComponentFilter), Z_Construct_UScriptStruct_FSEComponentClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_LoadComponentFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_LoadComponentFilter_MetaData)) }; // 501877309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSELevelFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_ActorFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_LoadActorFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_bStoreComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_ComponentFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewProp_LoadComponentFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSELevelFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"SELevelFilter",
		sizeof(FSELevelFilter),
		alignof(FSELevelFilter),
		Z_Construct_UScriptStruct_FSELevelFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSELevelFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSELevelFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSELevelFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSELevelFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_SELevelFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SELevelFilter.InnerSingleton, Z_Construct_UScriptStruct_FSELevelFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SELevelFilter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LevelFilter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LevelFilter_h_Statics::ScriptStructInfo[] = {
		{ FSELevelFilter::StaticStruct, Z_Construct_UScriptStruct_FSELevelFilter_Statics::NewStructOps, TEXT("SELevelFilter"), &Z_Registration_Info_UScriptStruct_SELevelFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSELevelFilter), 973390857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LevelFilter_h_2424128972(TEXT("/Script/SaveExtension"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LevelFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LevelFilter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
