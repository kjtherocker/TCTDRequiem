// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTDRequiem/TowerNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerNode() {}
// Cross Module References
	TCTDREQUIEM_API UClass* Z_Construct_UClass_ATowerNode_NoRegister();
	TCTDREQUIEM_API UClass* Z_Construct_UClass_ATowerNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TCTDRequiem();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATowerNode::StaticRegisterNativesATowerNode()
	{
	}
	UClass* Z_Construct_UClass_ATowerNode_NoRegister()
	{
		return ATowerNode::StaticClass();
	}
	struct Z_Construct_UClass_ATowerNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTDRequiem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TowerNode.h" },
		{ "ModuleRelativePath", "TowerNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerNode_Statics::NewProp_m_Mesh_MetaData[] = {
		{ "Category", "TowerNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TowerNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerNode_Statics::NewProp_m_Mesh = { "m_Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerNode, m_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerNode_Statics::NewProp_m_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerNode_Statics::NewProp_m_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATowerNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerNode_Statics::NewProp_m_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerNode_Statics::ClassParams = {
		&ATowerNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATowerNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATowerNode_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATowerNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATowerNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATowerNode, 3549667812);
	template<> TCTDREQUIEM_API UClass* StaticClass<ATowerNode>()
	{
		return ATowerNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATowerNode(Z_Construct_UClass_ATowerNode, &ATowerNode::StaticClass, TEXT("/Script/TCTDRequiem"), TEXT("ATowerNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
