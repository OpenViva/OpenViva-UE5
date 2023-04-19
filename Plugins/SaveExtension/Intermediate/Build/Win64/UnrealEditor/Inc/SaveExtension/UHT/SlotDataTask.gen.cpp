// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/SlotDataTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDataTask() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USavePreset_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotData_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	void USlotDataTask::StaticRegisterNativesUSlotDataTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlotDataTask);
	UClass* Z_Construct_UClass_USlotDataTask_NoRegister()
	{
		return USlotDataTask::StaticClass();
	}
	struct Z_Construct_UClass_USlotDataTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFrameMs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFrameMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDataTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Base class for managing a SaveData file\n*/" },
		{ "IncludePath", "Serialization/SlotDataTask.h" },
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask.h" },
		{ "ToolTip", "Base class for managing a SaveData file" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Statics::NewProp_SlotData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotDataTask_Statics::NewProp_SlotData = { "SlotData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotDataTask, SlotData), Z_Construct_UClass_USlotData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Statics::NewProp_SlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Statics::NewProp_SlotData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Statics::NewProp_Preset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotDataTask_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotDataTask, Preset), Z_Construct_UClass_USavePreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Statics::NewProp_Preset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Statics::NewProp_MaxFrameMs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlotDataTask_Statics::NewProp_MaxFrameMs = { "MaxFrameMs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotDataTask, MaxFrameMs), METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Statics::NewProp_MaxFrameMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Statics::NewProp_MaxFrameMs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotDataTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDataTask_Statics::NewProp_SlotData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDataTask_Statics::NewProp_Preset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDataTask_Statics::NewProp_MaxFrameMs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDataTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDataTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlotDataTask_Statics::ClassParams = {
		&USlotDataTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotDataTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDataTask()
	{
		if (!Z_Registration_Info_UClass_USlotDataTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlotDataTask.OuterSingleton, Z_Construct_UClass_USlotDataTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlotDataTask.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotDataTask>()
	{
		return USlotDataTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDataTask);
	USlotDataTask::~USlotDataTask() {}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlotDataTask, USlotDataTask::StaticClass, TEXT("USlotDataTask"), &Z_Registration_Info_UClass_USlotDataTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlotDataTask), 983216195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_h_457414843(TEXT("/Script/SaveExtension"),
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_SlotDataTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
