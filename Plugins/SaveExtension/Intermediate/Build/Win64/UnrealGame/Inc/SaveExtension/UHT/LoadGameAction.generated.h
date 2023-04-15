// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LatentActions/LoadGameAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEEXTENSION_LoadGameAction_generated_h
#error "LoadGameAction.generated.h already included, missing '#pragma once' in LoadGameAction.h"
#endif
#define SAVEEXTENSION_LoadGameAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadGameAction_h


#define FOREACH_ENUM_ELOADGAMERESULT(op) \
	op(ELoadGameResult::Loading) \
	op(ELoadGameResult::Continue) \
	op(ELoadGameResult::Failed) 

enum class ELoadGameResult : uint8;
template<> struct TIsUEnumClass<ELoadGameResult> { enum { Value = true }; };
template<> SAVEEXTENSION_API UEnum* StaticEnum<ELoadGameResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
