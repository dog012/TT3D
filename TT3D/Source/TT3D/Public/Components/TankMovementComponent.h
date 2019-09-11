// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = Tank, meta = (BlueprintSpawnableComponent))
class TT3D_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Speed)
	float LowSpeed = 2000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Speed)
	float HighSpeed = 3000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Speed)
	float TurnSpeed = 120;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Speed)
	float JumpVelocity = 1000;

	UFUNCTION(BlueprintCallable, Category = Movement)
	void MoveForward(float Axis);

	UFUNCTION(BlueprintCallable, Category = Movement)
	void Turn(float Axis);

	UFUNCTION(BlueprintCallable, Category = Movement)
	void Sprint();
	UFUNCTION(BlueprintCallable, Category = Movement)
	void UnSprint();

	UFUNCTION(BlueprintCallable, Category = Movement)
	void Break();
	UFUNCTION(BlueprintCallable, Category = Movement)
	void UnBreak();

	UFUNCTION(BlueprintCallable, Category = Movement)
	void Jump();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Speed)
	float CurrentSpeed = 2000;
};
