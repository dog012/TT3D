// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TT3D_Cursor_generated_h
#error "Cursor.generated.h already included, missing '#pragma once' in Cursor.h"
#endif
#define TT3D_Cursor_generated_h

#define TT3D_Source_TT3D_Public_Cursor_h_12_RPC_WRAPPERS
#define TT3D_Source_TT3D_Public_Cursor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TT3D_Source_TT3D_Public_Cursor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACursor(); \
	friend struct Z_Construct_UClass_ACursor_Statics; \
public: \
	DECLARE_CLASS(ACursor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TT3D"), NO_API) \
	DECLARE_SERIALIZER(ACursor)


#define TT3D_Source_TT3D_Public_Cursor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACursor(); \
	friend struct Z_Construct_UClass_ACursor_Statics; \
public: \
	DECLARE_CLASS(ACursor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TT3D"), NO_API) \
	DECLARE_SERIALIZER(ACursor)


#define TT3D_Source_TT3D_Public_Cursor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACursor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACursor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACursor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACursor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACursor(ACursor&&); \
	NO_API ACursor(const ACursor&); \
public:


#define TT3D_Source_TT3D_Public_Cursor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACursor(ACursor&&); \
	NO_API ACursor(const ACursor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACursor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACursor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACursor)


#define TT3D_Source_TT3D_Public_Cursor_h_12_PRIVATE_PROPERTY_OFFSET
#define TT3D_Source_TT3D_Public_Cursor_h_9_PROLOG
#define TT3D_Source_TT3D_Public_Cursor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TT3D_Source_TT3D_Public_Cursor_h_12_PRIVATE_PROPERTY_OFFSET \
	TT3D_Source_TT3D_Public_Cursor_h_12_RPC_WRAPPERS \
	TT3D_Source_TT3D_Public_Cursor_h_12_INCLASS \
	TT3D_Source_TT3D_Public_Cursor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TT3D_Source_TT3D_Public_Cursor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TT3D_Source_TT3D_Public_Cursor_h_12_PRIVATE_PROPERTY_OFFSET \
	TT3D_Source_TT3D_Public_Cursor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TT3D_Source_TT3D_Public_Cursor_h_12_INCLASS_NO_PURE_DECLS \
	TT3D_Source_TT3D_Public_Cursor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TT3D_API UClass* StaticClass<class ACursor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TT3D_Source_TT3D_Public_Cursor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
