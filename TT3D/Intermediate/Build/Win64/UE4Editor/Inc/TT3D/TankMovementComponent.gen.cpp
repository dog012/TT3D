// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TT3D/Public/Components/TankMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankMovementComponent() {}
// Cross Module References
	TT3D_API UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister();
	TT3D_API UClass* Z_Construct_UClass_UTankMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	UPackage* Z_Construct_UPackage__Script_TT3D();
	TT3D_API UFunction* Z_Construct_UFunction_UTankMovementComponent_Break();
	TT3D_API UFunction* Z_Construct_UFunction_UTankMovementComponent_Jump();
	TT3D_API UFunction* Z_Construct_UFunction_UTankMovementComponent_MoveForward();
	TT3D_API UFunction* Z_Construct_UFunction_UTankMovementComponent_Sprint();
	TT3D_API UFunction* Z_Construct_UFunction_UTankMovementComponent_Turn();
	TT3D_API UFunction* Z_Construct_UFunction_UTankMovementComponent_UnBreak();
	TT3D_API UFunction* Z_Construct_UFunction_UTankMovementComponent_UnSprint();
// End Cross Module References
	void UTankMovementComponent::StaticRegisterNativesUTankMovementComponent()
	{
		UClass* Class = UTankMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Break", &UTankMovementComponent::execBreak },
			{ "Jump", &UTankMovementComponent::execJump },
			{ "MoveForward", &UTankMovementComponent::execMoveForward },
			{ "Sprint", &UTankMovementComponent::execSprint },
			{ "Turn", &UTankMovementComponent::execTurn },
			{ "UnBreak", &UTankMovementComponent::execUnBreak },
			{ "UnSprint", &UTankMovementComponent::execUnSprint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTankMovementComponent_Break_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_Break_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_Break_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "Break", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_Break_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Break_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_Break()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_Break_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankMovementComponent_Jump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_Jump_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "Jump", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_Jump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Jump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankMovementComponent_MoveForward_Statics
	{
		struct TankMovementComponent_eventMoveForward_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTankMovementComponent_MoveForward_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankMovementComponent_eventMoveForward_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankMovementComponent_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankMovementComponent_MoveForward_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "MoveForward", sizeof(TankMovementComponent_eventMoveForward_Parms), Z_Construct_UFunction_UTankMovementComponent_MoveForward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_MoveForward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankMovementComponent_Sprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_Sprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "Sprint", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_Sprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankMovementComponent_Turn_Statics
	{
		struct TankMovementComponent_eventTurn_Parms
		{
			float Axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTankMovementComponent_Turn_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankMovementComponent_eventTurn_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankMovementComponent_Turn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankMovementComponent_Turn_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_Turn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "Turn", sizeof(TankMovementComponent_eventTurn_Parms), Z_Construct_UFunction_UTankMovementComponent_Turn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_Turn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankMovementComponent_UnBreak_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_UnBreak_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_UnBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "UnBreak", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_UnBreak_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_UnBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_UnBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_UnBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankMovementComponent_UnSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_UnSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_UnSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "UnSprint", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_UnSprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_UnSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_UnSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_UnSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister()
	{
		return UTankMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTankMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TT3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTankMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTankMovementComponent_Break, "Break" }, // 1792857988
		{ &Z_Construct_UFunction_UTankMovementComponent_Jump, "Jump" }, // 2051670162
		{ &Z_Construct_UFunction_UTankMovementComponent_MoveForward, "MoveForward" }, // 1733460275
		{ &Z_Construct_UFunction_UTankMovementComponent_Sprint, "Sprint" }, // 747632359
		{ &Z_Construct_UFunction_UTankMovementComponent_Turn, "Turn" }, // 3584972892
		{ &Z_Construct_UFunction_UTankMovementComponent_UnBreak, "UnBreak" }, // 3261086283
		{ &Z_Construct_UFunction_UTankMovementComponent_UnSprint, "UnSprint" }, // 3275336940
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Tank" },
		{ "IncludePath", "Components/TankMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankMovementComponent, CurrentSpeed), METADATA_PARAMS(Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_CurrentSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_CurrentSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_JumpVelocity_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_JumpVelocity = { "JumpVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankMovementComponent, JumpVelocity), METADATA_PARAMS(Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_JumpVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_JumpVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankMovementComponent, TurnSpeed), METADATA_PARAMS(Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_TurnSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_HighSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_HighSpeed = { "HighSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankMovementComponent, HighSpeed), METADATA_PARAMS(Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_HighSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_HighSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_LowSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/Components/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_LowSpeed = { "LowSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankMovementComponent, LowSpeed), METADATA_PARAMS(Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_LowSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_LowSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTankMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_CurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_JumpVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_TurnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_HighSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankMovementComponent_Statics::NewProp_LowSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankMovementComponent_Statics::ClassParams = {
		&UTankMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTankMovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTankMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTankMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTankMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankMovementComponent, 4206402109);
	template<> TT3D_API UClass* StaticClass<UTankMovementComponent>()
	{
		return UTankMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankMovementComponent(Z_Construct_UClass_UTankMovementComponent, &UTankMovementComponent::StaticClass, TEXT("/Script/TT3D"), TEXT("UTankMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
