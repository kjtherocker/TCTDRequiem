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
#ifdef TCTDREQUIEM_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define TCTDREQUIEM_Turret_generated_h

#define TCTDR_Source_TCTDRequiem_Turret_h_14_SPARSE_DATA
#define TCTDR_Source_TCTDRequiem_Turret_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execEnemyWasKilled);


#define TCTDR_Source_TCTDRequiem_Turret_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execEnemyWasKilled);


#define TCTDR_Source_TCTDRequiem_Turret_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTDRequiem"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define TCTDR_Source_TCTDRequiem_Turret_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTDRequiem"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define TCTDR_Source_TCTDRequiem_Turret_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurret(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public:


#define TCTDR_Source_TCTDRequiem_Turret_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret)


#define TCTDR_Source_TCTDRequiem_Turret_h_14_PRIVATE_PROPERTY_OFFSET
#define TCTDR_Source_TCTDRequiem_Turret_h_11_PROLOG
#define TCTDR_Source_TCTDRequiem_Turret_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTDR_Source_TCTDRequiem_Turret_h_14_PRIVATE_PROPERTY_OFFSET \
	TCTDR_Source_TCTDRequiem_Turret_h_14_SPARSE_DATA \
	TCTDR_Source_TCTDRequiem_Turret_h_14_RPC_WRAPPERS \
	TCTDR_Source_TCTDRequiem_Turret_h_14_INCLASS \
	TCTDR_Source_TCTDRequiem_Turret_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCTDR_Source_TCTDRequiem_Turret_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTDR_Source_TCTDRequiem_Turret_h_14_PRIVATE_PROPERTY_OFFSET \
	TCTDR_Source_TCTDRequiem_Turret_h_14_SPARSE_DATA \
	TCTDR_Source_TCTDRequiem_Turret_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TCTDR_Source_TCTDRequiem_Turret_h_14_INCLASS_NO_PURE_DECLS \
	TCTDR_Source_TCTDRequiem_Turret_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCTDREQUIEM_API UClass* StaticClass<class ATurret>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCTDR_Source_TCTDRequiem_Turret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
