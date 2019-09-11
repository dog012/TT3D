// Fill out your copyright notice in the Description page of Project Settings.


#include "AimingComponent.h"

#include "GameFramework/Actor.h"

void UAimingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	if (Target)
	{
		FVector Offset = Target->GetActorLocation() - UpdatedComponent->GetComponentLocation();
		FVector Direction = Offset.GetSafeNormal();
		FQuat OldRotation = UpdatedComponent->GetComponentQuat();

		FQuat NewRotation = FMath::QInterpTo(OldRotation, Direction.ToOrientationQuat(), DeltaTime, 3.f);


		FVector DeltaLocation = FVector::ZeroVector;
		MoveUpdatedComponent(DeltaLocation, NewRotation, true);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Missing Target"))
	}
}
