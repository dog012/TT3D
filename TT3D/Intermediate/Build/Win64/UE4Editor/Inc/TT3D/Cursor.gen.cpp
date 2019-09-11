// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TT3D/Public/Cursor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCursor() {}
// Cross Module References
	TT3D_API UClass* Z_Construct_UClass_ACursor_NoRegister();
	TT3D_API UClass* Z_Construct_UClass_ACursor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TT3D();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACursor::StaticRegisterNativesACursor()
	{
	}
	UClass* Z_Construct_UClass_ACursor_NoRegister()
	{
		return ACursor::StaticClass();
	}
	struct Z_Construct_UClass_ACursor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreTags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IgnoreTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACursor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TT3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACursor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Cursor" },
		{ "IncludePath", "Cursor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cursor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACursor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Cursor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cursor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACursor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACursor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACursor_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACursor_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACursor_Statics::NewProp_IgnoreTags_MetaData[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Public/Cursor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACursor_Statics::NewProp_IgnoreTags = { "IgnoreTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACursor, IgnoreTags), METADATA_PARAMS(Z_Construct_UClass_ACursor_Statics::NewProp_IgnoreTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACursor_Statics::NewProp_IgnoreTags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACursor_Statics::NewProp_IgnoreTags_Inner = { "IgnoreTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACursor_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Cursor" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Cursor.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACursor_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACursor, Offset), METADATA_PARAMS(Z_Construct_UClass_ACursor_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACursor_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACursor_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACursor_Statics::NewProp_IgnoreTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACursor_Statics::NewProp_IgnoreTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACursor_Statics::NewProp_Offset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACursor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACursor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACursor_Statics::ClassParams = {
		&ACursor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACursor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACursor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACursor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACursor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACursor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACursor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACursor, 212520354);
	template<> TT3D_API UClass* StaticClass<ACursor>()
	{
		return ACursor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACursor(Z_Construct_UClass_ACursor, &ACursor::StaticClass, TEXT("/Script/TT3D"), TEXT("ACursor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACursor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
