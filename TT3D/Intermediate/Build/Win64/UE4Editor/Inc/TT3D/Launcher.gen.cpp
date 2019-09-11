// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TT3D/Public/Launcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLauncher() {}
// Cross Module References
	TT3D_API UClass* Z_Construct_UClass_ULauncher_NoRegister();
	TT3D_API UClass* Z_Construct_UClass_ULauncher();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_TT3D();
	TT3D_API UFunction* Z_Construct_UFunction_ULauncher_Fire();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TT3D_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	void ULauncher::StaticRegisterNativesULauncher()
	{
		UClass* Class = ULauncher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ULauncher::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULauncher_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULauncher_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Public/Launcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULauncher_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULauncher, nullptr, "Fire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULauncher_Fire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULauncher_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULauncher_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULauncher_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULauncher_NoRegister()
	{
		return ULauncher::StaticClass();
	}
	struct Z_Construct_UClass_ULauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TT3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULauncher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULauncher_Fire, "Fire" }, // 2517734079
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULauncher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Launcher.h" },
		{ "ModuleRelativePath", "Public/Launcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULauncher_Statics::NewProp_FireRange_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Public/Launcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULauncher_Statics::NewProp_FireRange = { "FireRange", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULauncher, FireRange), METADATA_PARAMS(Z_Construct_UClass_ULauncher_Statics::NewProp_FireRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULauncher_Statics::NewProp_FireRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULauncher_Statics::NewProp_FireSpeed_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Public/Launcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULauncher_Statics::NewProp_FireSpeed = { "FireSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULauncher, FireSpeed), METADATA_PARAMS(Z_Construct_UClass_ULauncher_Statics::NewProp_FireSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULauncher_Statics::NewProp_FireSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULauncher_Statics::NewProp_CoolDown_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Public/Launcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULauncher_Statics::NewProp_CoolDown = { "CoolDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULauncher, CoolDown), METADATA_PARAMS(Z_Construct_UClass_ULauncher_Statics::NewProp_CoolDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULauncher_Statics::NewProp_CoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULauncher_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Public/Launcher.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULauncher_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULauncher, Projectile), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULauncher_Statics::NewProp_Projectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULauncher_Statics::NewProp_Projectile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULauncher_Statics::NewProp_FireRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULauncher_Statics::NewProp_FireSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULauncher_Statics::NewProp_CoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULauncher_Statics::NewProp_Projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULauncher_Statics::ClassParams = {
		&ULauncher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULauncher_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULauncher_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULauncher_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULauncher, 1773904695);
	template<> TT3D_API UClass* StaticClass<ULauncher>()
	{
		return ULauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULauncher(Z_Construct_UClass_ULauncher, &ULauncher::StaticClass, TEXT("/Script/TT3D"), TEXT("ULauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
