// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SavePreset.h"
#include "SaveExtension/Public/Misc/ClassFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavePreset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USavePreset();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USavePreset_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotData_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotInfo_NoRegister();
	SAVEEXTENSION_API UEnum* Z_Construct_UEnum_SaveExtension_ESaveASyncMode();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSEActorClassFilter();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSEComponentClassFilter();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveASyncMode;
	static UEnum* ESaveASyncMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESaveASyncMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESaveASyncMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SaveExtension_ESaveASyncMode, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ESaveASyncMode"));
		}
		return Z_Registration_Info_UEnum_ESaveASyncMode.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UEnum* StaticEnum<ESaveASyncMode>()
	{
		return ESaveASyncMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SaveExtension_ESaveASyncMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SaveExtension_ESaveASyncMode_Statics::Enumerators[] = {
		{ "ESaveASyncMode::OnlySync", (int64)ESaveASyncMode::OnlySync },
		{ "ESaveASyncMode::LoadAsync", (int64)ESaveASyncMode::LoadAsync },
		{ "ESaveASyncMode::SaveAsync", (int64)ESaveASyncMode::SaveAsync },
		{ "ESaveASyncMode::SaveAndLoadAsync", (int64)ESaveASyncMode::SaveAndLoadAsync },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SaveExtension_ESaveASyncMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Specifies the behavior while saving or loading\n*/" },
		{ "LoadAsync.Name", "ESaveASyncMode::LoadAsync" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "OnlySync.Name", "ESaveASyncMode::OnlySync" },
		{ "SaveAndLoadAsync.Name", "ESaveASyncMode::SaveAndLoadAsync" },
		{ "SaveAsync.Name", "ESaveASyncMode::SaveAsync" },
		{ "ToolTip", "Specifies the behavior while saving or loading" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SaveExtension_ESaveASyncMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		"ESaveASyncMode",
		"ESaveASyncMode",
		Z_Construct_UEnum_SaveExtension_ESaveASyncMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SaveExtension_ESaveASyncMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SaveExtension_ESaveASyncMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SaveExtension_ESaveASyncMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SaveExtension_ESaveASyncMode()
	{
		if (!Z_Registration_Info_UEnum_ESaveASyncMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveASyncMode.InnerSingleton, Z_Construct_UEnum_SaveExtension_ESaveASyncMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESaveASyncMode.InnerSingleton;
	}
	DEFINE_FUNCTION(USavePreset::execGetComponentFilter)
	{
		P_GET_UBOOL(Z_Param_bIsLoading);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSEComponentClassFilter*)Z_Param__Result=P_THIS->GetComponentFilter(Z_Param_bIsLoading);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USavePreset::execGetActorFilter)
	{
		P_GET_UBOOL(Z_Param_bIsLoading);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSEActorClassFilter*)Z_Param__Result=P_THIS->GetActorFilter(Z_Param_bIsLoading);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USavePreset::execBPGetSlotNameFromId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Id);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BPGetSlotNameFromId_Implementation(Z_Param_Id,Z_Param_Out_Name);
		P_NATIVE_END;
	}
	struct SavePreset_eventBPGetSlotNameFromId_Parms
	{
		int32 Id;
		FName Name;
	};
	static FName NAME_USavePreset_BPGetSlotNameFromId = FName(TEXT("BPGetSlotNameFromId"));
	void USavePreset::BPGetSlotNameFromId(int32 Id, FName& Name) const
	{
		SavePreset_eventBPGetSlotNameFromId_Parms Parms;
		Parms.Id=Id;
		Parms.Name=Name;
		const_cast<USavePreset*>(this)->ProcessEvent(FindFunctionChecked(NAME_USavePreset_BPGetSlotNameFromId),&Parms);
		Name=Parms.Name;
	}
	void USavePreset::StaticRegisterNativesUSavePreset()
	{
		UClass* Class = USavePreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BPGetSlotNameFromId", &USavePreset::execBPGetSlotNameFromId },
			{ "GetActorFilter", &USavePreset::execGetActorFilter },
			{ "GetComponentFilter", &USavePreset::execGetComponentFilter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SavePreset_eventBPGetSlotNameFromId_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SavePreset_eventBPGetSlotNameFromId_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slots" },
		{ "DisplayName", "Get Slot Name from Id" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USavePreset, nullptr, "BPGetSlotNameFromId", nullptr, nullptr, sizeof(SavePreset_eventBPGetSlotNameFromId_Parms), Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USavePreset_GetActorFilter_Statics
	{
		struct SavePreset_eventGetActorFilter_Parms
		{
			bool bIsLoading;
			FSEActorClassFilter ReturnValue;
		};
		static void NewProp_bIsLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoading;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::NewProp_bIsLoading_SetBit(void* Obj)
	{
		((SavePreset_eventGetActorFilter_Parms*)Obj)->bIsLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::NewProp_bIsLoading = { "bIsLoading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SavePreset_eventGetActorFilter_Parms), &Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::NewProp_bIsLoading_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SavePreset_eventGetActorFilter_Parms, ReturnValue), Z_Construct_UScriptStruct_FSEActorClassFilter, METADATA_PARAMS(nullptr, 0) }; // 852519658
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::NewProp_bIsLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SavePreset" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USavePreset, nullptr, "GetActorFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::SavePreset_eventGetActorFilter_Parms), Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USavePreset_GetActorFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USavePreset_GetActorFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics
	{
		struct SavePreset_eventGetComponentFilter_Parms
		{
			bool bIsLoading;
			FSEComponentClassFilter ReturnValue;
		};
		static void NewProp_bIsLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoading;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::NewProp_bIsLoading_SetBit(void* Obj)
	{
		((SavePreset_eventGetComponentFilter_Parms*)Obj)->bIsLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::NewProp_bIsLoading = { "bIsLoading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SavePreset_eventGetComponentFilter_Parms), &Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::NewProp_bIsLoading_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SavePreset_eventGetComponentFilter_Parms, ReturnValue), Z_Construct_UScriptStruct_FSEComponentClassFilter, METADATA_PARAMS(nullptr, 0) }; // 501877309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::NewProp_bIsLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SavePreset" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USavePreset, nullptr, "GetComponentFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::SavePreset_eventGetComponentFilter_Parms), Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USavePreset_GetComponentFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USavePreset_GetComponentFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USavePreset);
	UClass* Z_Construct_UClass_USavePreset_NoRegister()
	{
		return USavePreset::StaticClass();
	}
	struct Z_Construct_UClass_USavePreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfoClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SlotInfoClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotDataClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SlotDataClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSlots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSave_MetaData[];
#endif
		static void NewProp_bAutoSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveInterval_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AutoSaveInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveOnExit_MetaData[];
#endif
		static void NewProp_bSaveOnExit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveOnExit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoad_MetaData[];
#endif
		static void NewProp_bAutoLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugInScreen_MetaData[];
#endif
		static void NewProp_bDebugInScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugInScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCompression_MetaData[];
#endif
		static void NewProp_bUseCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStoreGameInstance_MetaData[];
#endif
		static void NewProp_bStoreGameInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStoreGameInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLoadActorFilter_MetaData[];
#endif
		static void NewProp_bUseLoadActorFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLoadActorFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadActorFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadActorFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStoreComponents_MetaData[];
#endif
		static void NewProp_bStoreComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStoreComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLoadComponentFilter_MetaData[];
#endif
		static void NewProp_bUseLoadComponentFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLoadComponentFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadComponentFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadComponentFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultithreadedSerialization_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultithreadedSerialization_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MultithreadedSerialization;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrameSplittedSerialization_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameSplittedSerialization_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FrameSplittedSerialization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFrameMs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFrameMs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MultithreadedFiles_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultithreadedFiles_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MultithreadedFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveAndLoadSublevels_MetaData[];
#endif
		static void NewProp_bSaveAndLoadSublevels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveAndLoadSublevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USavePreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USavePreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USavePreset_BPGetSlotNameFromId, "BPGetSlotNameFromId" }, // 2100754566
		{ &Z_Construct_UFunction_USavePreset_GetActorFilter, "GetActorFilter" }, // 960638424
		{ &Z_Construct_UFunction_USavePreset_GetComponentFilter, "GetComponentFilter" }, // 839830597
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "SaveExtension" },
		{ "Comment", "/**\n * What to save, how to save it, when, every x minutes, what info file, what data file, save by level streaming?\n */" },
		{ "IncludePath", "SavePreset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "What to save, how to save it, when, every x minutes, what info file, what data file, save by level streaming?" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_SlotInfoClass_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/**\n\x09* Specify the SaveInfo object to be used with this preset\n\x09*/" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Specify the SaveInfo object to be used with this preset" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_SlotInfoClass = { "SlotInfoClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, SlotInfoClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_SlotInfoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_SlotInfoClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_SlotDataClass_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/**\n\x09* Specify the SaveData object to be used with this preset\n\x09*/" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Specify the SaveData object to be used with this preset" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_SlotDataClass = { "SlotDataClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, SlotDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USlotData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_SlotDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_SlotDataClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_MaxSlots_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum amount of saved slots at the same time */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Maximum amount of saved slots at the same time" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MaxSlots = { "MaxSlots", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, MaxSlots), METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_MaxSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_MaxSlots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** If checked, will attempt to Save Game to first Slot found, timed event. */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If checked, will attempt to Save Game to first Slot found, timed event." },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bAutoSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave = { "bAutoSave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_AutoSaveInterval_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Interval in seconds for auto saving */" },
		{ "EditCondition", "bAutoSave" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Interval in seconds for auto saving" },
		{ "UIMax", "3600" },
		{ "UIMin", "15" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_AutoSaveInterval = { "AutoSaveInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, AutoSaveInterval), METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_AutoSaveInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_AutoSaveInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** If checked, will attempt to Save Game to first Slot found, timed event. */" },
		{ "EditCondition", "bAutoSave" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If checked, will attempt to Save Game to first Slot found, timed event." },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bSaveOnExit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit = { "bSaveOnExit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** If checked, will attempt to Load Game from last Slot found, when game starts */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If checked, will attempt to Load Game from last Slot found, when game starts" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bAutoLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad = { "bAutoLoad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/**\n\x09 * If checked, will print messages to Log, and Viewport if DebugInScreen is enabled.\n\x09 * Ignored in package or Shipping mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If checked, will print messages to Log, and Viewport if DebugInScreen is enabled.\nIgnored in package or Shipping mode." },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/**\n\x09 * If checked and Debug is enabled, will print messages to Viewport.\n\x09 * Ignored in package or Shipping mode.\n\x09 */" },
		{ "EditCondition", "bDebug" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If checked and Debug is enabled, will print messages to Viewport.\nIgnored in package or Shipping mode." },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bDebugInScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen = { "bDebugInScreen", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** If true save files will be compressed\n\x09 * Performance: Can add from 10ms to 20ms to loading and saving (estimate) but reduce file sizes making them up to 30x smaller\n\x09 */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true save files will be compressed\nPerformance: Can add from 10ms to 20ms to loading and saving (estimate) but reduce file sizes making them up to 30x smaller" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bUseCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression = { "bUseCompression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance_MetaData[] = {
		{ "Category", "Serialization" },
		{ "Comment", "/** If true will store the game instance */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true will store the game instance" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bStoreGameInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance = { "bStoreGameInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_ActorFilter_MetaData[] = {
		{ "Category", "Serialization|Actors" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_ActorFilter = { "ActorFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, ActorFilter), Z_Construct_UScriptStruct_FSEActorClassFilter, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_ActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_ActorFilter_MetaData)) }; // 852519658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadActorFilter_MetaData[] = {
		{ "Category", "Serialization|Actors" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadActorFilter_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bUseLoadActorFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadActorFilter = { "bUseLoadActorFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadActorFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadActorFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_LoadActorFilter_MetaData[] = {
		{ "Category", "Serialization|Actors" },
		{ "Comment", "/** If enabled, this filter will be used while loading instead of \"ActorFilter\" */" },
		{ "EditCondition", "bUseLoadActorFilter" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If enabled, this filter will be used while loading instead of \"ActorFilter\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_LoadActorFilter = { "LoadActorFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, LoadActorFilter), Z_Construct_UScriptStruct_FSEActorClassFilter, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_LoadActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_LoadActorFilter_MetaData)) }; // 852519658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents_MetaData[] = {
		{ "Category", "Serialization|Components" },
		{ "Comment", "/** If true will store ActorComponents depending on the filters */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true will store ActorComponents depending on the filters" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bStoreComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents = { "bStoreComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_ComponentFilter_MetaData[] = {
		{ "Category", "Serialization|Components" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_ComponentFilter = { "ComponentFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, ComponentFilter), Z_Construct_UScriptStruct_FSEComponentClassFilter, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_ComponentFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_ComponentFilter_MetaData)) }; // 501877309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadComponentFilter_MetaData[] = {
		{ "Category", "Serialization|Components" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadComponentFilter_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bUseLoadComponentFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadComponentFilter = { "bUseLoadComponentFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadComponentFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadComponentFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadComponentFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_LoadComponentFilter_MetaData[] = {
		{ "Category", "Serialization|Components" },
		{ "Comment", "/** If enabled, this filter will be used while loading instead of \"ComponentFilter\" */" },
		{ "EditCondition", "bUseLoadComponentFilter" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If enabled, this filter will be used while loading instead of \"ComponentFilter\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_LoadComponentFilter = { "LoadComponentFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, LoadComponentFilter), Z_Construct_UScriptStruct_FSEComponentClassFilter, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_LoadComponentFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_LoadComponentFilter_MetaData)) }; // 501877309
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization_MetaData[] = {
		{ "Category", "Asynchronous" },
		{ "Comment", "/** Serialization will be multi-threaded between all available cores. */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Serialization will be multi-threaded between all available cores." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization = { "MultithreadedSerialization", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, MultithreadedSerialization), Z_Construct_UEnum_SaveExtension_ESaveASyncMode, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization_MetaData)) }; // 3453088328
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization_MetaData[] = {
		{ "Category", "Asynchronous" },
		{ "Comment", "/** Split serialization between multiple frames. Ignored if MultithreadedSerialization is used\n\x09 * Currently only implemented on Loading\n\x09 */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Split serialization between multiple frames. Ignored if MultithreadedSerialization is used\nCurrently only implemented on Loading" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization = { "FrameSplittedSerialization", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, FrameSplittedSerialization), Z_Construct_UEnum_SaveExtension_ESaveASyncMode, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization_MetaData)) }; // 3453088328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_MaxFrameMs_MetaData[] = {
		{ "Category", "Asynchronous" },
		{ "Comment", "/** Max milliseconds to use every frame in an asynchronous operation.\n\x09 * If running at 60Fps (16.6ms), loading or saving asynchronously will add MaxFrameMS:\n\x09 * 16.6ms + 5MS = 21.6ms -> 46Fps\n\x09 * This means gameplay will not be stopped nor have frame drops while saving or loading. Works best for non multi-threaded platforms\n\x09 */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Max milliseconds to use every frame in an asynchronous operation.\nIf running at 60Fps (16.6ms), loading or saving asynchronously will add MaxFrameMS:\n16.6ms + 5MS = 21.6ms -> 46Fps\nThis means gameplay will not be stopped nor have frame drops while saving or loading. Works best for non multi-threaded platforms" },
		{ "UIMax", "10" },
		{ "UIMin", "3" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MaxFrameMs = { "MaxFrameMs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, MaxFrameMs), METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_MaxFrameMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_MaxFrameMs_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles_MetaData[] = {
		{ "Category", "Asynchronous" },
		{ "Comment", "/** Files will be loaded or saved on a secondary thread while game continues */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "Files will be loaded or saved on a secondary thread while game continues" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles = { "MultithreadedFiles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USavePreset, MultithreadedFiles), Z_Construct_UEnum_SaveExtension_ESaveASyncMode, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles_MetaData)) }; // 3453088328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels_MetaData[] = {
		{ "Category", "Level Streaming" },
		{ "Comment", "/** If true, will Save and Load levels when they are shown or hidden.\n\x09 * This includes level streaming and world composition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SavePreset.h" },
		{ "ToolTip", "If true, will Save and Load levels when they are shown or hidden.\nThis includes level streaming and world composition." },
	};
#endif
	void Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels_SetBit(void* Obj)
	{
		((USavePreset*)Obj)->bSaveAndLoadSublevels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels = { "bSaveAndLoadSublevels", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USavePreset), &Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USavePreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_SlotInfoClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_SlotDataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MaxSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_AutoSaveInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveOnExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bAutoLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bDebugInScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bUseCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreGameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_ActorFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadActorFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_LoadActorFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bStoreComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_ComponentFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bUseLoadComponentFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_LoadComponentFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedSerialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_FrameSplittedSerialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MaxFrameMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_MultithreadedFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePreset_Statics::NewProp_bSaveAndLoadSublevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USavePreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USavePreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USavePreset_Statics::ClassParams = {
		&USavePreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USavePreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USavePreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USavePreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USavePreset()
	{
		if (!Z_Registration_Info_UClass_USavePreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USavePreset.OuterSingleton, Z_Construct_UClass_USavePreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USavePreset.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UClass* StaticClass<USavePreset>()
	{
		return USavePreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USavePreset);
	USavePreset::~USavePreset() {}
	struct Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_Statics::EnumInfo[] = {
		{ ESaveASyncMode_StaticEnum, TEXT("ESaveASyncMode"), &Z_Registration_Info_UEnum_ESaveASyncMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3453088328U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USavePreset, USavePreset::StaticClass, TEXT("USavePreset"), &Z_Registration_Info_UClass_USavePreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USavePreset), 4097087536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_1647563653(TEXT("/Script/SaveExtension"),
		Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SavePreset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
