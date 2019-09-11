// Fill out your copyright notice in the Description page of Project Settings.

#include "Launcher.h"

#include "Projectile.h"
#include "Engine/World.h"

// Sets default values for this component's properties
ULauncher::ULauncher()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULauncher::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULauncher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (GetWorld()->GetTimeSeconds() - LastFireTime > CoolDown)
	{
		bCanFire = true;
	}
	else
	{
		bCanFire = false;
	}
	
}

void ULauncher::Fire()
{
	if (bCanFire && Projectile)
	{
		// Spawn Projectile
		FActorSpawnParameters SpawnParams = FActorSpawnParameters();
		FTransform FireTransform = GetComponentTransform();
		AProjectile* CurrentProjectile = GetWorld()->SpawnActor<AProjectile>(Projectile, FireTransform, SpawnParams);
		CurrentProjectile->Launch(FireSpeed);
		// Set Life Span
		ProjectileLifeSpan = FireRange / FireSpeed;
		CurrentProjectile->SetLifeSpan(ProjectileLifeSpan);
		// Set Last Fire Time
		LastFireTime = GetWorld()->GetTimeSeconds();

	}
}

