// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuroShiftPlayerController.h"

#ifdef NEUROSHIFT_NeuroShiftPlayerController_generated_h
#error "NeuroShiftPlayerController.generated.h already included, missing '#pragma once' in NeuroShiftPlayerController.h"
#endif
#define NEUROSHIFT_NeuroShiftPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANeuroShiftPlayerController **********************************************
struct Z_Construct_UClass_ANeuroShiftPlayerController_Statics;
NEUROSHIFT_API UClass* Z_Construct_UClass_ANeuroShiftPlayerController_NoRegister();

#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANeuroShiftPlayerController(); \
	friend struct ::Z_Construct_UClass_ANeuroShiftPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEUROSHIFT_API UClass* ::Z_Construct_UClass_ANeuroShiftPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ANeuroShiftPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeuroShift"), Z_Construct_UClass_ANeuroShiftPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ANeuroShiftPlayerController)


#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANeuroShiftPlayerController(ANeuroShiftPlayerController&&) = delete; \
	ANeuroShiftPlayerController(const ANeuroShiftPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANeuroShiftPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANeuroShiftPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ANeuroShiftPlayerController) \
	NO_API virtual ~ANeuroShiftPlayerController();


#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftPlayerController_h_17_PROLOG
#define FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANeuroShiftPlayerController;

// ********** End Class ANeuroShiftPlayerController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_NeuroShift_Source_NeuroShift_NeuroShiftPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
