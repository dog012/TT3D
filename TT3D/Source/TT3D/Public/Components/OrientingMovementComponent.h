// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "OrientingMovementComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = Movement, meta = (BlueprintSpawnableComponent))
class TT3D_API UOrientingMovementComponent : public UMovementComponent
{
	GENERATED_BODY()

public:

	//Begin UActorComponent Interface
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	//End UActorComponent Interface

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Movement)
	FVector Direction = FVector::ForwardVector;
};
