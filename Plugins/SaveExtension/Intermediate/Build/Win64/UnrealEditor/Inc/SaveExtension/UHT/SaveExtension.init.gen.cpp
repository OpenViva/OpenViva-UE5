// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveExtension_init() {}
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_LifetimeFinishSignature__DelegateSignature();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_LifetimeResumeSignature__DelegateSignature();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_LifetimeSavedSignature__DelegateSignature();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_LifetimeStartSignature__DelegateSignature();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature();
	SAVEEXTENSION_API UFunction* Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SaveExtension;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SaveExtension()
	{
		if (!Z_Registration_Info_UPackage__Script_SaveExtension.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_LifetimeFinishSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_LifetimeResumeSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_LifetimeSavedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_LifetimeStartSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_OnGameLoadedMC__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SaveExtension_OnGameSavedMC__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SaveExtension",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x69D27089,
				0xAB660DC7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SaveExtension.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SaveExtension.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SaveExtension(Z_Construct_UPackage__Script_SaveExtension, TEXT("/Script/SaveExtension"), Z_Registration_Info_UPackage__Script_SaveExtension, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x69D27089, 0xAB660DC7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
