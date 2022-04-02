// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEECLIPSE_TheEclipseCharacter_generated_h
#error "TheEclipseCharacter.generated.h already included, missing '#pragma once' in TheEclipseCharacter.h"
#endif
#define THEECLIPSE_TheEclipseCharacter_generated_h

#define TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_SPARSE_DATA
#define TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_RPC_WRAPPERS
#define TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheEclipseCharacter(); \
	friend struct Z_Construct_UClass_ATheEclipseCharacter_Statics; \
public: \
	DECLARE_CLASS(ATheEclipseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheEclipse"), NO_API) \
	DECLARE_SERIALIZER(ATheEclipseCharacter)


#define TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesATheEclipseCharacter(); \
	friend struct Z_Construct_UClass_ATheEclipseCharacter_Statics; \
public: \
	DECLARE_CLASS(ATheEclipseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheEclipse"), NO_API) \
	DECLARE_SERIALIZER(ATheEclipseCharacter)


#define TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATheEclipseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATheEclipseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheEclipseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheEclipseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheEclipseCharacter(ATheEclipseCharacter&&); \
	NO_API ATheEclipseCharacter(const ATheEclipseCharacter&); \
public:


#define TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheEclipseCharacter(ATheEclipseCharacter&&); \
	NO_API ATheEclipseCharacter(const ATheEclipseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheEclipseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheEclipseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATheEclipseCharacter)


#define TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ATheEclipseCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ATheEclipseCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ATheEclipseCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ATheEclipseCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ATheEclipseCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ATheEclipseCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ATheEclipseCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ATheEclipseCharacter, L_MotionController); }


#define TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_17_PROLOG
#define TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_SPARSE_DATA \
	TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_RPC_WRAPPERS \
	TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_INCLASS \
	TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_SPARSE_DATA \
	TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_INCLASS_NO_PURE_DECLS \
	TheEclipse_Source_TheEclipse_TheEclipseCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEECLIPSE_API UClass* StaticClass<class ATheEclipseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheEclipse_Source_TheEclipse_TheEclipseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
