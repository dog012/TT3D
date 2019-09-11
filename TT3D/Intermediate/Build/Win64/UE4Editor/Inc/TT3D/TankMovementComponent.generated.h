// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TT3D_TankMovementComponent_generated_h
#error "TankMovementComponent.generated.h already included, missing '#pragma once' in TankMovementComponent.h"
#endif
#define TT3D_TankMovementComponent_generated_h

#define TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Jump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnBreak) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnBreak(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreak) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Break(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Turn(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Axis); \
		P_NATIVE_END; \
	}


#define TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Jump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnBreak) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnBreak(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreak) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Break(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Turn(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Axis); \
		P_NATIVE_END; \
	}


#define TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend struct Z_Construct_UClass_UTankMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TT3D"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent)


#define TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend struct Z_Construct_UClass_UTankMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TT3D"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent)


#define TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public:


#define TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent)


#define TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_12_PROLOG
#define TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_RPC_WRAPPERS \
	TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_INCLASS \
	TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	TT3D_Source_TT3D_Public_Components_TankMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TT3D_API UClass* StaticClass<class UTankMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TT3D_Source_TT3D_Public_Components_TankMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
