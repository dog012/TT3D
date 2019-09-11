// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TT3D_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define TT3D_Projectile_generated_h

#define TT3D_Source_TT3D_Public_Projectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLaunch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Launch(Z_Param_Speed); \
		P_NATIVE_END; \
	}


#define TT3D_Source_TT3D_Public_Projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Launch(Z_Param_Speed); \
		P_NATIVE_END; \
	}


#define TT3D_Source_TT3D_Public_Projectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TT3D"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define TT3D_Source_TT3D_Public_Projectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TT3D"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define TT3D_Source_TT3D_Public_Projectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define TT3D_Source_TT3D_Public_Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define TT3D_Source_TT3D_Public_Projectile_h_14_PRIVATE_PROPERTY_OFFSET
#define TT3D_Source_TT3D_Public_Projectile_h_11_PROLOG
#define TT3D_Source_TT3D_Public_Projectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TT3D_Source_TT3D_Public_Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	TT3D_Source_TT3D_Public_Projectile_h_14_RPC_WRAPPERS \
	TT3D_Source_TT3D_Public_Projectile_h_14_INCLASS \
	TT3D_Source_TT3D_Public_Projectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TT3D_Source_TT3D_Public_Projectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TT3D_Source_TT3D_Public_Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	TT3D_Source_TT3D_Public_Projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TT3D_Source_TT3D_Public_Projectile_h_14_INCLASS_NO_PURE_DECLS \
	TT3D_Source_TT3D_Public_Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TT3D_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TT3D_Source_TT3D_Public_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
