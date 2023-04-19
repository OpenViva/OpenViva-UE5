// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/SlotDataTask_Loader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDataTask_Loader() {}
// Cross Module References
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_Loader();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_Loader_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	void USlotDataTask_Loader::StaticRegisterNativesUSlotDataTask_Loader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlotDataTask_Loader);
	UClass* Z_Construct_UClass_USlotDataTask_Loader_NoRegister()
	{
		return USlotDataTask_Loader::StaticClass();
	}
	struct Z_Construct_UClass_USlotDataTask_Loader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSlotInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSlotInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDataTask_Loader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlotDataTask,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Loader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Manages the loading process of a SaveData file\n*/" },
		{ "IncludePath", "Serialization/SlotDataTask_Loader.h" },
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_Loader.h" },
		{ "ToolTip", "Manages the loading process of a SaveData file" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Loader_Statics::NewProp_NewSlotInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_Loader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotDataTask_Loader_Statics::NewProp_NewSlotInfo = { "NewSlotInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotDataTask_Loader, NewSlotInfo), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Loader_Statics::NewProp_NewSlotInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Loader_Statics::NewProp_NewSlotInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotDataTask_Loader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDataTask_Loader_Statics::NewProp_NewSlotInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDataTask_Loader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDataTask_Loader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlotDataTask_Loader_Statics::ClassParams = {
		&USlotDataTask_Loader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotDataTask_Loader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Loader_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Loader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Loader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDataTask_Loader()
	{
		if (!Z_Registration_Info_UClass_USlotDataTask_Loader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlotDataTask_Loader.OuterSingleton, Z_Construct_UClass_USlotDataTask_Loader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlotDataTask_Loader.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotDataTask_Loader>()
	{
		return USlotDataTask_Loader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDataTask_Loader);
	USlotDataTask_Loader::~USlotDataTask_Loader() {}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_Loader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_Loader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlotDataTask_Loader, USlotDataTask_Loader::StaticClass, TEXT("USlotDataTask_Loader"), &Z_Registration_Info_UClass_USlotDataTask_Loader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlotDataTask_Loader), 980569120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_Loader_h_504860645(TEXT("/Script/SaveExtension"),
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_Loader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_Loader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
