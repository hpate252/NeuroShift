// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuroShiftCharacter.h"

#ifdef NEUROSHIFT_NeuroShiftCharacter_generated_h
#error "NeuroShiftCharacter.generated.h already included, missing '#pragma once' in NeuroShiftCharacter.h"
#endif
#define NEUROSHIFT_NeuroShiftCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANeuroShiftCharacter *****************************************************
#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


struct Z_Construct_UClass_ANeuroShiftCharacter_Statics;
NEUROSHIFT_API UClass* Z_Construct_UClass_ANeuroShiftCharacter_NoRegister();

#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANeuroShiftCharacter(); \
	friend struct ::Z_Construct_UClass_ANeuroShiftCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEUROSHIFT_API UClass* ::Z_Construct_UClass_ANeuroShiftCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ANeuroShiftCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeuroShift"), Z_Construct_UClass_ANeuroShiftCharacter_NoRegister) \
	DECLARE_SERIALIZER(ANeuroShiftCharacter)


#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANeuroShiftCharacter(ANeuroShiftCharacter&&) = delete; \
	ANeuroShiftCharacter(const ANeuroShiftCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANeuroShiftCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANeuroShiftCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ANeuroShiftCharacter) \
	NO_API virtual ~ANeuroShiftCharacter();


#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCharacter_h_21_PROLOG
#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANeuroShiftCharacter;

// ********** End Class ANeuroShiftCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
