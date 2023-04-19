// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/Private/Helpers/TestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SAVEEXTENSIONTEST_API UClass* Z_Construct_UClass_ATestActor();
	SAVEEXTENSIONTEST_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
	SAVEEXTENSIONTEST_API UScriptStruct* Z_Construct_UScriptStruct_FTestSaveStruct();
	UPackage* Z_Construct_UPackage__Script_SaveExtensionTest();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestSaveStruct;
class UScriptStruct* FTestSaveStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestSaveStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestSaveStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestSaveStruct, Z_Construct_UPackage__Script_SaveExtensionTest(), TEXT("TestSaveStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TestSaveStruct.OuterSingleton;
}
template<> SAVEEXTENSIONTEST_API UScriptStruct* StaticStruct<FTestSaveStruct>()
{
	return FTestSaveStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestSaveStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestSaveStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestSaveStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestSaveStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestSaveStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtensionTest,
		nullptr,
		&NewStructOps,
		"TestSaveStruct",
		sizeof(FTestSaveStruct),
		alignof(FTestSaveStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestSaveStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestSaveStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestSaveStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TestSaveStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestSaveStruct.InnerSingleton, Z_Construct_UScriptStruct_FTestSaveStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestSaveStruct.InnerSingleton;
	}
	void ATestActor::StaticRegisterNativesATestActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestActor);
	UClass* Z_Construct_UClass_ATestActor_NoRegister()
	{
		return ATestActor::StaticClass();
	}
	struct Z_Construct_UClass_ATestActor_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MyFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyU8_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MyU8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyU16_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MyU16;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyU32_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MyU32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyU64_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_MyU64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyI8_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_MyI8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyI16_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_MyI16;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyI32_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MyI32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyI64_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_MyI64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtensionTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Helpers/TestActor.h" },
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_bMyBool_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
	void Z_Construct_UClass_ATestActor_Statics::NewProp_bMyBool_SetBit(void* Obj)
	{
		((ATestActor*)Obj)->bMyBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_bMyBool = { "bMyBool", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ATestActor), &Z_Construct_UClass_ATestActor_Statics::NewProp_bMyBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_bMyBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_bMyBool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_MyFloat_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_MyFloat = { "MyFloat", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, MyFloat), METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_MyFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_MyFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_MyU8_MetaData[] = {
		{ "Comment", "// INTEGERS\n" },
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
		{ "ToolTip", "INTEGERS" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_MyU8 = { "MyU8", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, MyU8), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_MyU8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_MyU8_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_MyU16_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_MyU16 = { "MyU16", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, MyU16), METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_MyU16_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_MyU16_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_MyU32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_MyU32 = { "MyU32", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, MyU32), METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_MyU32_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_MyU32_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_MyU64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_MyU64 = { "MyU64", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, MyU64), METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_MyU64_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_MyU64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_MyI8_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_MyI8 = { "MyI8", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, MyI8), METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_MyI8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_MyI8_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_MyI16_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_MyI16 = { "MyI16", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, MyI16), METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_MyI16_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_MyI16_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_MyI32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_MyI32 = { "MyI32", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, MyI32), METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_MyI32_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_MyI32_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_MyI64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_MyI64 = { "MyI64", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, MyI64), METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_MyI64_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_MyI64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActor_Statics::NewProp_MyStruct_MetaData[] = {
		{ "ModuleRelativePath", "Private/Helpers/TestActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_MyStruct = { "MyStruct", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestActor, MyStruct), Z_Construct_UScriptStruct_FTestSaveStruct, METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::NewProp_MyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::NewProp_MyStruct_MetaData)) }; // 1748688118
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_bMyBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_MyFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_MyU8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_MyU16,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_MyU32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_MyU64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_MyI8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_MyI16,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_MyI32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_MyI64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_MyStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestActor_Statics::ClassParams = {
		&ATestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestActor()
	{
		if (!Z_Registration_Info_UClass_ATestActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestActor.OuterSingleton, Z_Construct_UClass_ATestActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestActor.OuterSingleton;
	}
	template<> SAVEEXTENSIONTEST_API UClass* StaticClass<ATestActor>()
	{
		return ATestActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActor);
	ATestActor::~ATestActor() {}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Test_Private_Helpers_TestActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Test_Private_Helpers_TestActor_h_Statics::ScriptStructInfo[] = {
		{ FTestSaveStruct::StaticStruct, Z_Construct_UScriptStruct_FTestSaveStruct_Statics::NewStructOps, TEXT("TestSaveStruct"), &Z_Registration_Info_UScriptStruct_TestSaveStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestSaveStruct), 1748688118U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Test_Private_Helpers_TestActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestActor, ATestActor::StaticClass, TEXT("ATestActor"), &Z_Registration_Info_UClass_ATestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestActor), 3665815756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Test_Private_Helpers_TestActor_h_4081100530(TEXT("/Script/SaveExtensionTest"),
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Test_Private_Helpers_TestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Test_Private_Helpers_TestActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Test_Private_Helpers_TestActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_Test_Private_Helpers_TestActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
