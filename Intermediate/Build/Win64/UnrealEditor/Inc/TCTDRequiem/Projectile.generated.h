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
struct FHitResult;
#ifdef TCTDREQUIEM_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define TCTDREQUIEM_Projectile_generated_h

#define TCTDR_Source_TCTDRequiem_Projectile_h_13_SPARSE_DATA
#define TCTDR_Source_TCTDRequiem_Projectile_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define TCTDR_Source_TCTDRequiem_Projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define TCTDR_Source_TCTDRequiem_Projectile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTDRequiem"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define TCTDR_Source_TCTDRequiem_Projectile_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTDRequiem"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define TCTDR_Source_TCTDRequiem_Projectile_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define TCTDR_Source_TCTDRequiem_Projectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define TCTDR_Source_TCTDRequiem_Projectile_h_13_PRIVATE_PROPERTY_OFFSET
#define TCTDR_Source_TCTDRequiem_Projectile_h_10_PROLOG
#define TCTDR_Source_TCTDRequiem_Projectile_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTDR_Source_TCTDRequiem_Projectile_h_13_PRIVATE_PROPERTY_OFFSET \
	TCTDR_Source_TCTDRequiem_Projectile_h_13_SPARSE_DATA \
	TCTDR_Source_TCTDRequiem_Projectile_h_13_RPC_WRAPPERS \
	TCTDR_Source_TCTDRequiem_Projectile_h_13_INCLASS \
	TCTDR_Source_TCTDRequiem_Projectile_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCTDR_Source_TCTDRequiem_Projectile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTDR_Source_TCTDRequiem_Projectile_h_13_PRIVATE_PROPERTY_OFFSET \
	TCTDR_Source_TCTDRequiem_Projectile_h_13_SPARSE_DATA \
	TCTDR_Source_TCTDRequiem_Projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TCTDR_Source_TCTDRequiem_Projectile_h_13_INCLASS_NO_PURE_DECLS \
	TCTDR_Source_TCTDRequiem_Projectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCTDREQUIEM_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCTDR_Source_TCTDRequiem_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
