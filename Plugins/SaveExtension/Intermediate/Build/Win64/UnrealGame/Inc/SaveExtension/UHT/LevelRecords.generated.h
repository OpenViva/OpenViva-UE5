// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Serialization/LevelRecords.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEEXTENSION_LevelRecords_generated_h
#error "LevelRecords.generated.h already included, missing '#pragma once' in LevelRecords.h"
#endif
#define SAVEEXTENSION_LevelRecords_generated_h

#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_LevelRecords_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelRecord_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseRecord Super;


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FLevelRecord>();

#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_LevelRecords_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct(); \
	typedef FLevelRecord Super;


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FPersistentLevelRecord>();

#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_LevelRecords_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics; \
	SAVEEXTENSION_API static class UScriptStruct* StaticStruct(); \
	typedef FLevelRecord Super;


template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<struct FStreamingLevelRecord>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_Serialization_LevelRecords_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
