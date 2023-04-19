// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/Records.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecords() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FActorRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FBaseRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FComponentRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FObjectRecord();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseRecord;
class UScriptStruct* FBaseRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("BaseRecord"));
	}
	return Z_Registration_Info_UScriptStruct_BaseRecord.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FBaseRecord>()
{
	return FBaseRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseRecord_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Serialization/Records.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseRecord>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"BaseRecord",
		sizeof(FBaseRecord),
		alignof(FBaseRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseRecord.InnerSingleton, Z_Construct_UScriptStruct_FBaseRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseRecord.InnerSingleton;
	}

static_assert(std::is_polymorphic<FObjectRecord>() == std::is_polymorphic<FBaseRecord>(), "USTRUCT FObjectRecord cannot be polymorphic unless super FBaseRecord is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectRecord;
class UScriptStruct* FObjectRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ObjectRecord"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectRecord.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FObjectRecord>()
{
	return FObjectRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Object */" },
		{ "ModuleRelativePath", "Public/Serialization/Records.h" },
		{ "ToolTip", "Represents a serialized Object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectRecord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/Records.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectRecord, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FBaseRecord,
		&NewStructOps,
		"ObjectRecord",
		sizeof(FObjectRecord),
		alignof(FObjectRecord),
		Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectRecord.InnerSingleton, Z_Construct_UScriptStruct_FObjectRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectRecord.InnerSingleton;
	}

static_assert(std::is_polymorphic<FComponentRecord>() == std::is_polymorphic<FObjectRecord>(), "USTRUCT FComponentRecord cannot be polymorphic unless super FObjectRecord is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentRecord;
class UScriptStruct* FComponentRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ComponentRecord"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentRecord.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FComponentRecord>()
{
	return FComponentRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Component */" },
		{ "ModuleRelativePath", "Public/Serialization/Records.h" },
		{ "ToolTip", "Represents a serialized Component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentRecord>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FObjectRecord,
		&NewStructOps,
		"ComponentRecord",
		sizeof(FComponentRecord),
		alignof(FComponentRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentRecord.InnerSingleton, Z_Construct_UScriptStruct_FComponentRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentRecord.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActorRecord>() == std::is_polymorphic<FObjectRecord>(), "USTRUCT FActorRecord cannot be polymorphic unless super FObjectRecord is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorRecord;
class UScriptStruct* FActorRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ActorRecord"));
	}
	return Z_Registration_Info_UScriptStruct_ActorRecord.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FActorRecord>()
{
	return FActorRecord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Actor */" },
		{ "ModuleRelativePath", "Public/Serialization/Records.h" },
		{ "ToolTip", "Represents a serialized Actor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorRecord>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FObjectRecord,
		&NewStructOps,
		"ActorRecord",
		sizeof(FActorRecord),
		alignof(FActorRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorRecord()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorRecord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorRecord.InnerSingleton, Z_Construct_UScriptStruct_FActorRecord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorRecord.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_Records_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_Records_h_Statics::ScriptStructInfo[] = {
		{ FBaseRecord::StaticStruct, Z_Construct_UScriptStruct_FBaseRecord_Statics::NewStructOps, TEXT("BaseRecord"), &Z_Registration_Info_UScriptStruct_BaseRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseRecord), 4183914130U) },
		{ FObjectRecord::StaticStruct, Z_Construct_UScriptStruct_FObjectRecord_Statics::NewStructOps, TEXT("ObjectRecord"), &Z_Registration_Info_UScriptStruct_ObjectRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectRecord), 2006768193U) },
		{ FComponentRecord::StaticStruct, Z_Construct_UScriptStruct_FComponentRecord_Statics::NewStructOps, TEXT("ComponentRecord"), &Z_Registration_Info_UScriptStruct_ComponentRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentRecord), 23298334U) },
		{ FActorRecord::StaticStruct, Z_Construct_UScriptStruct_FActorRecord_Statics::NewStructOps, TEXT("ActorRecord"), &Z_Registration_Info_UScriptStruct_ActorRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorRecord), 2071277832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_Records_h_3531360726(TEXT("/Script/SaveExtension"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_Records_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_Records_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
