// Fill out your copyright notice in the Description page of Project Settings.


#include "FollowingMovementComponent.h"

#include "GameFramework/Actor.h"
#include "..\..\Public\Components\FollowingMovementComponent.h"

void UFollowingMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	if (Target)
	{
		FVector Offset = Target->GetActorLocation() - UpdatedComponent->GetComponentLocation();
		FVector Direction = Offset.GetSafeNormal();
		FQuat OldRotation = UpdatedComponent->GetComponentQuat();

		FQuat NewRotation = FMath::QInterpTo(OldRotation, Direction.ToOrientationQuat(), DeltaTime, 3.f);

		FVector DeltaLocation = DeltaTime * Offset;
		MoveUpdatedComponent(DeltaLocation, NewRotation, true);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Missing Target"))
	}
}
