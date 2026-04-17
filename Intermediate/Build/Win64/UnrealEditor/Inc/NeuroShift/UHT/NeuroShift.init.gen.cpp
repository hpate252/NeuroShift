// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuroShift_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	NEUROSHIFT_API UFunction* Z_Construct_UDelegateFunction_NeuroShift_BulletCountUpdatedDelegate__DelegateSignature();
	NEUROSHIFT_API UFunction* Z_Construct_UDelegateFunction_NeuroShift_DamagedDelegate__DelegateSignature();
	NEUROSHIFT_API UFunction* Z_Construct_UDelegateFunction_NeuroShift_PawnDeathDelegate__DelegateSignature();
	NEUROSHIFT_API UFunction* Z_Construct_UDelegateFunction_NeuroShift_SprintStateChangedDelegate__DelegateSignature();
	NEUROSHIFT_API UFunction* Z_Construct_UDelegateFunction_NeuroShift_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NeuroShift;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NeuroShift()
	{
		if (!Z_Registration_Info_UPackage__Script_NeuroShift.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_NeuroShift_BulletCountUpdatedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_NeuroShift_DamagedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_NeuroShift_PawnDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_NeuroShift_SprintStateChangedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_NeuroShift_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/NeuroShift",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x7A90A6F6,
			0xE0823B06,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NeuroShift.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_NeuroShift.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NeuroShift(Z_Construct_UPackage__Script_NeuroShift, TEXT("/Script/NeuroShift"), Z_Registration_Info_UPackage__Script_NeuroShift, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7A90A6F6, 0xE0823B06));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
