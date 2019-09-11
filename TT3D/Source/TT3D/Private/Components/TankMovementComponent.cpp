// Fill out your copyright notice in the Description page of Project Settings.


#include "TankMovementComponent.h"

#include "Engine/World.h"
#include "Components/PrimitiveComponent.h"

void UTankMovementComponent::MoveForward(float Axis) {
	UpdatedComponent->AddLocalOffset(FVector::ForwardVector * GetWorld()->GetDeltaSeconds() * CurrentSpeed * Axis);
}

void UTankMovementComponent::Turn(float Axis)
{
	FRotator Rotation = FRotator(0.f, TurnSpeed * GetWorld()->GetDeltaSeconds() * Axis, 0.f);
	UpdatedComponent->AddRelativeRotation(Rotation);
}

void UTankMovementComponent::Sprint()
{
	CurrentSpeed = HighSpeed;
}

void UTankMovementComponent::UnSprint()
{
	CurrentSpeed = LowSpeed;
}

void UTankMovementComponent::Break()
{
	UPrimitiveComponent* Comp = Cast<UPrimitiveComponent>(UpdatedComponent);
	Comp->SetLinearDamping(1.f);
	Comp->SetAngularDamping(1.f);
}

void UTankMovementComponent::UnBreak()
{
	UPrimitiveComponent* Comp = Cast<UPrimitiveComponent>(UpdatedComponent);
	Comp->SetLinearDamping(0.f);
	Comp->SetAngularDamping(0.f);
}

void UTankMovementComponent::Jump()
{
	UPrimitiveComponent* Comp = Cast<UPrimitiveComponent>(UpdatedComponent);
	Comp->AddImpulse(FVector::UpVector * JumpVelocity, NAME_None, true);
}


