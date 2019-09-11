// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TT3D_AimingComponent_generated_h
#error "AimingComponent.generated.h already included, missing '#pragma once' in AimingComponent.h"
#endif
#define TT3D_AimingComponent_generated_h

#define TT3D_Source_TT3D_Public_AimingComponent_h_15_RPC_WRAPPERS
#define TT3D_Source_TT3D_Public_AimingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TT3D_Source_TT3D_Public_AimingComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAimingComponent(); \
	friend struct Z_Construct_UClass_UAimingComponent_Statics; \
public: \
	DECLARE_CLASS(UAimingComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TT3D"), NO_API) \
	DECLARE_SERIALIZER(UAimingComponent)


#define TT3D_Source_TT3D_Public_AimingComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAimingComponent(); \
	friend struct Z_Construct_UClass_UAimingComponent_Statics; \
public: \
	DECLARE_CLASS(UAimingComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TT3D"), NO_API) \
	DECLARE_SERIALIZER(UAimingComponent)


#define TT3D_Source_TT3D_Public_AimingComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAimingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimingComponent(UAimingComponent&&); \
	NO_API UAimingComponent(const UAimingComponent&); \
public:


#define TT3D_Source_TT3D_Public_AimingComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAimingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimingComponent(UAimingComponent&&); \
	NO_API UAimingComponent(const UAimingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimingComponent)


#define TT3D_Source_TT3D_Public_AimingComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define TT3D_Source_TT3D_Public_AimingComponent_h_12_PROLOG
#define TT3D_Source_TT3D_Public_AimingComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TT3D_Source_TT3D_Public_AimingComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TT3D_Source_TT3D_Public_AimingComponent_h_15_RPC_WRAPPERS \
	TT3D_Source_TT3D_Public_AimingComponent_h_15_INCLASS \
	TT3D_Source_TT3D_Public_AimingComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TT3D_Source_TT3D_Public_AimingComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TT3D_Source_TT3D_Public_AimingComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TT3D_Source_TT3D_Public_AimingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TT3D_Source_TT3D_Public_AimingComponent_h_15_INCLASS_NO_PURE_DECLS \
	TT3D_Source_TT3D_Public_AimingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TT3D_API UClass* StaticClass<class UAimingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TT3D_Source_TT3D_Public_AimingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
