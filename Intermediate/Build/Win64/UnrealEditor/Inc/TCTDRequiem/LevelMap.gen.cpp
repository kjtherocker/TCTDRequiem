// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTDRequiem/LevelMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelMap() {}
// Cross Module References
	TCTDREQUIEM_API UClass* Z_Construct_UClass_ULevelMap_NoRegister();
	TCTDREQUIEM_API UClass* Z_Construct_UClass_ULevelMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TCTDRequiem();
// End Cross Module References
	void ULevelMap::StaticRegisterNativesULevelMap()
	{
	}
	UClass* Z_Construct_UClass_ULevelMap_NoRegister()
	{
		return ULevelMap::StaticClass();
	}
	struct Z_Construct_UClass_ULevelMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTDRequiem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelMap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LevelMap.h" },
		{ "ModuleRelativePath", "LevelMap.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelMap_Statics::ClassParams = {
		&ULevelMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelMap, 4264248790);
	template<> TCTDREQUIEM_API UClass* StaticClass<ULevelMap>()
	{
		return ULevelMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelMap(Z_Construct_UClass_ULevelMap, &ULevelMap::StaticClass, TEXT("/Script/TCTDRequiem"), TEXT("ULevelMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
