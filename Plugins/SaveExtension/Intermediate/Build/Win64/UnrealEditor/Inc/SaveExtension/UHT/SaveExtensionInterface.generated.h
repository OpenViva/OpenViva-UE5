// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveExtensionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSELevelFilter;
#ifdef SAVEEXTENSION_SaveExtensionInterface_generated_h
#error "SaveExtensionInterface.generated.h already included, missing '#pragma once' in SaveExtensionInterface.h"
#endif
#define SAVEEXTENSION_SaveExtensionInterface_generated_h

#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_SPARSE_DATA
#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_RPC_WRAPPERS
#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_ACCESSORS
#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_CALLBACK_WRAPPERS
#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveExtensionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveExtensionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveExtensionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveExtensionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveExtensionInterface(USaveExtensionInterface&&); \
	NO_API USaveExtensionInterface(const USaveExtensionInterface&); \
public: \
	NO_API virtual ~USaveExtensionInterface();


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveExtensionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveExtensionInterface(USaveExtensionInterface&&); \
	NO_API USaveExtensionInterface(const USaveExtensionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveExtensionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveExtensionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveExtensionInterface) \
	NO_API virtual ~USaveExtensionInterface();


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSaveExtensionInterface(); \
	friend struct Z_Construct_UClass_USaveExtensionInterface_Statics; \
public: \
	DECLARE_CLASS(USaveExtensionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SaveExtension"), NO_API) \
	DECLARE_SERIALIZER(USaveExtensionInterface)


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISaveExtensionInterface() {} \
public: \
	typedef USaveExtensionInterface UClassType; \
	typedef ISaveExtensionInterface ThisClass; \
	static void Execute_ReceiveOnLoadBegan(UObject* O, FSELevelFilter const& Filter); \
	static void Execute_ReceiveOnLoadFinished(UObject* O, FSELevelFilter const& Filter, bool bError); \
	static void Execute_ReceiveOnSaveBegan(UObject* O, FSELevelFilter const& Filter); \
	static void Execute_ReceiveOnSaveFinished(UObject* O, FSELevelFilter const& Filter, bool bError); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ISaveExtensionInterface() {} \
public: \
	typedef USaveExtensionInterface UClassType; \
	typedef ISaveExtensionInterface ThisClass; \
	static void Execute_ReceiveOnLoadBegan(UObject* O, FSELevelFilter const& Filter); \
	static void Execute_ReceiveOnLoadFinished(UObject* O, FSELevelFilter const& Filter, bool bError); \
	static void Execute_ReceiveOnSaveBegan(UObject* O, FSELevelFilter const& Filter); \
	static void Execute_ReceiveOnSaveFinished(UObject* O, FSELevelFilter const& Filter, bool bError); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_11_PROLOG
#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_SPARSE_DATA \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_RPC_WRAPPERS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_ACCESSORS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_SPARSE_DATA \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_ACCESSORS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEEXTENSION_API UClass* StaticClass<class USaveExtensionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_VivaUnreal_Plugins_SaveExtension_Source_SaveExtension_Public_SaveExtensionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
