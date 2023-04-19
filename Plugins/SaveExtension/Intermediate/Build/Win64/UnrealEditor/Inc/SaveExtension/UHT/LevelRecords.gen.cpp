// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/LevelRecords.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelRecords() {}
// Cross Module References
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FBaseRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FLevelRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FPersistentLevelRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingLevelRecord();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References

static_assert(std::is_polymorphic<FLevelRecord>() == std::is_polymorphic<FBaseRecord>(), "USTRUCT FLevelRecord cannot be polymorphic unless super FBaseRecord is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelRecord;
class UScriptStruct* FLevelRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("LevelRecord"));
	}
	return Z_Registration_Info_UScriptStruct_LevelRecord.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FLevelRecord>()
{
	return FLevelRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a level in the world (streaming or persistent) */" },
		{ "ModuleRelativePath", "Public/Serialization/LevelRecords.h" },
		{ "ToolTip", "Represents a level in the world (streaming or persistent)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelRecord>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FBaseRecord,
		&NewStructOps,
		"LevelRecord",
		sizeof(FLevelRecord),
		alignof(FLevelRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelRecord.InnerSingleton, Z_Construct_UScriptStruct_FLevelRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelRecord.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPersistentLevelRecord>() == std::is_polymorphic<FLevelRecord>(), "USTRUCT FPersistentLevelRecord cannot be polymorphic unless super FLevelRecord is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PersistentLevelRecord;
class UScriptStruct* FPersistentLevelRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PersistentLevelRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PersistentLevelRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPersistentLevelRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("PersistentLevelRecord"));
	}
	return Z_Registration_Info_UScriptStruct_PersistentLevelRecord.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FPersistentLevelRecord>()
{
	return FPersistentLevelRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a persistent level in the world */" },
		{ "ModuleRelativePath", "Public/Serialization/LevelRecords.h" },
		{ "ToolTip", "Represents a persistent level in the world" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPersistentLevelRecord>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FLevelRecord,
		&NewStructOps,
		"PersistentLevelRecord",
		sizeof(FPersistentLevelRecord),
		alignof(FPersistentLevelRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPersistentLevelRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_PersistentLevelRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PersistentLevelRecord.InnerSingleton, Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PersistentLevelRecord.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStreamingLevelRecord>() == std::is_polymorphic<FLevelRecord>(), "USTRUCT FStreamingLevelRecord cannot be polymorphic unless super FLevelRecord is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamingLevelRecord;
class UScriptStruct* FStreamingLevelRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamingLevelRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamingLevelRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingLevelRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("StreamingLevelRecord"));
	}
	return Z_Registration_Info_UScriptStruct_StreamingLevelRecord.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FStreamingLevelRecord>()
{
	return FStreamingLevelRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized streaming level in the world */" },
		{ "ModuleRelativePath", "Public/Serialization/LevelRecords.h" },
		{ "ToolTip", "Represents a serialized streaming level in the world" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingLevelRecord>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FLevelRecord,
		&NewStructOps,
		"StreamingLevelRecord",
		sizeof(FStreamingLevelRecord),
		alignof(FStreamingLevelRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamingLevelRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_StreamingLevelRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamingLevelRecord.InnerSingleton, Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StreamingLevelRecord.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_LevelRecords_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_LevelRecords_h_Statics::ScriptStructInfo[] = {
		{ FLevelRecord::StaticStruct, Z_Construct_UScriptStruct_FLevelRecord_Statics::NewStructOps, TEXT("LevelRecord"), &Z_Registration_Info_UScriptStruct_LevelRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelRecord), 2048336427U) },
		{ FPersistentLevelRecord::StaticStruct, Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::NewStructOps, TEXT("PersistentLevelRecord"), &Z_Registration_Info_UScriptStruct_PersistentLevelRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPersistentLevelRecord), 3334408833U) },
		{ FStreamingLevelRecord::StaticStruct, Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::NewStructOps, TEXT("StreamingLevelRecord"), &Z_Registration_Info_UScriptStruct_StreamingLevelRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamingLevelRecord), 1027427056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_LevelRecords_h_3581264597(TEXT("/Script/SaveExtension"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_LevelRecords_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_LevelRecords_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
