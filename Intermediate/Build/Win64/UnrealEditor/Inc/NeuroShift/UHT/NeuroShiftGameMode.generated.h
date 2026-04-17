// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuroShiftGameMode.h"

#ifdef NEUROSHIFT_NeuroShiftGameMode_generated_h
#error "NeuroShiftGameMode.generated.h already included, missing '#pragma once' in NeuroShiftGameMode.h"
#endif
#define NEUROSHIFT_NeuroShiftGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANeuroShiftGameMode ******************************************************
struct Z_Construct_UClass_ANeuroShiftGameMode_Statics;
NEUROSHIFT_API UClass* Z_Construct_UClass_ANeuroShiftGameMode_NoRegister();

#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANeuroShiftGameMode(); \
	friend struct ::Z_Construct_UClass_ANeuroShiftGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEUROSHIFT_API UClass* ::Z_Construct_UClass_ANeuroShiftGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ANeuroShiftGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeuroShift"), Z_Construct_UClass_ANeuroShiftGameMode_NoRegister) \
	DECLARE_SERIALIZER(ANeuroShiftGameMode)


#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANeuroShiftGameMode(ANeuroShiftGameMode&&) = delete; \
	ANeuroShiftGameMode(const ANeuroShiftGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANeuroShiftGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANeuroShiftGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ANeuroShiftGameMode) \
	NO_API virtual ~ANeuroShiftGameMode();


#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h_12_PROLOG
#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANeuroShiftGameMode;

// ********** End Class ANeuroShiftGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
