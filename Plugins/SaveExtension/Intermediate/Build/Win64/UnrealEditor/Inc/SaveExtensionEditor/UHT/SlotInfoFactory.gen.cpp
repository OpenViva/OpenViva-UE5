// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/Asset/SlotInfoFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotInfoFactory() {}
// Cross Module References
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USlotInfoFactory();
	SAVEEXTENSIONEDITOR_API UClass* Z_Construct_UClass_USlotInfoFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SaveExtensionEditor();
// End Cross Module References
	void USlotInfoFactory::StaticRegisterNativesUSlotInfoFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlotInfoFactory);
	UClass* Z_Construct_UClass_USlotInfoFactory_NoRegister()
	{
		return USlotInfoFactory::StaticClass();
	}
	struct Z_Construct_UClass_USlotInfoFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotInfoFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtensionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfoFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Asset/SlotInfoFactory.h" },
		{ "ModuleRelativePath", "Private/Asset/SlotInfoFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotInfoFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotInfoFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlotInfoFactory_Statics::ClassParams = {
		&USlotInfoFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USlotInfoFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfoFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotInfoFactory()
	{
		if (!Z_Registration_Info_UClass_USlotInfoFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlotInfoFactory.OuterSingleton, Z_Construct_UClass_USlotInfoFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlotInfoFactory.OuterSingleton;
	}
	template<> SAVEEXTENSIONEDITOR_API UClass* StaticClass<USlotInfoFactory>()
	{
		return USlotInfoFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotInfoFactory);
	USlotInfoFactory::~USlotInfoFactory() {}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Editor_Private_Asset_SlotInfoFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Editor_Private_Asset_SlotInfoFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlotInfoFactory, USlotInfoFactory::StaticClass, TEXT("USlotInfoFactory"), &Z_Registration_Info_UClass_USlotInfoFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlotInfoFactory), 692158912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Editor_Private_Asset_SlotInfoFactory_h_2701767452(TEXT("/Script/SaveExtensionEditor"),
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Editor_Private_Asset_SlotInfoFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Editor_Private_Asset_SlotInfoFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
