// Fill out your copyright notice in the Description page of Project Settings.


#include "OrientingMovementComponent.h"


void UOrientingMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{

	FQuat NewRotation = Direction.ToOrientationQuat();

	FVector DeltaLocation = FVector::ZeroVector;
	MoveUpdatedComponent(DeltaLocation, NewRotation, true);

}