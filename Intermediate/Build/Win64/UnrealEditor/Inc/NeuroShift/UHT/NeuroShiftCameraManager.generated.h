// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuroShiftCameraManager.h"

#ifdef NEUROSHIFT_NeuroShiftCameraManager_generated_h
#error "NeuroShiftCameraManager.generated.h already included, missing '#pragma once' in NeuroShiftCameraManager.h"
#endif
#define NEUROSHIFT_NeuroShiftCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANeuroShiftCameraManager *************************************************
struct Z_Construct_UClass_ANeuroShiftCameraManager_Statics;
NEUROSHIFT_API UClass* Z_Construct_UClass_ANeuroShiftCameraManager_NoRegister();

#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANeuroShiftCameraManager(); \
	friend struct ::Z_Construct_UClass_ANeuroShiftCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEUROSHIFT_API UClass* ::Z_Construct_UClass_ANeuroShiftCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ANeuroShiftCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeuroShift"), Z_Construct_UClass_ANeuroShiftCameraManager_NoRegister) \
	DECLARE_SERIALIZER(ANeuroShiftCameraManager)


#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANeuroShiftCameraManager(ANeuroShiftCameraManager&&) = delete; \
	ANeuroShiftCameraManager(const ANeuroShiftCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANeuroShiftCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANeuroShiftCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANeuroShiftCameraManager) \
	NO_API virtual ~ANeuroShiftCameraManager();


#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h_13_PROLOG
#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANeuroShiftCameraManager;

// ********** End Class ANeuroShiftCameraManager ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
