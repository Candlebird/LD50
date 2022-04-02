// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef THEECLIPSE_TheEclipseProjectile_generated_h
#error "TheEclipseProjectile.generated.h already included, missing '#pragma once' in TheEclipseProjectile.h"
#endif
#define THEECLIPSE_TheEclipseProjectile_generated_h

#define TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_SPARSE_DATA
#define TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheEclipseProjectile(); \
	friend struct Z_Construct_UClass_ATheEclipseProjectile_Statics; \
public: \
	DECLARE_CLASS(ATheEclipseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheEclipse"), NO_API) \
	DECLARE_SERIALIZER(ATheEclipseProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATheEclipseProjectile(); \
	friend struct Z_Construct_UClass_ATheEclipseProjectile_Statics; \
public: \
	DECLARE_CLASS(ATheEclipseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheEclipse"), NO_API) \
	DECLARE_SERIALIZER(ATheEclipseProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATheEclipseProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATheEclipseProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheEclipseProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheEclipseProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheEclipseProjectile(ATheEclipseProjectile&&); \
	NO_API ATheEclipseProjectile(const ATheEclipseProjectile&); \
public:


#define TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheEclipseProjectile(ATheEclipseProjectile&&); \
	NO_API ATheEclipseProjectile(const ATheEclipseProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheEclipseProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheEclipseProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATheEclipseProjectile)


#define TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATheEclipseProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATheEclipseProjectile, ProjectileMovement); }


#define TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_12_PROLOG
#define TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_SPARSE_DATA \
	TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_RPC_WRAPPERS \
	TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_INCLASS \
	TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_SPARSE_DATA \
	TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_INCLASS_NO_PURE_DECLS \
	TheEclipse_Source_TheEclipse_TheEclipseProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEECLIPSE_API UClass* StaticClass<class ATheEclipseProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheEclipse_Source_TheEclipse_TheEclipseProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
