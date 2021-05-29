// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCTDREQUIEM_Spawner_generated_h
#error "Spawner.generated.h already included, missing '#pragma once' in Spawner.h"
#endif
#define TCTDREQUIEM_Spawner_generated_h

#define TCTDR_Source_TCTDRequiem_Spawner_h_15_SPARSE_DATA
#define TCTDR_Source_TCTDRequiem_Spawner_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnEnemy);


#define TCTDR_Source_TCTDRequiem_Spawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnEnemy);


#define TCTDR_Source_TCTDRequiem_Spawner_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTDRequiem"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define TCTDR_Source_TCTDRequiem_Spawner_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTDRequiem"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define TCTDR_Source_TCTDRequiem_Spawner_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawner(ASpawner&&); \
	NO_API ASpawner(const ASpawner&); \
public:


#define TCTDR_Source_TCTDRequiem_Spawner_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawner(ASpawner&&); \
	NO_API ASpawner(const ASpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawner)


#define TCTDR_Source_TCTDRequiem_Spawner_h_15_PRIVATE_PROPERTY_OFFSET
#define TCTDR_Source_TCTDRequiem_Spawner_h_12_PROLOG
#define TCTDR_Source_TCTDRequiem_Spawner_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTDR_Source_TCTDRequiem_Spawner_h_15_PRIVATE_PROPERTY_OFFSET \
	TCTDR_Source_TCTDRequiem_Spawner_h_15_SPARSE_DATA \
	TCTDR_Source_TCTDRequiem_Spawner_h_15_RPC_WRAPPERS \
	TCTDR_Source_TCTDRequiem_Spawner_h_15_INCLASS \
	TCTDR_Source_TCTDRequiem_Spawner_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCTDR_Source_TCTDRequiem_Spawner_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTDR_Source_TCTDRequiem_Spawner_h_15_PRIVATE_PROPERTY_OFFSET \
	TCTDR_Source_TCTDRequiem_Spawner_h_15_SPARSE_DATA \
	TCTDR_Source_TCTDRequiem_Spawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TCTDR_Source_TCTDRequiem_Spawner_h_15_INCLASS_NO_PURE_DECLS \
	TCTDR_Source_TCTDRequiem_Spawner_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCTDREQUIEM_API UClass* StaticClass<class ASpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCTDR_Source_TCTDRequiem_Spawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
