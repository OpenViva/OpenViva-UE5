// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Asset/SavePresetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavePresetFactory() {}
// Cross Module References
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USavePresetFactory();
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USavePresetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SaveExtensionEditor();
// End Cross Module References
	void USavePresetFactory::StaticRegisterNativesUSavePresetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USavePresetFactory);
	UClass* Z_Construct_UClass_USavePresetFactory_NoRegister()
	{
		return USavePresetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USavePresetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USavePresetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtensionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePresetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asset/SavePresetFactory.h" },
		{ "ModuleRelativePath", "Private/Asset/SavePresetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USavePresetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USavePresetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USavePresetFactory_Statics::ClassParams = {
		&USavePresetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USavePresetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USavePresetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USavePresetFactory()
	{
		if (!Z_Registration_Info_UClass_USavePresetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USavePresetFactory.OuterSingleton, Z_Construct_UClass_USavePresetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USavePresetFactory.OuterSingleton;
	}
	template<> SAVEEXTENSIONEDITOR_API UClass* StaticClass<USavePresetFactory>()
	{
		return USavePresetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USavePresetFactory);
	USavePresetFactory::~USavePresetFactory() {}
	struct Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_Editor_Private_Asset_SavePresetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_Editor_Private_Asset_SavePresetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USavePresetFactory, USavePresetFactory::StaticClass, TEXT("USavePresetFactory"), &Z_Registration_Info_UClass_USavePresetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USavePresetFactory), 3965270276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_Editor_Private_Asset_SavePresetFactory_h_3141832080(TEXT("/Script/SaveExtensionEditor"),
		Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_Editor_Private_Asset_SavePresetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_Editor_Private_Asset_SavePresetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
