// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Launcher.generated.h"

class AProjectile;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TT3D_API ULauncher : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULauncher();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = Tank)
	void Fire();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Tank)
	TSubclassOf<AProjectile> Projectile = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Tank)
	float CoolDown = 0.5f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Tank)
	float FireSpeed = 10000.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Tank)
	float FireRange = 100000.f;

	int MaxProjectile;

private:
	bool bCanFire;

	float LastFireTime = -INFINITY;

	float ProjectileLifeSpan = 1.f;
};
