// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTDRequiem/WaveSetup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveSetup() {}
// Cross Module References
	TCTDREQUIEM_API UEnum* Z_Construct_UEnum_TCTDRequiem_EnemyType();
	UPackage* Z_Construct_UPackage__Script_TCTDRequiem();
	TCTDREQUIEM_API UClass* Z_Construct_UClass_UWaveSetup_NoRegister();
	TCTDREQUIEM_API UClass* Z_Construct_UClass_UWaveSetup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EnemyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TCTDRequiem_EnemyType, Z_Construct_UPackage__Script_TCTDRequiem(), TEXT("EnemyType"));
		}
		return Singleton;
	}
	template<> TCTDREQUIEM_API UEnum* StaticEnum<EnemyType>()
	{
		return EnemyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EnemyType(EnemyType_StaticEnum, TEXT("/Script/TCTDRequiem"), TEXT("EnemyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TCTDRequiem_EnemyType_Hash() { return 168136494U; }
	UEnum* Z_Construct_UEnum_TCTDRequiem_EnemyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TCTDRequiem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EnemyType"), 0, Get_Z_Construct_UEnum_TCTDRequiem_EnemyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Basic", (int64)Basic },
				{ "Large", (int64)Large },
				{ "Fast", (int64)Fast },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Basic.Comment", "/**\n * \n */" },
				{ "Basic.Name", "Basic" },
				{ "Comment", "/**\n * \n */" },
				{ "Fast.Comment", "/**\n * \n */" },
				{ "Fast.Name", "Fast" },
				{ "Large.Comment", "/**\n * \n */" },
				{ "Large.Name", "Large" },
				{ "ModuleRelativePath", "WaveSetup.h" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TCTDRequiem,
				nullptr,
				"EnemyType",
				"EnemyType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UWaveSetup::StaticRegisterNativesUWaveSetup()
	{
	}
	UClass* Z_Construct_UClass_UWaveSetup_NoRegister()
	{
		return UWaveSetup::StaticClass();
	}
	struct Z_Construct_UClass_UWaveSetup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveSetup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTDRequiem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveSetup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaveSetup.h" },
		{ "ModuleRelativePath", "WaveSetup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveSetup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveSetup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveSetup_Statics::ClassParams = {
		&UWaveSetup::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWaveSetup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveSetup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveSetup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWaveSetup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWaveSetup, 555958294);
	template<> TCTDREQUIEM_API UClass* StaticClass<UWaveSetup>()
	{
		return UWaveSetup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWaveSetup(Z_Construct_UClass_UWaveSetup, &UWaveSetup::StaticClass, TEXT("/Script/TCTDRequiem"), TEXT("UWaveSetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveSetup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
