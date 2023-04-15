// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SlotInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotInfo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotInfo();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	DEFINE_FUNCTION(USlotInfo::execGetThumbnail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetThumbnail();
		P_NATIVE_END;
	}
	void USlotInfo::StaticRegisterNativesUSlotInfo()
	{
		UClass* Class = USlotInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetThumbnail", &USlotInfo::execGetThumbnail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics
	{
		struct SlotInfo_eventGetThumbnail_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlotInfo_eventGetThumbnail_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Returns this slot's thumbnail if any */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Returns this slot's thumbnail if any" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlotInfo, nullptr, "GetThumbnail", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::SlotInfo_eventGetThumbnail_Parms), Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlotInfo_GetThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlotInfo_GetThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlotInfo);
	UClass* Z_Construct_UClass_USlotInfo_NoRegister()
	{
		return USlotInfo::StaticClass();
	}
	struct Z_Construct_UClass_USlotInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayedTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotPlayedTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotPlayedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedThumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedThumbnail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlotInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlotInfo_GetThumbnail, "GetThumbnail" }, // 931502433
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "SaveExtension" },
		{ "Comment", "/**\n * USaveInfo stores information that needs to be accessible WITHOUT loading the game.\n * Works like a common SaveGame object\n * E.g: Dates, played time, progress, level\n */" },
		{ "HideCategories", "Activation Actor Tick Actor Input Rendering Replication Socket Thumbnail" },
		{ "IncludePath", "SlotInfo.h" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "USaveInfo stores information that needs to be accessible WITHOUT loading the game.\nWorks like a common SaveGame object\nE.g: Dates, played time, progress, level" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Slot where this SaveInfo and its saveData are saved */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Slot where this SaveInfo and its saveData are saved" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotInfo, FileName), METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotInfo, DisplayName), METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_PlayedTime_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Played time since this saved game was started. Not related to slots, slots can change */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Played time since this saved game was started. Not related to slots, slots can change" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_PlayedTime = { "PlayedTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotInfo, PlayedTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_PlayedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_PlayedTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_SlotPlayedTime_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Played time since this saved game was created */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Played time since this saved game was created" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_SlotPlayedTime = { "SlotPlayedTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotInfo, SlotPlayedTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_SlotPlayedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_SlotPlayedTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_SaveDate_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Last date this slot was saved. */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Last date this slot was saved." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_SaveDate = { "SaveDate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotInfo, SaveDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_SaveDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_SaveDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_LoadDate_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Date at which this slot was loaded. */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Date at which this slot was loaded." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_LoadDate = { "LoadDate", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotInfo, LoadDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_LoadDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_LoadDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "SlotInfo" },
		{ "Comment", "/** Root Level where this Slot was saved */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Root Level where this Slot was saved" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotInfo, Map), METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_ThumbnailPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_ThumbnailPath = { "ThumbnailPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotInfo, ThumbnailPath), METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_ThumbnailPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_ThumbnailPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotInfo_Statics::NewProp_CachedThumbnail_MetaData[] = {
		{ "Comment", "/** Thumbnail gets cached here the first time it is requested */" },
		{ "ModuleRelativePath", "Public/SlotInfo.h" },
		{ "ToolTip", "Thumbnail gets cached here the first time it is requested" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotInfo_Statics::NewProp_CachedThumbnail = { "CachedThumbnail", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotInfo, CachedThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::NewProp_CachedThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::NewProp_CachedThumbnail_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_PlayedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_SlotPlayedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_SaveDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_LoadDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_ThumbnailPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfo_Statics::NewProp_CachedThumbnail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlotInfo_Statics::ClassParams = {
		&USlotInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USlotInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotInfo()
	{
		if (!Z_Registration_Info_UClass_USlotInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlotInfo.OuterSingleton, Z_Construct_UClass_USlotInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlotInfo.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotInfo>()
	{
		return USlotInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotInfo);
	USlotInfo::~USlotInfo() {}
	struct Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlotInfo, USlotInfo::StaticClass, TEXT("USlotInfo"), &Z_Registration_Info_UClass_USlotInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlotInfo), 752533633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_3622327212(TEXT("/Script/SaveExtension"),
		Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SlotInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
