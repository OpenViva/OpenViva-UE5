// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SaveExtensionInterface.h"
#include "SaveExtension/Public/LevelFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveExtensionInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USaveExtensionInterface();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USaveExtensionInterface_NoRegister();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSELevelFilter();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	struct SaveExtensionInterface_eventReceiveOnLoadBegan_Parms
	{
		FSELevelFilter Filter;
	};
	struct SaveExtensionInterface_eventReceiveOnLoadFinished_Parms
	{
		FSELevelFilter Filter;
		bool bError;
	};
	struct SaveExtensionInterface_eventReceiveOnSaveBegan_Parms
	{
		FSELevelFilter Filter;
	};
	struct SaveExtensionInterface_eventReceiveOnSaveFinished_Parms
	{
		FSELevelFilter Filter;
		bool bError;
	};
	void ISaveExtensionInterface::ReceiveOnLoadBegan(FSELevelFilter const& Filter)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveOnLoadBegan instead.");
	}
	void ISaveExtensionInterface::ReceiveOnLoadFinished(FSELevelFilter const& Filter, bool bError)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveOnLoadFinished instead.");
	}
	void ISaveExtensionInterface::ReceiveOnSaveBegan(FSELevelFilter const& Filter)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveOnSaveBegan instead.");
	}
	void ISaveExtensionInterface::ReceiveOnSaveFinished(FSELevelFilter const& Filter, bool bError)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveOnSaveFinished instead.");
	}
	void USaveExtensionInterface::StaticRegisterNativesUSaveExtensionInterface()
	{
	}
	struct Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveExtensionInterface_eventReceiveOnLoadBegan_Parms, Filter), Z_Construct_UScriptStruct_FSELevelFilter, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::NewProp_Filter_MetaData)) }; // 973390857
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "// Event called when Load process starts\n" },
		{ "DisplayName", "On Load Began" },
		{ "ModuleRelativePath", "Public/SaveExtensionInterface.h" },
		{ "ToolTip", "Event called when Load process starts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveExtensionInterface, nullptr, "ReceiveOnLoadBegan", nullptr, nullptr, sizeof(SaveExtensionInterface_eventReceiveOnLoadBegan_Parms), Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static void NewProp_bError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveExtensionInterface_eventReceiveOnLoadFinished_Parms, Filter), Z_Construct_UScriptStruct_FSELevelFilter, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_Filter_MetaData)) }; // 973390857
	void Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_bError_SetBit(void* Obj)
	{
		((SaveExtensionInterface_eventReceiveOnLoadFinished_Parms*)Obj)->bError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_bError = { "bError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveExtensionInterface_eventReceiveOnLoadFinished_Parms), &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_bError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::NewProp_bError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "// Event called when Load process ends\n" },
		{ "DisplayName", "On Load Finished" },
		{ "ModuleRelativePath", "Public/SaveExtensionInterface.h" },
		{ "ToolTip", "Event called when Load process ends" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveExtensionInterface, nullptr, "ReceiveOnLoadFinished", nullptr, nullptr, sizeof(SaveExtensionInterface_eventReceiveOnLoadFinished_Parms), Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveExtensionInterface_eventReceiveOnSaveBegan_Parms, Filter), Z_Construct_UScriptStruct_FSELevelFilter, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::NewProp_Filter_MetaData)) }; // 973390857
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "/** BP API **/// Event called when Save process starts\n" },
		{ "DisplayName", "On Save Began" },
		{ "ModuleRelativePath", "Public/SaveExtensionInterface.h" },
		{ "ToolTip", "BP API *// Event called when Save process starts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveExtensionInterface, nullptr, "ReceiveOnSaveBegan", nullptr, nullptr, sizeof(SaveExtensionInterface_eventReceiveOnSaveBegan_Parms), Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
		static void NewProp_bError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveExtensionInterface_eventReceiveOnSaveFinished_Parms, Filter), Z_Construct_UScriptStruct_FSELevelFilter, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_Filter_MetaData)) }; // 973390857
	void Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_bError_SetBit(void* Obj)
	{
		((SaveExtensionInterface_eventReceiveOnSaveFinished_Parms*)Obj)->bError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_bError = { "bError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveExtensionInterface_eventReceiveOnSaveFinished_Parms), &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_bError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::NewProp_bError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "// Event called when Save process ends\n" },
		{ "DisplayName", "On Save Finished" },
		{ "ModuleRelativePath", "Public/SaveExtensionInterface.h" },
		{ "ToolTip", "Event called when Save process ends" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveExtensionInterface, nullptr, "ReceiveOnSaveFinished", nullptr, nullptr, sizeof(SaveExtensionInterface_eventReceiveOnSaveFinished_Parms), Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveExtensionInterface);
	UClass* Z_Construct_UClass_USaveExtensionInterface_NoRegister()
	{
		return USaveExtensionInterface::StaticClass();
	}
	struct Z_Construct_UClass_USaveExtensionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveExtensionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveExtensionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadBegan, "ReceiveOnLoadBegan" }, // 1630410824
		{ &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnLoadFinished, "ReceiveOnLoadFinished" }, // 1142294342
		{ &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveBegan, "ReceiveOnSaveBegan" }, // 3056906993
		{ &Z_Construct_UFunction_USaveExtensionInterface_ReceiveOnSaveFinished, "ReceiveOnSaveFinished" }, // 3173323847
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveExtensionInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "SaveExtension" },
		{ "ModuleRelativePath", "Public/SaveExtensionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveExtensionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISaveExtensionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveExtensionInterface_Statics::ClassParams = {
		&USaveExtensionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USaveExtensionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveExtensionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveExtensionInterface()
	{
		if (!Z_Registration_Info_UClass_USaveExtensionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveExtensionInterface.OuterSingleton, Z_Construct_UClass_USaveExtensionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveExtensionInterface.OuterSingleton;
	}
	template<> SAVEEXTENSION_API UClass* StaticClass<USaveExtensionInterface>()
	{
		return USaveExtensionInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveExtensionInterface);
	USaveExtensionInterface::~USaveExtensionInterface() {}
	static FName NAME_USaveExtensionInterface_ReceiveOnLoadBegan = FName(TEXT("ReceiveOnLoadBegan"));
	void ISaveExtensionInterface::Execute_ReceiveOnLoadBegan(UObject* O, FSELevelFilter const& Filter)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveExtensionInterface::StaticClass()));
		SaveExtensionInterface_eventReceiveOnLoadBegan_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USaveExtensionInterface_ReceiveOnLoadBegan);
		if (Func)
		{
			Parms.Filter=Filter;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USaveExtensionInterface_ReceiveOnLoadFinished = FName(TEXT("ReceiveOnLoadFinished"));
	void ISaveExtensionInterface::Execute_ReceiveOnLoadFinished(UObject* O, FSELevelFilter const& Filter, bool bError)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveExtensionInterface::StaticClass()));
		SaveExtensionInterface_eventReceiveOnLoadFinished_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USaveExtensionInterface_ReceiveOnLoadFinished);
		if (Func)
		{
			Parms.Filter=Filter;
			Parms.bError=bError;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USaveExtensionInterface_ReceiveOnSaveBegan = FName(TEXT("ReceiveOnSaveBegan"));
	void ISaveExtensionInterface::Execute_ReceiveOnSaveBegan(UObject* O, FSELevelFilter const& Filter)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveExtensionInterface::StaticClass()));
		SaveExtensionInterface_eventReceiveOnSaveBegan_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USaveExtensionInterface_ReceiveOnSaveBegan);
		if (Func)
		{
			Parms.Filter=Filter;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USaveExtensionInterface_ReceiveOnSaveFinished = FName(TEXT("ReceiveOnSaveFinished"));
	void ISaveExtensionInterface::Execute_ReceiveOnSaveFinished(UObject* O, FSELevelFilter const& Filter, bool bError)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveExtensionInterface::StaticClass()));
		SaveExtensionInterface_eventReceiveOnSaveFinished_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USaveExtensionInterface_ReceiveOnSaveFinished);
		if (Func)
		{
			Parms.Filter=Filter;
			Parms.bError=bError;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveExtensionInterface, USaveExtensionInterface::StaticClass, TEXT("USaveExtensionInterface"), &Z_Registration_Info_UClass_USaveExtensionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveExtensionInterface), 3893697605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_234077914(TEXT("/Script/SaveExtension"),
		Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
