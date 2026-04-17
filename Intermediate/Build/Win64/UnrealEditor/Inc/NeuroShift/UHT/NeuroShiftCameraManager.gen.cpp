// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuroShiftCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNeuroShiftCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
NEUROSHIFT_API UClass* Z_Construct_UClass_ANeuroShiftCameraManager();
NEUROSHIFT_API UClass* Z_Construct_UClass_ANeuroShiftCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeuroShift();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ANeuroShiftCameraManager *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ANeuroShiftCameraManager;
UClass* ANeuroShiftCameraManager::GetPrivateStaticClass()
{
	using TClass = ANeuroShiftCameraManager;
	if (!Z_Registration_Info_UClass_ANeuroShiftCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NeuroShiftCameraManager"),
			Z_Registration_Info_UClass_ANeuroShiftCameraManager.InnerSingleton,
			StaticRegisterNativesANeuroShiftCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ANeuroShiftCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ANeuroShiftCameraManager_NoRegister()
{
	return ANeuroShiftCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ANeuroShiftCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "NeuroShiftCameraManager.h" },
		{ "ModuleRelativePath", "NeuroShiftCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ANeuroShiftCameraManager constinit property declarations *****************
// ********** End Class ANeuroShiftCameraManager constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANeuroShiftCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ANeuroShiftCameraManager_Statics
UObject* (*const Z_Construct_UClass_ANeuroShiftCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_NeuroShift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANeuroShiftCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANeuroShiftCameraManager_Statics::ClassParams = {
	&ANeuroShiftCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANeuroShiftCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ANeuroShiftCameraManager_Statics::Class_MetaDataParams)
};
void ANeuroShiftCameraManager::StaticRegisterNativesANeuroShiftCameraManager()
{
}
UClass* Z_Construct_UClass_ANeuroShiftCameraManager()
{
	if (!Z_Registration_Info_UClass_ANeuroShiftCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANeuroShiftCameraManager.OuterSingleton, Z_Construct_UClass_ANeuroShiftCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANeuroShiftCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ANeuroShiftCameraManager);
ANeuroShiftCameraManager::~ANeuroShiftCameraManager() {}
// ********** End Class ANeuroShiftCameraManager ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h__Script_NeuroShift_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANeuroShiftCameraManager, ANeuroShiftCameraManager::StaticClass, TEXT("ANeuroShiftCameraManager"), &Z_Registration_Info_UClass_ANeuroShiftCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANeuroShiftCameraManager), 826853065U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h__Script_NeuroShift_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h__Script_NeuroShift_500694109{
	TEXT("/Script/NeuroShift"),
	Z_CompiledInDeferFile_FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h__Script_NeuroShift_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h__Script_NeuroShift_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
