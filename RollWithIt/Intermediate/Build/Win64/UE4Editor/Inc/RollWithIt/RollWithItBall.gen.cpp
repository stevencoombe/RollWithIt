// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollWithIt/RollWithItBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollWithItBall() {}
// Cross Module References
	ROLLWITHIT_API UClass* Z_Construct_UClass_ARollWithItBall_NoRegister();
	ROLLWITHIT_API UClass* Z_Construct_UClass_ARollWithItBall();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_RollWithIt();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ARollWithItBall::StaticRegisterNativesARollWithItBall()
	{
	}
	UClass* Z_Construct_UClass_ARollWithItBall_NoRegister()
	{
		return ARollWithItBall::StaticClass();
	}
	struct Z_Construct_UClass_ARollWithItBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ball;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARollWithItBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RollWithIt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollWithItBall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RollWithItBall.h" },
		{ "ModuleRelativePath", "RollWithItBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollWithItBall_Statics::NewProp_RollTorque_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "RollWithItBall.h" },
		{ "ToolTip", "Torque to apply when trying to roll ball" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARollWithItBall_Statics::NewProp_RollTorque = { UE4CodeGen_Private::EPropertyClass::Float, "RollTorque", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARollWithItBall, RollTorque), METADATA_PARAMS(Z_Construct_UClass_ARollWithItBall_Statics::NewProp_RollTorque_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARollWithItBall_Statics::NewProp_RollTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollWithItBall_Statics::NewProp_JumpImpulse_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "RollWithItBall.h" },
		{ "ToolTip", "Vertical impulse to apply when pressing jump" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARollWithItBall_Statics::NewProp_JumpImpulse = { UE4CodeGen_Private::EPropertyClass::Float, "JumpImpulse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARollWithItBall, JumpImpulse), METADATA_PARAMS(Z_Construct_UClass_ARollWithItBall_Statics::NewProp_JumpImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARollWithItBall_Statics::NewProp_JumpImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollWithItBall_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RollWithItBall.h" },
		{ "ToolTip", "Camera to view the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollWithItBall_Statics::NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ARollWithItBall, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARollWithItBall_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARollWithItBall_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollWithItBall_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RollWithItBall.h" },
		{ "ToolTip", "Spring arm for positioning the camera above the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollWithItBall_Statics::NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ARollWithItBall, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARollWithItBall_Statics::NewProp_SpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARollWithItBall_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollWithItBall_Statics::NewProp_Ball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RollWithItBall.h" },
		{ "ToolTip", "StaticMesh used for the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollWithItBall_Statics::NewProp_Ball = { UE4CodeGen_Private::EPropertyClass::Object, "Ball", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ARollWithItBall, Ball), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARollWithItBall_Statics::NewProp_Ball_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARollWithItBall_Statics::NewProp_Ball_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARollWithItBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollWithItBall_Statics::NewProp_RollTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollWithItBall_Statics::NewProp_JumpImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollWithItBall_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollWithItBall_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollWithItBall_Statics::NewProp_Ball,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARollWithItBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARollWithItBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARollWithItBall_Statics::ClassParams = {
		&ARollWithItBall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		Z_Construct_UClass_ARollWithItBall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ARollWithItBall_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARollWithItBall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARollWithItBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARollWithItBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARollWithItBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARollWithItBall, 2270917133);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARollWithItBall(Z_Construct_UClass_ARollWithItBall, &ARollWithItBall::StaticClass, TEXT("/Script/RollWithIt"), TEXT("ARollWithItBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARollWithItBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
