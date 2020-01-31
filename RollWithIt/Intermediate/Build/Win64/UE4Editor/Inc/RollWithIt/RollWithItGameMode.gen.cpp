// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollWithIt/RollWithItGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollWithItGameMode() {}
// Cross Module References
	ROLLWITHIT_API UClass* Z_Construct_UClass_ARollWithItGameMode_NoRegister();
	ROLLWITHIT_API UClass* Z_Construct_UClass_ARollWithItGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RollWithIt();
// End Cross Module References
	void ARollWithItGameMode::StaticRegisterNativesARollWithItGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARollWithItGameMode_NoRegister()
	{
		return ARollWithItGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARollWithItGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARollWithItGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RollWithIt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollWithItGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RollWithItGameMode.h" },
		{ "ModuleRelativePath", "RollWithItGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARollWithItGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARollWithItGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARollWithItGameMode_Statics::ClassParams = {
		&ARollWithItGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARollWithItGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARollWithItGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARollWithItGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARollWithItGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARollWithItGameMode, 3674366197);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARollWithItGameMode(Z_Construct_UClass_ARollWithItGameMode, &ARollWithItGameMode::StaticClass, TEXT("/Script/RollWithIt"), TEXT("ARollWithItGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARollWithItGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
