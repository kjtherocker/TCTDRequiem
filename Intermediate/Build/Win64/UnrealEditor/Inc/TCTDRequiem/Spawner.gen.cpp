// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTDRequiem/Spawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawner() {}
// Cross Module References
	TCTDREQUIEM_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
	TCTDREQUIEM_API UClass* Z_Construct_UClass_ASpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TCTDRequiem();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ASpawner::execSpawnEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemy();
		P_NATIVE_END;
	}
	void ASpawner::StaticRegisterNativesASpawner()
	{
		UClass* Class = ASpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnEnemy", &ASpawner::execSpawnEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawner_SpawnEnemy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawner_SpawnEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "SpawnEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawner_SpawnEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_SpawnEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawner_SpawnEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawner_SpawnEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawner_NoRegister()
	{
		return ASpawner::StaticClass();
	}
	struct Z_Construct_UClass_ASpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_Standard_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Enemy_Standard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_Large_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Enemy_Large;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_Fast_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Enemy_Fast;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnEnemyPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnEnemyPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTDRequiem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawner_SpawnEnemy, "SpawnEnemy" }, // 3710835947
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spawner.h" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_m_Mesh_MetaData[] = {
		{ "Category", "Spawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_m_Mesh = { "m_Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, m_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_m_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_m_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Standard_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Standard = { "Enemy_Standard", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, Enemy_Standard), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Standard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Standard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Large_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Large = { "Enemy_Large", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, Enemy_Large), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Large_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Large_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Fast_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Fast = { "Enemy_Fast", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, Enemy_Fast), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Fast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Fast_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_Waypoints_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_Waypoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnEnemyPosition_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnEnemyPosition = { "SpawnEnemyPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, SpawnEnemyPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnEnemyPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnEnemyPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_m_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Standard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Large,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_Enemy_Fast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_Waypoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_Waypoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnEnemyPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_Statics::ClassParams = {
		&ASpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawner, 597854273);
	template<> TCTDREQUIEM_API UClass* StaticClass<ASpawner>()
	{
		return ASpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawner(Z_Construct_UClass_ASpawner, &ASpawner::StaticClass, TEXT("/Script/TCTDRequiem"), TEXT("ASpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
