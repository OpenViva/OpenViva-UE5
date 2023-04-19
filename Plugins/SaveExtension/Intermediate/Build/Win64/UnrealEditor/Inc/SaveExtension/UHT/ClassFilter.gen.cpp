// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Misc/ClassFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSEActorClassFilter();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSEClassFilter();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSEComponentClassFilter();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SEClassFilter;
class UScriptStruct* FSEClassFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SEClassFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SEClassFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSEClassFilter, Z_Construct_UPackage__Script_SaveExtension(), TEXT("SEClassFilter"));
	}
	return Z_Registration_Info_UScriptStruct_SEClassFilter.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FSEClassFilter>()
{
	return FSEClassFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSEClassFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BaseClass;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AllowedClasses_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedClasses_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllowedClasses;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_IgnoredClasses_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredClasses_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_IgnoredClasses;
		static const UECodeGen_Private::FClassPropertyParams NewProp_BakedAllowedClasses_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedAllowedClasses_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_BakedAllowedClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSEClassFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSEClassFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BaseClass_MetaData[] = {
		{ "Comment", "// Used from editor side to limit displayed classes\n" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
		{ "ToolTip", "Used from editor side to limit displayed classes" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BaseClass = { "BaseClass", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSEClassFilter, BaseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BaseClass_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_AllowedClasses_ElementProp = { "AllowedClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_AllowedClasses_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** This classes are allowed (and their children) */" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
		{ "ToolTip", "This classes are allowed (and their children)" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_AllowedClasses = { "AllowedClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSEClassFilter, AllowedClasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_AllowedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_AllowedClasses_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_IgnoredClasses_ElementProp = { "IgnoredClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_IgnoredClasses_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** This classes are ignored (and their children) */" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
		{ "ToolTip", "This classes are ignored (and their children)" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_IgnoredClasses = { "IgnoredClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSEClassFilter, IgnoredClasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_IgnoredClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_IgnoredClasses_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BakedAllowedClasses_ElementProp = { "BakedAllowedClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BakedAllowedClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BakedAllowedClasses = { "BakedAllowedClasses", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSEClassFilter, BakedAllowedClasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BakedAllowedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BakedAllowedClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSEClassFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BaseClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_AllowedClasses_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_AllowedClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_IgnoredClasses_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_IgnoredClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BakedAllowedClasses_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewProp_BakedAllowedClasses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSEClassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"SEClassFilter",
		sizeof(FSEClassFilter),
		alignof(FSEClassFilter),
		Z_Construct_UScriptStruct_FSEClassFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEClassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSEClassFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEClassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSEClassFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_SEClassFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SEClassFilter.InnerSingleton, Z_Construct_UScriptStruct_FSEClassFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SEClassFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SEActorClassFilter;
class UScriptStruct* FSEActorClassFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SEActorClassFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SEActorClassFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSEActorClassFilter, Z_Construct_UPackage__Script_SaveExtension(), TEXT("SEActorClassFilter"));
	}
	return Z_Registration_Info_UScriptStruct_SEActorClassFilter.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FSEActorClassFilter>()
{
	return FSEActorClassFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSEActorClassFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSEActorClassFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::NewProp_ClassFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::NewProp_ClassFilter = { "ClassFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSEActorClassFilter, ClassFilter), Z_Construct_UScriptStruct_FSEClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::NewProp_ClassFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::NewProp_ClassFilter_MetaData)) }; // 4070883575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::NewProp_ClassFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"SEActorClassFilter",
		sizeof(FSEActorClassFilter),
		alignof(FSEActorClassFilter),
		Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSEActorClassFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_SEActorClassFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SEActorClassFilter.InnerSingleton, Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SEActorClassFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SEComponentClassFilter;
class UScriptStruct* FSEComponentClassFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SEComponentClassFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SEComponentClassFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSEComponentClassFilter, Z_Construct_UPackage__Script_SaveExtension(), TEXT("SEComponentClassFilter"));
	}
	return Z_Registration_Info_UScriptStruct_SEComponentClassFilter.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FSEComponentClassFilter>()
{
	return FSEComponentClassFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSEComponentClassFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::NewProp_ClassFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/Misc/ClassFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::NewProp_ClassFilter = { "ClassFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSEComponentClassFilter, ClassFilter), Z_Construct_UScriptStruct_FSEClassFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::NewProp_ClassFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::NewProp_ClassFilter_MetaData)) }; // 4070883575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::NewProp_ClassFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"SEComponentClassFilter",
		sizeof(FSEComponentClassFilter),
		alignof(FSEComponentClassFilter),
		Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSEComponentClassFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_SEComponentClassFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SEComponentClassFilter.InnerSingleton, Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SEComponentClassFilter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Misc_ClassFilter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Misc_ClassFilter_h_Statics::ScriptStructInfo[] = {
		{ FSEClassFilter::StaticStruct, Z_Construct_UScriptStruct_FSEClassFilter_Statics::NewStructOps, TEXT("SEClassFilter"), &Z_Registration_Info_UScriptStruct_SEClassFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSEClassFilter), 4070883575U) },
		{ FSEActorClassFilter::StaticStruct, Z_Construct_UScriptStruct_FSEActorClassFilter_Statics::NewStructOps, TEXT("SEActorClassFilter"), &Z_Registration_Info_UScriptStruct_SEActorClassFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSEActorClassFilter), 852519658U) },
		{ FSEComponentClassFilter::StaticStruct, Z_Construct_UScriptStruct_FSEComponentClassFilter_Statics::NewStructOps, TEXT("SEComponentClassFilter"), &Z_Registration_Info_UScriptStruct_SEComponentClassFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSEComponentClassFilter), 501877309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Misc_ClassFilter_h_3607174480(TEXT("/Script/SaveExtension"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Misc_ClassFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Misc_ClassFilter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
