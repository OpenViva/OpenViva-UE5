// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Asset/SlotDataFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDataFactory() {}
// Cross Module References
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USlotDataFactory();
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USlotDataFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SaveExtensionEditor();
// End Cross Module References
	void USlotDataFactory::StaticRegisterNativesUSlotDataFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlotDataFactory);
	UClass* Z_Construct_UClass_USlotDataFactory_NoRegister()
	{
		return USlotDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_USlotDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtensionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asset/SlotDataFactory.h" },
		{ "ModuleRelativePath", "Private/Asset/SlotDataFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDataFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlotDataFactory_Statics::ClassParams = {
		&USlotDataFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USlotDataFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDataFactory()
	{
		if (!Z_Registration_Info_UClass_USlotDataFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlotDataFactory.OuterSingleton, Z_Construct_UClass_USlotDataFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlotDataFactory.OuterSingleton;
	}
	template<> SAVEEXTENSIONEDITOR_API UClass* StaticClass<USlotDataFactory>()
	{
		return USlotDataFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDataFactory);
	USlotDataFactory::~USlotDataFactory() {}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Editor_Private_Asset_SlotDataFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Editor_Private_Asset_SlotDataFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlotDataFactory, USlotDataFactory::StaticClass, TEXT("USlotDataFactory"), &Z_Registration_Info_UClass_USlotDataFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlotDataFactory), 3083463242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Editor_Private_Asset_SlotDataFactory_h_3160510191(TEXT("/Script/SaveExtensionEditor"),
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Editor_Private_Asset_SlotDataFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Editor_Private_Asset_SlotDataFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
