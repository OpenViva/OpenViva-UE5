// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/Private/Helpers/TestGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	SAVEEXTENSIONTEST_API UClass* Z_Construct_UClass_UTestGameInstance();
	SAVEEXTENSIONTEST_API UClass* Z_Construct_UClass_UTestGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SaveExtensionTest();
// End Cross Module References
	void UTestGameInstance::StaticRegisterNativesUTestGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestGameInstance);
	UClass* Z_Construct_UClass_UTestGameInstance_NoRegister()
	{
		return UTestGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTestGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMyBool_MetaData[];
#endif
		static void NewProp_bMyBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMyBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtensionTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Helpers/TestGameInstance.h" },
		{ "ModuleRelativePath", "Private/Helpers/TestGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestGameInstance_Statics::NewProp_bMyBool_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTestGameInstance_Statics::NewProp_bMyBool_SetBit(void* Obj)
	{
		((UTestGameInstance*)Obj)->bMyBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestGameInstance_Statics::NewProp_bMyBool = { "bMyBool", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTestGameInstance), &Z_Construct_UClass_UTestGameInstance_Statics::NewProp_bMyBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTestGameInstance_Statics::NewProp_bMyBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestGameInstance_Statics::NewProp_bMyBool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestGameInstance_Statics::NewProp_bMyBool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestGameInstance_Statics::ClassParams = {
		&UTestGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestGameInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTestGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestGameInstance()
	{
		if (!Z_Registration_Info_UClass_UTestGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestGameInstance.OuterSingleton, Z_Construct_UClass_UTestGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestGameInstance.OuterSingleton;
	}
	template<> SAVEEXTENSIONTEST_API UClass* StaticClass<UTestGameInstance>()
	{
		return UTestGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestGameInstance);
	UTestGameInstance::~UTestGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_Test_Private_Helpers_TestGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_Test_Private_Helpers_TestGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestGameInstance, UTestGameInstance::StaticClass, TEXT("UTestGameInstance"), &Z_Registration_Info_UClass_UTestGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestGameInstance), 4264297101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_Test_Private_Helpers_TestGameInstance_h_3119789813(TEXT("/Script/SaveExtensionTest"),
		Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_Test_Private_Helpers_TestGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_Test_Private_Helpers_TestGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
