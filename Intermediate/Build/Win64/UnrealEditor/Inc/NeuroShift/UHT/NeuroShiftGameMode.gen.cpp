// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuroShiftGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNeuroShiftGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NEUROSHIFT_API UClass* Z_Construct_UClass_ANeuroShiftGameMode();
NEUROSHIFT_API UClass* Z_Construct_UClass_ANeuroShiftGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeuroShift();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ANeuroShiftGameMode ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ANeuroShiftGameMode;
UClass* ANeuroShiftGameMode::GetPrivateStaticClass()
{
	using TClass = ANeuroShiftGameMode;
	if (!Z_Registration_Info_UClass_ANeuroShiftGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NeuroShiftGameMode"),
			Z_Registration_Info_UClass_ANeuroShiftGameMode.InnerSingleton,
			StaticRegisterNativesANeuroShiftGameMode,
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
	return Z_Registration_Info_UClass_ANeuroShiftGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ANeuroShiftGameMode_NoRegister()
{
	return ANeuroShiftGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ANeuroShiftGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NeuroShiftGameMode.h" },
		{ "ModuleRelativePath", "NeuroShiftGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ANeuroShiftGameMode constinit property declarations **********************
// ********** End Class ANeuroShiftGameMode constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANeuroShiftGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ANeuroShiftGameMode_Statics
UObject* (*const Z_Construct_UClass_ANeuroShiftGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NeuroShift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANeuroShiftGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANeuroShiftGameMode_Statics::ClassParams = {
	&ANeuroShiftGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANeuroShiftGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANeuroShiftGameMode_Statics::Class_MetaDataParams)
};
void ANeuroShiftGameMode::StaticRegisterNativesANeuroShiftGameMode()
{
}
UClass* Z_Construct_UClass_ANeuroShiftGameMode()
{
	if (!Z_Registration_Info_UClass_ANeuroShiftGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANeuroShiftGameMode.OuterSingleton, Z_Construct_UClass_ANeuroShiftGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANeuroShiftGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ANeuroShiftGameMode);
ANeuroShiftGameMode::~ANeuroShiftGameMode() {}
// ********** End Class ANeuroShiftGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h__Script_NeuroShift_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANeuroShiftGameMode, ANeuroShiftGameMode::StaticClass, TEXT("ANeuroShiftGameMode"), &Z_Registration_Info_UClass_ANeuroShiftGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANeuroShiftGameMode), 1282288081U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h__Script_NeuroShift_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h__Script_NeuroShift_1033458017{
	TEXT("/Script/NeuroShift"),
	Z_CompiledInDeferFile_FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h__Script_NeuroShift_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h__Script_NeuroShift_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
