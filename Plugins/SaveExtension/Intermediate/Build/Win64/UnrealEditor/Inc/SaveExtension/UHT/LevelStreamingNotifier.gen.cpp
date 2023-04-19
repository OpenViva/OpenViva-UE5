// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/LevelStreamingNotifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingNotifier() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_ULevelStreamingNotifier();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_ULevelStreamingNotifier_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	DEFINE_FUNCTION(ULevelStreamingNotifier::execOnHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHidden();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreamingNotifier::execOnShown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreamingNotifier::execOnUnloaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnloaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelStreamingNotifier::execOnLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoaded();
		P_NATIVE_END;
	}
	void ULevelStreamingNotifier::StaticRegisterNativesULevelStreamingNotifier()
	{
		UClass* Class = ULevelStreamingNotifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHidden", &ULevelStreamingNotifier::execOnHidden },
			{ "OnLoaded", &ULevelStreamingNotifier::execOnLoaded },
			{ "OnShown", &ULevelStreamingNotifier::execOnShown },
			{ "OnUnloaded", &ULevelStreamingNotifier::execOnUnloaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingNotifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingNotifier, nullptr, "OnHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingNotifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingNotifier, nullptr, "OnLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingNotifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingNotifier, nullptr, "OnShown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreamingNotifier_OnShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelStreamingNotifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingNotifier, nullptr, "OnUnloaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingNotifier);
	UClass* Z_Construct_UClass_ULevelStreamingNotifier_NoRegister()
	{
		return ULevelStreamingNotifier::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingNotifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingNotifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelStreamingNotifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelStreamingNotifier_OnHidden, "OnHidden" }, // 2371212926
		{ &Z_Construct_UFunction_ULevelStreamingNotifier_OnLoaded, "OnLoaded" }, // 2851241380
		{ &Z_Construct_UFunction_ULevelStreamingNotifier_OnShown, "OnShown" }, // 3412870086
		{ &Z_Construct_UFunction_ULevelStreamingNotifier_OnUnloaded, "OnUnloaded" }, // 2775618080
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingNotifier_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "SaveExtension" },
		{ "Comment", "/** ULevelStreamingNotifier is an adapter that expands UE4's native\n * level streaming delegates adding a ptr to the level to each delegate\n */" },
		{ "IncludePath", "LevelStreamingNotifier.h" },
		{ "ModuleRelativePath", "Public/LevelStreamingNotifier.h" },
		{ "ToolTip", "ULevelStreamingNotifier is an adapter that expands UE4's native\nlevel streaming delegates adding a ptr to the level to each delegate" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingNotifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingNotifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingNotifier_Statics::ClassParams = {
		&ULevelStreamingNotifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingNotifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingNotifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreamingNotifier()
	{
		if (!Z_Registration_Info_UClass_ULevelStreamingNotifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingNotifier.OuterSingleton, Z_Construct_UClass_ULevelStreamingNotifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelStreamingNotifier.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UClass* StaticClass<ULevelStreamingNotifier>()
	{
		return ULevelStreamingNotifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingNotifier);
	ULevelStreamingNotifier::~ULevelStreamingNotifier() {}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingNotifier, ULevelStreamingNotifier::StaticClass, TEXT("ULevelStreamingNotifier"), &Z_Registration_Info_UClass_ULevelStreamingNotifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingNotifier), 1259540314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_96643085(TEXT("/Script/SaveExtension"),
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LevelStreamingNotifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
