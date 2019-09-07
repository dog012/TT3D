// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TT3D_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	ATank* GetControlledTank() const;

private:
	bool GetAimTarget(FVector& HitLocation) const;

	bool GetHitLocation(FVector LookDirection, FVector& HitLocation) const;

	// 10 km
	float LineTraceRange = 1000000;
};
