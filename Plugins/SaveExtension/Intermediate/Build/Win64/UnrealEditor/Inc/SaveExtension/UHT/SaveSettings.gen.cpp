// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SaveSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USavePreset_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USaveSettings();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USaveSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	void USaveSettings::StaticRegisterNativesUSaveSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveSettings);
	UClass* Z_Construct_UClass_USaveSettings_NoRegister()
	{
		return USaveSettings::StaticClass();
	}
	struct Z_Construct_UClass_USaveSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickWithGameWorld_MetaData[];
#endif
		static void NewProp_bTickWithGameWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickWithGameWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSettings_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "SaveExtension" },
		{ "DisplayName", "Save Extension" },
		{ "IncludePath", "SaveSettings.h" },
		{ "ModuleRelativePath", "Public/SaveSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSettings_Statics::NewProp_Preset_MetaData[] = {
		{ "Category", "Save Extension" },
		{ "DisplayName", "Preset" },
		{ "ModuleRelativePath", "Public/SaveSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USaveSettings_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveSettings, Preset), Z_Construct_UClass_UClass, Z_Construct_UClass_USavePreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveSettings_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSettings_Statics::NewProp_Preset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSettings_Statics::NewProp_bTickWithGameWorld_MetaData[] = {
		{ "Category", "Save Extension" },
		{ "Comment", "// If true SaveManager will tick with the world. If game is paused, saving process may be interrupted.\n" },
		{ "ModuleRelativePath", "Public/SaveSettings.h" },
		{ "ToolTip", "If true SaveManager will tick with the world. If game is paused, saving process may be interrupted." },
	};
#endif
	void Z_Construct_UClass_USaveSettings_Statics::NewProp_bTickWithGameWorld_SetBit(void* Obj)
	{
		((USaveSettings*)Obj)->bTickWithGameWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveSettings_Statics::NewProp_bTickWithGameWorld = { "bTickWithGameWorld", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USaveSettings), &Z_Construct_UClass_USaveSettings_Statics::NewProp_bTickWithGameWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveSettings_Statics::NewProp_bTickWithGameWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSettings_Statics::NewProp_bTickWithGameWorld_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSettings_Statics::NewProp_Preset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSettings_Statics::NewProp_bTickWithGameWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSettings_Statics::ClassParams = {
		&USaveSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USaveSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveSettings()
	{
		if (!Z_Registration_Info_UClass_USaveSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSettings.OuterSingleton, Z_Construct_UClass_USaveSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveSettings.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UClass* StaticClass<USaveSettings>()
	{
		return USaveSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSettings);
	USaveSettings::~USaveSettings() {}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveSettings, USaveSettings::StaticClass, TEXT("USaveSettings"), &Z_Registration_Info_UClass_USaveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSettings), 3228085522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveSettings_h_3335169357(TEXT("/Script/SaveExtension"),
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
