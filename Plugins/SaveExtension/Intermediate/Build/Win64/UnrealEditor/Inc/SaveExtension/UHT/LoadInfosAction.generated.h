// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LatentActions/LoadInfosAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEEXTENSION_LoadInfosAction_generated_h
#error "LoadInfosAction.generated.h already included, missing '#pragma once' in LoadInfosAction.h"
#endif
#define SAVEEXTENSION_LoadInfosAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_LoadInfosAction_h


#define FOREACH_ENUM_ELOADINFORESULT(op) \
	op(ELoadInfoResult::Completed) 

enum class ELoadInfoResult : uint8;
template<> struct TIsUEnumClass<ELoadInfoResult> { enum { Value = true }; };
template<> SAVEEXTENSION_API UEnum* StaticEnum<ELoadInfoResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
