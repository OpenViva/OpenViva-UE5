// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/SlotDataTask_Saver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDataTask_Saver() {}
// Cross Module References
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_Saver();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_Saver_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	void USlotDataTask_Saver::StaticRegisterNativesUSlotDataTask_Saver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlotDataTask_Saver);
	UClass* Z_Construct_UClass_USlotDataTask_Saver_NoRegister()
	{
		return USlotDataTask_Saver::StaticClass();
	}
	struct Z_Construct_UClass_USlotDataTask_Saver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDataTask_Saver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlotDataTask,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Saver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Manages the saving process of a SaveData file\n*/" },
		{ "IncludePath", "Serialization/SlotDataTask_Saver.h" },
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_Saver.h" },
		{ "ToolTip", "Manages the saving process of a SaveData file" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Saver_Statics::NewProp_SlotInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_Saver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotDataTask_Saver_Statics::NewProp_SlotInfo = { "SlotInfo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotDataTask_Saver, SlotInfo), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Saver_Statics::NewProp_SlotInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Saver_Statics::NewProp_SlotInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotDataTask_Saver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDataTask_Saver_Statics::NewProp_SlotInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDataTask_Saver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDataTask_Saver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlotDataTask_Saver_Statics::ClassParams = {
		&USlotDataTask_Saver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotDataTask_Saver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Saver_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Saver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Saver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDataTask_Saver()
	{
		if (!Z_Registration_Info_UClass_USlotDataTask_Saver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlotDataTask_Saver.OuterSingleton, Z_Construct_UClass_USlotDataTask_Saver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlotDataTask_Saver.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotDataTask_Saver>()
	{
		return USlotDataTask_Saver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDataTask_Saver);
	USlotDataTask_Saver::~USlotDataTask_Saver() {}
	struct Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_Saver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_Saver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlotDataTask_Saver, USlotDataTask_Saver::StaticClass, TEXT("USlotDataTask_Saver"), &Z_Registration_Info_UClass_USlotDataTask_Saver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlotDataTask_Saver), 3489339818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_Saver_h_3211179448(TEXT("/Script/SaveExtension"),
		Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_Saver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_Saver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
