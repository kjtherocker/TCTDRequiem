// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTDRequiem/TCTDRequiemGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTCTDRequiemGameModeBase() {}
// Cross Module References
	TCTDREQUIEM_API UClass* Z_Construct_UClass_ATCTDRequiemGameModeBase_NoRegister();
	TCTDREQUIEM_API UClass* Z_Construct_UClass_ATCTDRequiemGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TCTDRequiem();
// End Cross Module References
	void ATCTDRequiemGameModeBase::StaticRegisterNativesATCTDRequiemGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATCTDRequiemGameModeBase_NoRegister()
	{
		return ATCTDRequiemGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATCTDRequiemGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATCTDRequiemGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTDRequiem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATCTDRequiemGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "TCTDRequiemGameModeBase.h" },
		{ "ModuleRelativePath", "TCTDRequiemGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATCTDRequiemGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATCTDRequiemGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATCTDRequiemGameModeBase_Statics::ClassParams = {
		&ATCTDRequiemGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATCTDRequiemGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATCTDRequiemGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATCTDRequiemGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATCTDRequiemGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATCTDRequiemGameModeBase, 3731066591);
	template<> TCTDREQUIEM_API UClass* StaticClass<ATCTDRequiemGameModeBase>()
	{
		return ATCTDRequiemGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATCTDRequiemGameModeBase(Z_Construct_UClass_ATCTDRequiemGameModeBase, &ATCTDRequiemGameModeBase::StaticClass, TEXT("/Script/TCTDRequiem"), TEXT("ATCTDRequiemGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATCTDRequiemGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
