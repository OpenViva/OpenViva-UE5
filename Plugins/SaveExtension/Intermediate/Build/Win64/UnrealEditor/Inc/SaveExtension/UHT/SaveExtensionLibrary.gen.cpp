// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Private/SaveExtensionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveExtensionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USaveExtensionLibrary();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USaveExtensionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	void USaveExtensionLibrary::StaticRegisterNativesUSaveExtensionLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveExtensionLibrary);
	UClass* Z_Construct_UClass_USaveExtensionLibrary_NoRegister()
	{
		return USaveExtensionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USaveExtensionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveExtensionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveExtensionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveExtensionLibrary.h" },
		{ "ModuleRelativePath", "Private/SaveExtensionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveExtensionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveExtensionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveExtensionLibrary_Statics::ClassParams = {
		&USaveExtensionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveExtensionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveExtensionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveExtensionLibrary()
	{
		if (!Z_Registration_Info_UClass_USaveExtensionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveExtensionLibrary.OuterSingleton, Z_Construct_UClass_USaveExtensionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveExtensionLibrary.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UClass* StaticClass<USaveExtensionLibrary>()
	{
		return USaveExtensionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveExtensionLibrary);
	USaveExtensionLibrary::~USaveExtensionLibrary() {}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Private_SaveExtensionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Private_SaveExtensionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveExtensionLibrary, USaveExtensionLibrary::StaticClass, TEXT("USaveExtensionLibrary"), &Z_Registration_Info_UClass_USaveExtensionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveExtensionLibrary), 513613795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Private_SaveExtensionLibrary_h_2658185645(TEXT("/Script/SaveExtension"),
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Private_SaveExtensionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Private_SaveExtensionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
