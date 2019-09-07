// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/World.h"

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Possess None"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Possess : %s"), *(ControlledTank->GetName()))
	}
}

void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector HitLocation;
	if (GetAimTarget(HitLocation))
	{
		UE_LOG(LogTemp, Warning, TEXT("HitLocation : %s"), *HitLocation.ToString())
	}

}

ATank* ATankPlayerController::GetControlledTank() const{
	return Cast<ATank>(GetPawn());
}

bool ATankPlayerController::GetAimTarget(FVector & HitLocation) const
{
	int32 SizeX, SizeY;
	GetViewportSize(SizeX, SizeY);
	FVector2D ScreenLocation = FVector2D(SizeX * 0.5f, SizeY * 0.3f);

	FVector CameraWorldLocation;
	FVector LookDirection;
	if (DeprojectScreenPositionToWorld(ScreenLocation.X, ScreenLocation.Y, CameraWorldLocation, LookDirection))
	{
		//UE_LOG(LogTemp, Warning, TEXT("Look Direction : %s"), *LookDirection.ToString())

		if (GetHitLocation(LookDirection, HitLocation)) {
			return true;
		}
	}
	HitLocation = FVector(0.f);
	return false;
}

bool ATankPlayerController::GetHitLocation(FVector LookDirection, FVector & HitLocation) const
{
	FHitResult Hit;
	FVector StartLocation = PlayerCameraManager->GetCameraLocation();
	FVector EndLocation = StartLocation + (LookDirection * LineTraceRange);
	if (GetWorld()->LineTraceSingleByChannel(
			Hit,
			StartLocation,
			EndLocation,
			ECollisionChannel::ECC_Visibility)
		)
	{
		HitLocation = Hit.Location;
		//UE_LOG(LogTemp, Warning, TEXT("%s"), *Hit.GetActor()->GetName())
		return true;
	}
	return false;
}


