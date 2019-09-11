// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TT3D_Launcher_generated_h
#error "Launcher.generated.h already included, missing '#pragma once' in Launcher.h"
#endif
#define TT3D_Launcher_generated_h

#define TT3D_Source_TT3D_Public_Launcher_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define TT3D_Source_TT3D_Public_Launcher_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define TT3D_Source_TT3D_Public_Launcher_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULauncher(); \
	friend struct Z_Construct_UClass_ULauncher_Statics; \
public: \
	DECLARE_CLASS(ULauncher, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TT3D"), NO_API) \
	DECLARE_SERIALIZER(ULauncher)


#define TT3D_Source_TT3D_Public_Launcher_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULauncher(); \
	friend struct Z_Construct_UClass_ULauncher_Statics; \
public: \
	DECLARE_CLASS(ULauncher, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TT3D"), NO_API) \
	DECLARE_SERIALIZER(ULauncher)


#define TT3D_Source_TT3D_Public_Launcher_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULauncher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULauncher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULauncher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULauncher(ULauncher&&); \
	NO_API ULauncher(const ULauncher&); \
public:


#define TT3D_Source_TT3D_Public_Launcher_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULauncher(ULauncher&&); \
	NO_API ULauncher(const ULauncher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULauncher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULauncher)


#define TT3D_Source_TT3D_Public_Launcher_h_14_PRIVATE_PROPERTY_OFFSET
#define TT3D_Source_TT3D_Public_Launcher_h_11_PROLOG
#define TT3D_Source_TT3D_Public_Launcher_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TT3D_Source_TT3D_Public_Launcher_h_14_PRIVATE_PROPERTY_OFFSET \
	TT3D_Source_TT3D_Public_Launcher_h_14_RPC_WRAPPERS \
	TT3D_Source_TT3D_Public_Launcher_h_14_INCLASS \
	TT3D_Source_TT3D_Public_Launcher_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TT3D_Source_TT3D_Public_Launcher_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TT3D_Source_TT3D_Public_Launcher_h_14_PRIVATE_PROPERTY_OFFSET \
	TT3D_Source_TT3D_Public_Launcher_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TT3D_Source_TT3D_Public_Launcher_h_14_INCLASS_NO_PURE_DECLS \
	TT3D_Source_TT3D_Public_Launcher_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TT3D_API UClass* StaticClass<class ULauncher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TT3D_Source_TT3D_Public_Launcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
