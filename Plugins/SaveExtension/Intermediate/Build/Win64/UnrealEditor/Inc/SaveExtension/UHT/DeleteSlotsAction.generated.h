// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LatentActions/DeleteSlotsAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEEXTENSION_DeleteSlotsAction_generated_h
#error "DeleteSlotsAction.generated.h already included, missing '#pragma once' in DeleteSlotsAction.h"
#endif
#define SAVEEXTENSION_DeleteSlotsAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OpenViva_UE5_Plugins_SaveExtension_Source_SaveExtension_Public_LatentActions_DeleteSlotsAction_h


#define FOREACH_ENUM_EDELETESLOTSRESULT(op) \
	op(EDeleteSlotsResult::Completed) 

enum class EDeleteSlotsResult : uint8;
template<> struct TIsUEnumClass<EDeleteSlotsResult> { enum { Value = true }; };
template<> SAVEEXTENSION_API UEnum* StaticEnum<EDeleteSlotsResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
