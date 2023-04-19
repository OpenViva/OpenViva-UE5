// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SaveManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_ULevelStreamingNotifier_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USaveExtensionInterface_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USaveManager();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USaveManager_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USavePreset_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotData_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotInfo_NoRegister();
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult();
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_ELoadGameResult();
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_ELoadInfoResult();
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_ESaveGameResult();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotSize();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics
	{
		struct _Script_SaveExtension_eventOnGameSavedMC_Parms
		{
			USlotInfo* SlotInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics::NewProp_SlotInfo = { "SlotInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SaveExtension_eventOnGameSavedMC_Parms, SlotInfo), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics::NewProp_SlotInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SaveExtension, nullptr, "OnGameSavedMC__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics::_Script_SaveExtension_eventOnGameSavedMC_Parms), Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics
	{
		struct _Script_SaveExtension_eventOnGameLoadedMC_Parms
		{
			USlotInfo* SlotInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics::NewProp_SlotInfo = { "SlotInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SaveExtension_eventOnGameLoadedMC_Parms, SlotInfo), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics::NewProp_SlotInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SaveExtension, nullptr, "OnGameLoadedMC__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics::_Script_SaveExtension_eventOnGameLoadedMC_Parms), Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenshotSize;
class UScriptStruct* FScreenshotSize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotSize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenshotSize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotSize, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ScreenshotSize"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotSize.OuterSingleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FScreenshotSize>()
{
	return FScreenshotSize::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScreenshotSize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotSize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotSize>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScreenshotSize, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScreenshotSize, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenshotSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotSize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"ScreenshotSize",
		sizeof(FScreenshotSize),
		alignof(FScreenshotSize),
		Z_Construct_UScriptStruct_FScreenshotSize_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotSize_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotSize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotSize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenshotSize()
	{
		if (!Z_Registration_Info_UScriptStruct_ScreenshotSize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenshotSize.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotSize_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScreenshotSize.InnerSingleton;
	}
	DEFINE_FUNCTION(USaveManager::execBPLoadSlotFromId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotId);
		P_GET_ENUM_REF(ELoadGameResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPLoadSlotFromId(Z_Param_SlotId,(ELoadGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPSaveSlotToId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotId);
		P_GET_UBOOL(Z_Param_bScreenshot);
		P_GET_STRUCT(FScreenshotSize,Z_Param_Size);
		P_GET_ENUM_REF(ESaveGameResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_UBOOL(Z_Param_bOverrideIfNeeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPSaveSlotToId(Z_Param_SlotId,Z_Param_bScreenshot,Z_Param_Size,(ESaveGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo,Z_Param_bOverrideIfNeeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execUnsubscribeFromEvents)
	{
		P_GET_TINTERFACE_REF(ISaveExtensionInterface,Z_Param_Out_Interface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsubscribeFromEvents(Z_Param_Out_Interface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execSubscribeForEvents)
	{
		P_GET_TINTERFACE_REF(ISaveExtensionInterface,Z_Param_Out_Interface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeForEvents(Z_Param_Out_Interface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execIsSavingOrLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSavingOrLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execDeserializeStreamingLevel)
	{
		P_GET_OBJECT(ULevelStreaming,Z_Param_LevelStreaming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeserializeStreamingLevel(Z_Param_LevelStreaming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execSerializeStreamingLevel)
	{
		P_GET_OBJECT(ULevelStreaming,Z_Param_LevelStreaming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SerializeStreamingLevel(Z_Param_LevelStreaming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execGetSlotNameFromId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSlotNameFromId(Z_Param_SlotId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execSetActivePreset)
	{
		P_GET_OBJECT(UClass,Z_Param_PresetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USavePreset**)Z_Param__Result=P_THIS->SetActivePreset(Z_Param_PresetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execIsInSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execIsSlotSavedById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSlotSavedById(Z_Param_SlotId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execIsSlotSaved)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSlotSaved(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execGetSlotInfo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USlotInfo**)Z_Param__Result=P_THIS->GetSlotInfo(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execGetSlotInfoById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USlotInfo**)Z_Param__Result=P_THIS->GetSlotInfoById(Z_Param_SlotId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execGetCurrentData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USlotData**)Z_Param__Result=P_THIS->GetCurrentData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execGetCurrentInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USlotInfo**)Z_Param__Result=P_THIS->GetCurrentInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execDeleteSlot)
	{
		P_GET_OBJECT(USlotInfo,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteSlot(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPGetPreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USavePreset**)Z_Param__Result=P_THIS->BPGetPreset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPDeleteAllSlots)
	{
		P_GET_ENUM_REF(EDeleteSlotsResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPDeleteAllSlots((EDeleteSlotsResult&)(Z_Param_Out_Result),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execDeleteSlotById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteSlotById(Z_Param_SlotId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPLoadAllSlotInfos)
	{
		P_GET_UBOOL(Z_Param_bSortByRecent);
		P_GET_TARRAY_REF(USlotInfo*,Z_Param_Out_SaveInfos);
		P_GET_ENUM_REF(ELoadInfoResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPLoadAllSlotInfos(Z_Param_bSortByRecent,Z_Param_Out_SaveInfos,(ELoadInfoResult&)(Z_Param_Out_Result),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPReloadCurrentSlot)
	{
		P_GET_ENUM_REF(ELoadGameResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPReloadCurrentSlot((ELoadGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPLoadSlotByInfo)
	{
		P_GET_OBJECT(USlotInfo,Z_Param_SlotInfo);
		P_GET_ENUM_REF(ELoadGameResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPLoadSlotByInfo(Z_Param_SlotInfo,(ELoadGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPLoadSlotById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotId);
		P_GET_ENUM_REF(ELoadGameResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPLoadSlotById(Z_Param_SlotId,(ELoadGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPLoadSlot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_GET_ENUM_REF(ELoadGameResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPLoadSlot(Z_Param_SlotName,(ELoadGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPSaveCurrentSlot)
	{
		P_GET_UBOOL(Z_Param_bScreenshot);
		P_GET_STRUCT(FScreenshotSize,Z_Param_Size);
		P_GET_ENUM_REF(ESaveGameResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPSaveCurrentSlot(Z_Param_bScreenshot,Z_Param_Size,(ESaveGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPSaveSlotByInfo)
	{
		P_GET_OBJECT(USlotInfo,Z_Param_SlotInfo);
		P_GET_UBOOL(Z_Param_bScreenshot);
		P_GET_STRUCT(FScreenshotSize,Z_Param_Size);
		P_GET_ENUM_REF(ESaveGameResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_UBOOL(Z_Param_bOverrideIfNeeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPSaveSlotByInfo(Z_Param_SlotInfo,Z_Param_bScreenshot,Z_Param_Size,(ESaveGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo,Z_Param_bOverrideIfNeeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPSaveSlotById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotId);
		P_GET_UBOOL(Z_Param_bScreenshot);
		P_GET_STRUCT(FScreenshotSize,Z_Param_Size);
		P_GET_ENUM_REF(ESaveGameResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_UBOOL(Z_Param_bOverrideIfNeeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPSaveSlotById(Z_Param_SlotId,Z_Param_bScreenshot,Z_Param_Size,(ESaveGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo,Z_Param_bOverrideIfNeeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execBPSaveSlot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_GET_UBOOL(Z_Param_bScreenshot);
		P_GET_STRUCT(FScreenshotSize,Z_Param_Size);
		P_GET_ENUM_REF(ESaveGameResult,Z_Param_Out_Result);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_UBOOL(Z_Param_bOverrideIfNeeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPSaveSlot(Z_Param_SlotName,Z_Param_bScreenshot,Z_Param_Size,(ESaveGameResult&)(Z_Param_Out_Result),Z_Param_LatentInfo,Z_Param_bOverrideIfNeeded);
		P_NATIVE_END;
	}
	void USaveManager::StaticRegisterNativesUSaveManager()
	{
		UClass* Class = USaveManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BPDeleteAllSlots", &USaveManager::execBPDeleteAllSlots },
			{ "BPGetPreset", &USaveManager::execBPGetPreset },
			{ "BPLoadAllSlotInfos", &USaveManager::execBPLoadAllSlotInfos },
			{ "BPLoadSlot", &USaveManager::execBPLoadSlot },
			{ "BPLoadSlotById", &USaveManager::execBPLoadSlotById },
			{ "BPLoadSlotByInfo", &USaveManager::execBPLoadSlotByInfo },
			{ "BPLoadSlotFromId", &USaveManager::execBPLoadSlotFromId },
			{ "BPReloadCurrentSlot", &USaveManager::execBPReloadCurrentSlot },
			{ "BPSaveCurrentSlot", &USaveManager::execBPSaveCurrentSlot },
			{ "BPSaveSlot", &USaveManager::execBPSaveSlot },
			{ "BPSaveSlotById", &USaveManager::execBPSaveSlotById },
			{ "BPSaveSlotByInfo", &USaveManager::execBPSaveSlotByInfo },
			{ "BPSaveSlotToId", &USaveManager::execBPSaveSlotToId },
			{ "DeleteSlot", &USaveManager::execDeleteSlot },
			{ "DeleteSlotById", &USaveManager::execDeleteSlotById },
			{ "DeserializeStreamingLevel", &USaveManager::execDeserializeStreamingLevel },
			{ "GetCurrentData", &USaveManager::execGetCurrentData },
			{ "GetCurrentInfo", &USaveManager::execGetCurrentInfo },
			{ "GetSlotInfo", &USaveManager::execGetSlotInfo },
			{ "GetSlotInfoById", &USaveManager::execGetSlotInfoById },
			{ "GetSlotNameFromId", &USaveManager::execGetSlotNameFromId },
			{ "IsInSlot", &USaveManager::execIsInSlot },
			{ "IsSavingOrLoading", &USaveManager::execIsSavingOrLoading },
			{ "IsSlotSaved", &USaveManager::execIsSlotSaved },
			{ "IsSlotSavedById", &USaveManager::execIsSlotSavedById },
			{ "SerializeStreamingLevel", &USaveManager::execSerializeStreamingLevel },
			{ "SetActivePreset", &USaveManager::execSetActivePreset },
			{ "SubscribeForEvents", &USaveManager::execSubscribeForEvents },
			{ "UnsubscribeFromEvents", &USaveManager::execUnsubscribeFromEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics
	{
		struct SaveManager_eventBPDeleteAllSlots_Parms
		{
			EDeleteSlotsResult Result;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPDeleteAllSlots_Parms, Result), Z_Construct_UEnum_SaveExtension_EDeleteSlotsResult, METADATA_PARAMS(nullptr, 0) }; // 1603029251
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPDeleteAllSlots_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "Comment", "/** Delete all saved slots from disk, loaded or not */" },
		{ "DisplayName", "Delete All Slots" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Delete all saved slots from disk, loaded or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPDeleteAllSlots", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::SaveManager_eventBPDeleteAllSlots_Parms), Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPDeleteAllSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPDeleteAllSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPGetPreset_Statics
	{
		struct SaveManager_eventBPGetPreset_Parms
		{
			USavePreset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_BPGetPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPGetPreset_Parms, ReturnValue), Z_Construct_UClass_USavePreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPGetPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPGetPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPGetPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPGetPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPGetPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPGetPreset_Statics::SaveManager_eventBPGetPreset_Parms), Z_Construct_UFunction_USaveManager_BPGetPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPGetPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPGetPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPGetPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPGetPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPGetPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics
	{
		struct SaveManager_eventBPLoadAllSlotInfos_Parms
		{
			bool bSortByRecent;
			TArray<USlotInfo*> SaveInfos;
			ELoadInfoResult Result;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSortByRecent_MetaData[];
#endif
		static void NewProp_bSortByRecent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortByRecent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveInfos_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveInfos;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_bSortByRecent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_bSortByRecent_SetBit(void* Obj)
	{
		((SaveManager_eventBPLoadAllSlotInfos_Parms*)Obj)->bSortByRecent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_bSortByRecent = { "bSortByRecent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventBPLoadAllSlotInfos_Parms), &Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_bSortByRecent_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_bSortByRecent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_bSortByRecent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_SaveInfos_Inner = { "SaveInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_SaveInfos = { "SaveInfos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadAllSlotInfos_Parms, SaveInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadAllSlotInfos_Parms, Result), Z_Construct_UEnum_SaveExtension_ELoadInfoResult, METADATA_PARAMS(nullptr, 0) }; // 2984091777
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadAllSlotInfos_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_bSortByRecent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_SaveInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_SaveInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "Comment", "/**\n\x09 * Find all saved games and return their SlotInfos\n\x09 * @param bSortByRecent Should slots be ordered by save date?\n\x09 * @param SaveInfos All saved games found on disk\n\x09 */" },
		{ "DisplayName", "Load All Slot Infos" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Find all saved games and return their SlotInfos\n@param bSortByRecent Should slots be ordered by save date?\n@param SaveInfos All saved games found on disk" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPLoadAllSlotInfos", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::SaveManager_eventBPLoadAllSlotInfos_Parms), Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics
	{
		struct SaveManager_eventBPLoadSlot_Parms
		{
			FName SlotName;
			ELoadGameResult Result;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlot_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlot_Parms, Result), Z_Construct_UEnum_SaveExtension_ELoadGameResult, METADATA_PARAMS(nullptr, 0) }; // 1385456098
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlot_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension|Loading" },
		{ "Comment", "/** Load game from a slot name */" },
		{ "DisplayName", "Load Slot" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Load game from a slot name" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPLoadSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::SaveManager_eventBPLoadSlot_Parms), Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPLoadSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPLoadSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics
	{
		struct SaveManager_eventBPLoadSlotById_Parms
		{
			int32 SlotId;
			ELoadGameResult Result;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlotById_Parms, SlotId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlotById_Parms, Result), Z_Construct_UEnum_SaveExtension_ELoadGameResult, METADATA_PARAMS(nullptr, 0) }; // 1385456098
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlotById_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::NewProp_SlotId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension|Loading" },
		{ "Comment", "/** Load game from a slot Id */" },
		{ "DisplayName", "Load Slot by Id" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Load game from a slot Id" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPLoadSlotById", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::SaveManager_eventBPLoadSlotById_Parms), Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPLoadSlotById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPLoadSlotById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics
	{
		struct SaveManager_eventBPLoadSlotByInfo_Parms
		{
			const USlotInfo* SlotInfo;
			ELoadGameResult Result;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::NewProp_SlotInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::NewProp_SlotInfo = { "SlotInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlotByInfo_Parms, SlotInfo), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::NewProp_SlotInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::NewProp_SlotInfo_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlotByInfo_Parms, Result), Z_Construct_UEnum_SaveExtension_ELoadGameResult, METADATA_PARAMS(nullptr, 0) }; // 1385456098
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlotByInfo_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::NewProp_SlotInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension|Loading" },
		{ "Comment", "/** Load game from a SlotInfo */" },
		{ "DisplayName", "Load Slot by Info" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Load game from a SlotInfo" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPLoadSlotByInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::SaveManager_eventBPLoadSlotByInfo_Parms), Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics
	{
		struct SaveManager_eventBPLoadSlotFromId_Parms
		{
			int32 SlotId;
			ELoadGameResult Result;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlotFromId_Parms, SlotId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlotFromId_Parms, Result), Z_Construct_UEnum_SaveExtension_ELoadGameResult, METADATA_PARAMS(nullptr, 0) }; // 1385456098
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPLoadSlotFromId_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::NewProp_SlotId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension|Loading" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Load Slot by Id' instead." },
		{ "DisplayName", "Load Slot from Id" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPLoadSlotFromId", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::SaveManager_eventBPLoadSlotFromId_Parms), Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPLoadSlotFromId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPLoadSlotFromId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics
	{
		struct SaveManager_eventBPReloadCurrentSlot_Parms
		{
			ELoadGameResult Result;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPReloadCurrentSlot_Parms, Result), Z_Construct_UEnum_SaveExtension_ELoadGameResult, METADATA_PARAMS(nullptr, 0) }; // 1385456098
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPReloadCurrentSlot_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension|Loading" },
		{ "Comment", "/** Reload the currently loaded slot if any */" },
		{ "DisplayName", "Reload Current Slot" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Reload the currently loaded slot if any" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPReloadCurrentSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::SaveManager_eventBPReloadCurrentSlot_Parms), Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics
	{
		struct SaveManager_eventBPSaveCurrentSlot_Parms
		{
			bool bScreenshot;
			FScreenshotSize Size;
			ESaveGameResult Result;
			FLatentActionInfo LatentInfo;
		};
		static void NewProp_bScreenshot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScreenshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_bScreenshot_SetBit(void* Obj)
	{
		((SaveManager_eventBPSaveCurrentSlot_Parms*)Obj)->bScreenshot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_bScreenshot = { "bScreenshot", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventBPSaveCurrentSlot_Parms), &Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_bScreenshot_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveCurrentSlot_Parms, Size), Z_Construct_UScriptStruct_FScreenshotSize, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_Size_MetaData)) }; // 647461138
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveCurrentSlot_Parms, Result), Z_Construct_UEnum_SaveExtension_ESaveGameResult, METADATA_PARAMS(nullptr, 0) }; // 3728026513
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveCurrentSlot_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_bScreenshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bScreenshot, Size" },
		{ "Category", "SaveExtension|Saving" },
		{ "Comment", "/** Save the currently loaded Slot */" },
		{ "DisplayName", "Save Current Slot" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Save the currently loaded Slot" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPSaveCurrentSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::SaveManager_eventBPSaveCurrentSlot_Parms), Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics
	{
		struct SaveManager_eventBPSaveSlot_Parms
		{
			FName SlotName;
			bool bScreenshot;
			FScreenshotSize Size;
			ESaveGameResult Result;
			FLatentActionInfo LatentInfo;
			bool bOverrideIfNeeded;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static void NewProp_bScreenshot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScreenshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static void NewProp_bOverrideIfNeeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideIfNeeded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlot_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_bScreenshot_SetBit(void* Obj)
	{
		((SaveManager_eventBPSaveSlot_Parms*)Obj)->bScreenshot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_bScreenshot = { "bScreenshot", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventBPSaveSlot_Parms), &Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_bScreenshot_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlot_Parms, Size), Z_Construct_UScriptStruct_FScreenshotSize, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_Size_MetaData)) }; // 647461138
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlot_Parms, Result), Z_Construct_UEnum_SaveExtension_ESaveGameResult, METADATA_PARAMS(nullptr, 0) }; // 3728026513
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlot_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	void Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_bOverrideIfNeeded_SetBit(void* Obj)
	{
		((SaveManager_eventBPSaveSlot_Parms*)Obj)->bOverrideIfNeeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_bOverrideIfNeeded = { "bOverrideIfNeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventBPSaveSlot_Parms), &Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_bOverrideIfNeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_bScreenshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::NewProp_bOverrideIfNeeded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bScreenshot, Size" },
		{ "Category", "SaveExtension|Saving" },
		{ "Comment", "/** Save the Game into an specified Slot */" },
		{ "CPP_Default_bOverrideIfNeeded", "true" },
		{ "DisplayName", "Save Slot" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Save the Game into an specified Slot" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPSaveSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::SaveManager_eventBPSaveSlot_Parms), Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPSaveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPSaveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics
	{
		struct SaveManager_eventBPSaveSlotById_Parms
		{
			int32 SlotId;
			bool bScreenshot;
			FScreenshotSize Size;
			ESaveGameResult Result;
			FLatentActionInfo LatentInfo;
			bool bOverrideIfNeeded;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
		static void NewProp_bScreenshot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScreenshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static void NewProp_bOverrideIfNeeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideIfNeeded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotById_Parms, SlotId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_bScreenshot_SetBit(void* Obj)
	{
		((SaveManager_eventBPSaveSlotById_Parms*)Obj)->bScreenshot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_bScreenshot = { "bScreenshot", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventBPSaveSlotById_Parms), &Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_bScreenshot_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotById_Parms, Size), Z_Construct_UScriptStruct_FScreenshotSize, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_Size_MetaData)) }; // 647461138
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotById_Parms, Result), Z_Construct_UEnum_SaveExtension_ESaveGameResult, METADATA_PARAMS(nullptr, 0) }; // 3728026513
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotById_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	void Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_bOverrideIfNeeded_SetBit(void* Obj)
	{
		((SaveManager_eventBPSaveSlotById_Parms*)Obj)->bOverrideIfNeeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_bOverrideIfNeeded = { "bOverrideIfNeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventBPSaveSlotById_Parms), &Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_bOverrideIfNeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_SlotId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_bScreenshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::NewProp_bOverrideIfNeeded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bScreenshot, Size" },
		{ "Category", "SaveExtension|Saving" },
		{ "Comment", "/** Save the Game into an specified Slot */" },
		{ "CPP_Default_bOverrideIfNeeded", "true" },
		{ "DisplayName", "Save Slot by Id" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Save the Game into an specified Slot" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPSaveSlotById", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::SaveManager_eventBPSaveSlotById_Parms), Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPSaveSlotById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPSaveSlotById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics
	{
		struct SaveManager_eventBPSaveSlotByInfo_Parms
		{
			const USlotInfo* SlotInfo;
			bool bScreenshot;
			FScreenshotSize Size;
			ESaveGameResult Result;
			FLatentActionInfo LatentInfo;
			bool bOverrideIfNeeded;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfo;
		static void NewProp_bScreenshot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScreenshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static void NewProp_bOverrideIfNeeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideIfNeeded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_SlotInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_SlotInfo = { "SlotInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotByInfo_Parms, SlotInfo), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_SlotInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_SlotInfo_MetaData)) };
	void Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_bScreenshot_SetBit(void* Obj)
	{
		((SaveManager_eventBPSaveSlotByInfo_Parms*)Obj)->bScreenshot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_bScreenshot = { "bScreenshot", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventBPSaveSlotByInfo_Parms), &Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_bScreenshot_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotByInfo_Parms, Size), Z_Construct_UScriptStruct_FScreenshotSize, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_Size_MetaData)) }; // 647461138
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotByInfo_Parms, Result), Z_Construct_UEnum_SaveExtension_ESaveGameResult, METADATA_PARAMS(nullptr, 0) }; // 3728026513
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotByInfo_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	void Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_bOverrideIfNeeded_SetBit(void* Obj)
	{
		((SaveManager_eventBPSaveSlotByInfo_Parms*)Obj)->bOverrideIfNeeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_bOverrideIfNeeded = { "bOverrideIfNeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventBPSaveSlotByInfo_Parms), &Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_bOverrideIfNeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_SlotInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_bScreenshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::NewProp_bOverrideIfNeeded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bScreenshot, Size" },
		{ "Category", "SaveExtension|Saving" },
		{ "Comment", "/** Save the Game to a Slot */" },
		{ "CPP_Default_bOverrideIfNeeded", "true" },
		{ "DisplayName", "Save Slot by Info" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Save the Game to a Slot" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPSaveSlotByInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::SaveManager_eventBPSaveSlotByInfo_Parms), Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics
	{
		struct SaveManager_eventBPSaveSlotToId_Parms
		{
			int32 SlotId;
			bool bScreenshot;
			FScreenshotSize Size;
			ESaveGameResult Result;
			FLatentActionInfo LatentInfo;
			bool bOverrideIfNeeded;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
		static void NewProp_bScreenshot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScreenshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static void NewProp_bOverrideIfNeeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideIfNeeded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotToId_Parms, SlotId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_bScreenshot_SetBit(void* Obj)
	{
		((SaveManager_eventBPSaveSlotToId_Parms*)Obj)->bScreenshot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_bScreenshot = { "bScreenshot", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventBPSaveSlotToId_Parms), &Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_bScreenshot_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotToId_Parms, Size), Z_Construct_UScriptStruct_FScreenshotSize, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_Size_MetaData)) }; // 647461138
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotToId_Parms, Result), Z_Construct_UEnum_SaveExtension_ESaveGameResult, METADATA_PARAMS(nullptr, 0) }; // 3728026513
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventBPSaveSlotToId_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	void Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_bOverrideIfNeeded_SetBit(void* Obj)
	{
		((SaveManager_eventBPSaveSlotToId_Parms*)Obj)->bOverrideIfNeeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_bOverrideIfNeeded = { "bOverrideIfNeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventBPSaveSlotToId_Parms), &Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_bOverrideIfNeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_SlotId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_bScreenshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::NewProp_bOverrideIfNeeded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bScreenshot, Size" },
		{ "Category", "SaveExtension|Saving" },
		{ "Comment", "/***********************************************************************/" },
		{ "CPP_Default_bOverrideIfNeeded", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Save Slot by Id' instead." },
		{ "DisplayName", "Save Slot to Id" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "BPSaveSlotToId", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::SaveManager_eventBPSaveSlotToId_Parms), Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_BPSaveSlotToId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_BPSaveSlotToId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_DeleteSlot_Statics
	{
		struct SaveManager_eventDeleteSlot_Parms
		{
			USlotInfo* Slot;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventDeleteSlot_Parms, Slot), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveManager_eventDeleteSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventDeleteSlot_Parms), &Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "Comment", "/** Delete a saved game on an specified slot\n\x09 * Performance: Interacts with disk, can be slow\n\x09 */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Delete a saved game on an specified slot\nPerformance: Interacts with disk, can be slow" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "DeleteSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::SaveManager_eventDeleteSlot_Parms), Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_DeleteSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics
	{
		struct SaveManager_eventDeleteSlotById_Parms
		{
			int32 SlotId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventDeleteSlotById_Parms, SlotId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveManager_eventDeleteSlotById_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventDeleteSlotById_Parms), &Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::NewProp_SlotId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "Comment", "/** Delete a saved game on an specified slot Id\n\x09 * Performance: Interacts with disk, can be slow\n\x09 */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Delete a saved game on an specified slot Id\nPerformance: Interacts with disk, can be slow" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "DeleteSlotById", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::SaveManager_eventDeleteSlotById_Parms), Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_DeleteSlotById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_DeleteSlotById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics
	{
		struct SaveManager_eventDeserializeStreamingLevel_Parms
		{
			ULevelStreaming* LevelStreaming;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelStreaming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics::NewProp_LevelStreaming = { "LevelStreaming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventDeserializeStreamingLevel_Parms, LevelStreaming), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics::NewProp_LevelStreaming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "DeserializeStreamingLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics::SaveManager_eventDeserializeStreamingLevel_Parms), Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_GetCurrentData_Statics
	{
		struct SaveManager_eventGetCurrentData_Parms
		{
			USlotData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_GetCurrentData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventGetCurrentData_Parms, ReturnValue), Z_Construct_UClass_USlotData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetCurrentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetCurrentData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetCurrentData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "Comment", "/** Get the currently loaded SlotData. If game was never loaded returns an empty SlotData  */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Get the currently loaded SlotData. If game was never loaded returns an empty SlotData" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetCurrentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetCurrentData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_GetCurrentData_Statics::SaveManager_eventGetCurrentData_Parms), Z_Construct_UFunction_USaveManager_GetCurrentData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetCurrentData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetCurrentData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetCurrentData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_GetCurrentData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetCurrentData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics
	{
		struct SaveManager_eventGetCurrentInfo_Parms
		{
			USlotInfo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventGetCurrentInfo_Parms, ReturnValue), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "Comment", "/** Get the currently loaded SlotInfo. If game was never loaded returns a new SlotInfo */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Get the currently loaded SlotInfo. If game was never loaded returns a new SlotInfo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetCurrentInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics::SaveManager_eventGetCurrentInfo_Parms), Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_GetCurrentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetCurrentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics
	{
		struct SaveManager_eventGetSlotInfo_Parms
		{
			FName SlotName;
			USlotInfo* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventGetSlotInfo_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventGetSlotInfo_Parms, ReturnValue), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension|Slots" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetSlotInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::SaveManager_eventGetSlotInfo_Parms), Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_GetSlotInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetSlotInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics
	{
		struct SaveManager_eventGetSlotInfoById_Parms
		{
			int32 SlotId;
			USlotInfo* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventGetSlotInfoById_Parms, SlotId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventGetSlotInfoById_Parms, ReturnValue), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::NewProp_SlotId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension|Slots" },
		{ "Comment", "/**\n\x09 * Load and return an SlotInfo by Id if it exists\n\x09 * Performance: Interacts with disk, could be slow if called frequently\n\x09 * @param SlotId Id of the SlotInfo to be loaded\n\x09 * @return the SlotInfo associated with an Id\n\x09 */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Load and return an SlotInfo by Id if it exists\nPerformance: Interacts with disk, could be slow if called frequently\n@param SlotId Id of the SlotInfo to be loaded\n@return the SlotInfo associated with an Id" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetSlotInfoById", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::SaveManager_eventGetSlotInfoById_Parms), Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_GetSlotInfoById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetSlotInfoById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics
	{
		struct SaveManager_eventGetSlotNameFromId_Parms
		{
			int32 SlotId;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::NewProp_SlotId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventGetSlotNameFromId_Parms, SlotId), METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::NewProp_SlotId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::NewProp_SlotId_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventGetSlotNameFromId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::NewProp_SlotId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetSlotNameFromId", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::SaveManager_eventGetSlotNameFromId_Parms), Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_GetSlotNameFromId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetSlotNameFromId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_IsInSlot_Statics
	{
		struct SaveManager_eventIsInSlot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveManager_IsInSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveManager_eventIsInSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_IsInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventIsInSlot_Parms), &Z_Construct_UFunction_USaveManager_IsInSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_IsInSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_IsInSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_IsInSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension|Slots" },
		{ "Comment", "/** Check if currently playing in a saved slot\n\x09 * @return true if currently playing in a saved slot\n\x09 */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Check if currently playing in a saved slot\n@return true if currently playing in a saved slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_IsInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "IsInSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_IsInSlot_Statics::SaveManager_eventIsInSlot_Parms), Z_Construct_UFunction_USaveManager_IsInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_IsInSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_IsInSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_IsInSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_IsInSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_IsInSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics
	{
		struct SaveManager_eventIsSavingOrLoading_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveManager_eventIsSavingOrLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventIsSavingOrLoading_Parms), &Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "Comment", "/** @return true when saving or loading anything, including levels */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "@return true when saving or loading anything, including levels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "IsSavingOrLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::SaveManager_eventIsSavingOrLoading_Parms), Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_IsSavingOrLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_IsSavingOrLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics
	{
		struct SaveManager_eventIsSlotSaved_Parms
		{
			FName SlotName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventIsSlotSaved_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveManager_eventIsSlotSaved_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventIsSlotSaved_Parms), &Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension|Slots" },
		{ "Comment", "/** Check if an slot exists on disk\n\x09 * @return true if the slot exists\n\x09 */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Check if an slot exists on disk\n@return true if the slot exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "IsSlotSaved", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::SaveManager_eventIsSlotSaved_Parms), Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_IsSlotSaved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_IsSlotSaved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics
	{
		struct SaveManager_eventIsSlotSavedById_Parms
		{
			int32 SlotId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventIsSlotSavedById_Parms, SlotId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveManager_eventIsSlotSavedById_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventIsSlotSavedById_Parms), &Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::NewProp_SlotId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension|Slots" },
		{ "Comment", "/** Check if an slot exists on disk\n\x09 * @return true if the slot exists\n\x09 */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Check if an slot exists on disk\n@return true if the slot exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "IsSlotSavedById", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::SaveManager_eventIsSlotSavedById_Parms), Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_IsSlotSavedById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_IsSlotSavedById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics
	{
		struct SaveManager_eventSerializeStreamingLevel_Parms
		{
			ULevelStreaming* LevelStreaming;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelStreaming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics::NewProp_LevelStreaming = { "LevelStreaming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventSerializeStreamingLevel_Parms, LevelStreaming), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics::NewProp_LevelStreaming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "SerializeStreamingLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics::SaveManager_eventSerializeStreamingLevel_Parms), Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_SerializeStreamingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_SerializeStreamingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_SetActivePreset_Statics
	{
		struct SaveManager_eventSetActivePreset_Parms
		{
			TSubclassOf<USavePreset>  PresetClass;
			USavePreset* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_PresetClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::NewProp_PresetClass = { "PresetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventSetActivePreset_Parms, PresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USavePreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventSetActivePreset_Parms, ReturnValue), Z_Construct_UClass_USavePreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::NewProp_PresetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "Comment", "/**\n\x09 * Set the preset to be used for saving and loading\n\x09 * @return true if the preset was set successfully\n\x09 */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Set the preset to be used for saving and loading\n@return true if the preset was set successfully" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "SetActivePreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::SaveManager_eventSetActivePreset_Parms), Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_SetActivePreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_SetActivePreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics
	{
		struct SaveManager_eventSubscribeForEvents_Parms
		{
			TScriptInterface<ISaveExtensionInterface> Interface;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::NewProp_Interface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventSubscribeForEvents_Parms, Interface), Z_Construct_UClass_USaveExtensionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::NewProp_Interface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::NewProp_Interface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::NewProp_Interface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "Comment", "/** Subscribe to receive save and load events on an Interface */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Subscribe to receive save and load events on an Interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "SubscribeForEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::SaveManager_eventSubscribeForEvents_Parms), Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_SubscribeForEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_SubscribeForEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics
	{
		struct SaveManager_eventUnsubscribeFromEvents_Parms
		{
			TScriptInterface<ISaveExtensionInterface> Interface;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::NewProp_Interface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventUnsubscribeFromEvents_Parms, Interface), Z_Construct_UClass_USaveExtensionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::NewProp_Interface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::NewProp_Interface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::NewProp_Interface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveExtension" },
		{ "Comment", "/** Unsubscribe to no longer receive save and load events on an Interface */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Unsubscribe to no longer receive save and load events on an Interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "UnsubscribeFromEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::SaveManager_eventUnsubscribeFromEvents_Parms), Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveManager);
	UClass* Z_Construct_UClass_USaveManager_NoRegister()
	{
		return USaveManager::StaticClass();
	}
	struct Z_Construct_UClass_USaveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickWithGameWorld_MetaData[];
#endif
		static void NewProp_bTickWithGameWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickWithGameWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelStreamingNotifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreamingNotifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelStreamingNotifiers;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_SubscribedInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubscribedInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubscribedInterfaces;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameSaved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameSaved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameLoaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveManager_BPDeleteAllSlots, "BPDeleteAllSlots" }, // 402501604
		{ &Z_Construct_UFunction_USaveManager_BPGetPreset, "BPGetPreset" }, // 1420327872
		{ &Z_Construct_UFunction_USaveManager_BPLoadAllSlotInfos, "BPLoadAllSlotInfos" }, // 4042767297
		{ &Z_Construct_UFunction_USaveManager_BPLoadSlot, "BPLoadSlot" }, // 380851061
		{ &Z_Construct_UFunction_USaveManager_BPLoadSlotById, "BPLoadSlotById" }, // 2333588909
		{ &Z_Construct_UFunction_USaveManager_BPLoadSlotByInfo, "BPLoadSlotByInfo" }, // 864808926
		{ &Z_Construct_UFunction_USaveManager_BPLoadSlotFromId, "BPLoadSlotFromId" }, // 2464807369
		{ &Z_Construct_UFunction_USaveManager_BPReloadCurrentSlot, "BPReloadCurrentSlot" }, // 1309059944
		{ &Z_Construct_UFunction_USaveManager_BPSaveCurrentSlot, "BPSaveCurrentSlot" }, // 44271978
		{ &Z_Construct_UFunction_USaveManager_BPSaveSlot, "BPSaveSlot" }, // 302950852
		{ &Z_Construct_UFunction_USaveManager_BPSaveSlotById, "BPSaveSlotById" }, // 1633101725
		{ &Z_Construct_UFunction_USaveManager_BPSaveSlotByInfo, "BPSaveSlotByInfo" }, // 549101145
		{ &Z_Construct_UFunction_USaveManager_BPSaveSlotToId, "BPSaveSlotToId" }, // 496852412
		{ &Z_Construct_UFunction_USaveManager_DeleteSlot, "DeleteSlot" }, // 857075623
		{ &Z_Construct_UFunction_USaveManager_DeleteSlotById, "DeleteSlotById" }, // 653998012
		{ &Z_Construct_UFunction_USaveManager_DeserializeStreamingLevel, "DeserializeStreamingLevel" }, // 906512548
		{ &Z_Construct_UFunction_USaveManager_GetCurrentData, "GetCurrentData" }, // 3534946178
		{ &Z_Construct_UFunction_USaveManager_GetCurrentInfo, "GetCurrentInfo" }, // 1571352830
		{ &Z_Construct_UFunction_USaveManager_GetSlotInfo, "GetSlotInfo" }, // 1459588943
		{ &Z_Construct_UFunction_USaveManager_GetSlotInfoById, "GetSlotInfoById" }, // 4135461497
		{ &Z_Construct_UFunction_USaveManager_GetSlotNameFromId, "GetSlotNameFromId" }, // 640471983
		{ &Z_Construct_UFunction_USaveManager_IsInSlot, "IsInSlot" }, // 435041922
		{ &Z_Construct_UFunction_USaveManager_IsSavingOrLoading, "IsSavingOrLoading" }, // 3981086202
		{ &Z_Construct_UFunction_USaveManager_IsSlotSaved, "IsSlotSaved" }, // 4078956527
		{ &Z_Construct_UFunction_USaveManager_IsSlotSavedById, "IsSlotSavedById" }, // 3075123572
		{ &Z_Construct_UFunction_USaveManager_SerializeStreamingLevel, "SerializeStreamingLevel" }, // 4013646113
		{ &Z_Construct_UFunction_USaveManager_SetActivePreset, "SetActivePreset" }, // 25386351
		{ &Z_Construct_UFunction_USaveManager_SubscribeForEvents, "SubscribeForEvents" }, // 381306908
		{ &Z_Construct_UFunction_USaveManager_UnsubscribeFromEvents, "UnsubscribeFromEvents" }, // 2503617905
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "SaveExtension" },
		{ "Comment", "/**\n * Controls the complete saving and loading process\n */" },
		{ "DisplayName", "SaveManager" },
		{ "IncludePath", "SaveManager.h" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Controls the complete saving and loading process" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::NewProp_bTickWithGameWorld_MetaData[] = {
		{ "Category", "SaveManager" },
		{ "Comment", "// Loaded from settings. Can be changed at runtime\n" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Loaded from settings. Can be changed at runtime" },
	};
#endif
	void Z_Construct_UClass_USaveManager_Statics::NewProp_bTickWithGameWorld_SetBit(void* Obj)
	{
		((USaveManager*)Obj)->bTickWithGameWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_bTickWithGameWorld = { "bTickWithGameWorld", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USaveManager), &Z_Construct_UClass_USaveManager_Statics::NewProp_bTickWithGameWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::NewProp_bTickWithGameWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::NewProp_bTickWithGameWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::NewProp_ActivePreset_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_ActivePreset = { "ActivePreset", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveManager, ActivePreset), Z_Construct_UClass_USavePreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::NewProp_ActivePreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::NewProp_ActivePreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentInfo_MetaData[] = {
		{ "Comment", "/** Currently loaded SaveInfo. SaveInfo stores basic information about a saved game. Played time, levels,\n\x09 * progress, etc. */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Currently loaded SaveInfo. SaveInfo stores basic information about a saved game. Played time, levels,\nprogress, etc." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentInfo = { "CurrentInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveManager, CurrentInfo), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentData_MetaData[] = {
		{ "Comment", "/** Currently loaded SaveData. SaveData stores all serialized info about the world. */" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "Currently loaded SaveData. SaveData stores all serialized info about the world." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentData = { "CurrentData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveManager, CurrentData), Z_Construct_UClass_USlotData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentData_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_LevelStreamingNotifiers_Inner = { "LevelStreamingNotifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevelStreamingNotifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::NewProp_LevelStreamingNotifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_LevelStreamingNotifiers = { "LevelStreamingNotifiers", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveManager, LevelStreamingNotifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::NewProp_LevelStreamingNotifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::NewProp_LevelStreamingNotifiers_MetaData)) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_SubscribedInterfaces_Inner = { "SubscribedInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USaveExtensionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::NewProp_SubscribedInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_SubscribedInterfaces = { "SubscribedInterfaces", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveManager, SubscribedInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::NewProp_SubscribedInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::NewProp_SubscribedInterfaces_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USlotDataTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::NewProp_Tasks_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveManager, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::NewProp_Tasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::NewProp_Tasks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::NewProp_OnGameSaved_MetaData[] = {
		{ "Category", "SaveExtension" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_OnGameSaved = { "OnGameSaved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveManager, OnGameSaved), Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::NewProp_OnGameSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::NewProp_OnGameSaved_MetaData)) }; // 970104490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::NewProp_OnGameLoaded_MetaData[] = {
		{ "Category", "SaveExtension" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_OnGameLoaded = { "OnGameLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveManager, OnGameLoaded), Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::NewProp_OnGameLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::NewProp_OnGameLoaded_MetaData)) }; // 1473748611
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_bTickWithGameWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_ActivePreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_LevelStreamingNotifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_LevelStreamingNotifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_SubscribedInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_SubscribedInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_Tasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_Tasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_OnGameSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_OnGameLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveManager_Statics::ClassParams = {
		&USaveManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveManager()
	{
		if (!Z_Registration_Info_UClass_USaveManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveManager.OuterSingleton, Z_Construct_UClass_USaveManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveManager.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UClass* StaticClass<USaveManager>()
	{
		return USaveManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveManager);
	USaveManager::~USaveManager() {}
	struct Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_Statics::ScriptStructInfo[] = {
		{ FScreenshotSize::StaticStruct, Z_Construct_UScriptStruct_FScreenshotSize_Statics::NewStructOps, TEXT("ScreenshotSize"), &Z_Registration_Info_UScriptStruct_ScreenshotSize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotSize), 647461138U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveManager, USaveManager::StaticClass, TEXT("USaveManager"), &Z_Registration_Info_UClass_USaveManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveManager), 827535706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_2087527388(TEXT("/Script/SaveExtension"),
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
