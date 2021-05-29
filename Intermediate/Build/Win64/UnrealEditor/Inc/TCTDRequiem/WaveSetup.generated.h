// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCTDREQUIEM_WaveSetup_generated_h
#error "WaveSetup.generated.h already included, missing '#pragma once' in WaveSetup.h"
#endif
#define TCTDREQUIEM_WaveSetup_generated_h

#define TCTDR_Source_TCTDRequiem_WaveSetup_h_24_SPARSE_DATA
#define TCTDR_Source_TCTDRequiem_WaveSetup_h_24_RPC_WRAPPERS
#define TCTDR_Source_TCTDRequiem_WaveSetup_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define TCTDR_Source_TCTDRequiem_WaveSetup_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveSetup(); \
	friend struct Z_Construct_UClass_UWaveSetup_Statics; \
public: \
	DECLARE_CLASS(UWaveSetup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCTDRequiem"), NO_API) \
	DECLARE_SERIALIZER(UWaveSetup)


#define TCTDR_Source_TCTDRequiem_WaveSetup_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUWaveSetup(); \
	friend struct Z_Construct_UClass_UWaveSetup_Statics; \
public: \
	DECLARE_CLASS(UWaveSetup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCTDRequiem"), NO_API) \
	DECLARE_SERIALIZER(UWaveSetup)


#define TCTDR_Source_TCTDRequiem_WaveSetup_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveSetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveSetup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveSetup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveSetup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaveSetup(UWaveSetup&&); \
	NO_API UWaveSetup(const UWaveSetup&); \
public:


#define TCTDR_Source_TCTDRequiem_WaveSetup_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveSetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaveSetup(UWaveSetup&&); \
	NO_API UWaveSetup(const UWaveSetup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveSetup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveSetup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveSetup)


#define TCTDR_Source_TCTDRequiem_WaveSetup_h_24_PRIVATE_PROPERTY_OFFSET
#define TCTDR_Source_TCTDRequiem_WaveSetup_h_21_PROLOG
#define TCTDR_Source_TCTDRequiem_WaveSetup_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTDR_Source_TCTDRequiem_WaveSetup_h_24_PRIVATE_PROPERTY_OFFSET \
	TCTDR_Source_TCTDRequiem_WaveSetup_h_24_SPARSE_DATA \
	TCTDR_Source_TCTDRequiem_WaveSetup_h_24_RPC_WRAPPERS \
	TCTDR_Source_TCTDRequiem_WaveSetup_h_24_INCLASS \
	TCTDR_Source_TCTDRequiem_WaveSetup_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCTDR_Source_TCTDRequiem_WaveSetup_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTDR_Source_TCTDRequiem_WaveSetup_h_24_PRIVATE_PROPERTY_OFFSET \
	TCTDR_Source_TCTDRequiem_WaveSetup_h_24_SPARSE_DATA \
	TCTDR_Source_TCTDRequiem_WaveSetup_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	TCTDR_Source_TCTDRequiem_WaveSetup_h_24_INCLASS_NO_PURE_DECLS \
	TCTDR_Source_TCTDRequiem_WaveSetup_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCTDREQUIEM_API UClass* StaticClass<class UWaveSetup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCTDR_Source_TCTDRequiem_WaveSetup_h


#define FOREACH_ENUM_ENEMYTYPE(op) \
	op(Basic) \
	op(Large) \
	op(Fast) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
