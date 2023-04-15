// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ISaveExtensionInterface;
class ULevelStreaming;
class USavePreset;
class USlotData;
class USlotInfo;
enum class EDeleteSlotsResult : uint8;
enum class ELoadGameResult : uint8;
enum class ELoadInfoResult : uint8;
enum class ESaveGameResult : uint8;
struct FLatentActionInfo;
struct FScreenshotSize;
#ifdef SAVEEXTENSION_SaveManager_generated_h
#error "SaveManager.generated.h already included, missing '#pragma once' in SaveManager.h"
#endif
#define SAVEEXTENSION_SaveManager_generated_h

#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_29_DELEGATE \
struct _Script_SaveExtension_eventOnGameSavedMC_Parms \
{ \
	USlotInfo* SlotInfo; \
}; \
static inline void FOnGameSavedMC_DelegateWrapper(const FMulticastScriptDelegate& OnGameSavedMC, USlotInfo* SlotInfo) \
{ \
	_Script_SaveExtension_eventOnGameSavedMC_Parms Parms; \
	Parms.SlotInfo=SlotInfo; \
	OnGameSavedMC.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_30_DELEGATE \
struct _Script_SaveExtension_eventOnGameLoadedMC_Parms \
{ \
	USlotInfo* SlotInfo; \
}; \
static inline void FOnGameLoadedMC_DelegateWrapper(const FMulticastScriptDelegate& OnGameLoadedMC, USlotInfo* SlotInfo) \
{ \
	_Script_SaveExtension_eventOnGameLoadedMC_Parms Parms; \
	Parms.SlotInfo=SlotInfo; \
	OnGameLoadedMC.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenshotSize_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct();


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FScreenshotSize>();

#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_SPARSE_DATA
#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBPLoadSlotFromId); \
	DECLARE_FUNCTION(execBPSaveSlotToId); \
	DECLARE_FUNCTION(execUnsubscribeFromEvents); \
	DECLARE_FUNCTION(execSubscribeForEvents); \
	DECLARE_FUNCTION(execIsSavingOrLoading); \
	DECLARE_FUNCTION(execDeserializeStreamingLevel); \
	DECLARE_FUNCTION(execSerializeStreamingLevel); \
	DECLARE_FUNCTION(execGetSlotNameFromId); \
	DECLARE_FUNCTION(execSetActivePreset); \
	DECLARE_FUNCTION(execIsInSlot); \
	DECLARE_FUNCTION(execIsSlotSavedById); \
	DECLARE_FUNCTION(execIsSlotSaved); \
	DECLARE_FUNCTION(execGetSlotInfo); \
	DECLARE_FUNCTION(execGetSlotInfoById); \
	DECLARE_FUNCTION(execGetCurrentData); \
	DECLARE_FUNCTION(execGetCurrentInfo); \
	DECLARE_FUNCTION(execDeleteSlot); \
	DECLARE_FUNCTION(execBPGetPreset); \
	DECLARE_FUNCTION(execBPDeleteAllSlots); \
	DECLARE_FUNCTION(execDeleteSlotById); \
	DECLARE_FUNCTION(execBPLoadAllSlotInfos); \
	DECLARE_FUNCTION(execBPReloadCurrentSlot); \
	DECLARE_FUNCTION(execBPLoadSlotByInfo); \
	DECLARE_FUNCTION(execBPLoadSlotById); \
	DECLARE_FUNCTION(execBPLoadSlot); \
	DECLARE_FUNCTION(execBPSaveCurrentSlot); \
	DECLARE_FUNCTION(execBPSaveSlotByInfo); \
	DECLARE_FUNCTION(execBPSaveSlotById); \
	DECLARE_FUNCTION(execBPSaveSlot);


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBPLoadSlotFromId); \
	DECLARE_FUNCTION(execBPSaveSlotToId); \
	DECLARE_FUNCTION(execUnsubscribeFromEvents); \
	DECLARE_FUNCTION(execSubscribeForEvents); \
	DECLARE_FUNCTION(execIsSavingOrLoading); \
	DECLARE_FUNCTION(execDeserializeStreamingLevel); \
	DECLARE_FUNCTION(execSerializeStreamingLevel); \
	DECLARE_FUNCTION(execGetSlotNameFromId); \
	DECLARE_FUNCTION(execSetActivePreset); \
	DECLARE_FUNCTION(execIsInSlot); \
	DECLARE_FUNCTION(execIsSlotSavedById); \
	DECLARE_FUNCTION(execIsSlotSaved); \
	DECLARE_FUNCTION(execGetSlotInfo); \
	DECLARE_FUNCTION(execGetSlotInfoById); \
	DECLARE_FUNCTION(execGetCurrentData); \
	DECLARE_FUNCTION(execGetCurrentInfo); \
	DECLARE_FUNCTION(execDeleteSlot); \
	DECLARE_FUNCTION(execBPGetPreset); \
	DECLARE_FUNCTION(execBPDeleteAllSlots); \
	DECLARE_FUNCTION(execDeleteSlotById); \
	DECLARE_FUNCTION(execBPLoadAllSlotInfos); \
	DECLARE_FUNCTION(execBPReloadCurrentSlot); \
	DECLARE_FUNCTION(execBPLoadSlotByInfo); \
	DECLARE_FUNCTION(execBPLoadSlotById); \
	DECLARE_FUNCTION(execBPLoadSlot); \
	DECLARE_FUNCTION(execBPSaveCurrentSlot); \
	DECLARE_FUNCTION(execBPSaveSlotByInfo); \
	DECLARE_FUNCTION(execBPSaveSlotById); \
	DECLARE_FUNCTION(execBPSaveSlot);


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_ACCESSORS
#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveManager(); \
	friend struct Z_Construct_UClass_USaveManager_Statics; \
public: \
	DECLARE_CLASS(USaveManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USaveManager)


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUSaveManager(); \
	friend struct Z_Construct_UClass_USaveManager_Statics; \
public: \
	DECLARE_CLASS(USaveManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USaveManager)


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveManager(USaveManager&&); \
	NO_API USaveManager(const USaveManager&); \
public: \
	NO_API virtual ~USaveManager();


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveManager(USaveManager&&); \
	NO_API USaveManager(const USaveManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveManager) \
	NO_API virtual ~USaveManager();


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_54_PROLOG
#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_SPARSE_DATA \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_RPC_WRAPPERS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_ACCESSORS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_INCLASS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_SPARSE_DATA \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_ACCESSORS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_INCLASS_NO_PURE_DECLS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEEXTENSION_API UClass* StaticClass<class USaveManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
