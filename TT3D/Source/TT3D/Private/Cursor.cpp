// Fill out your copyright notice in the Description page of Project Settings.


#include "Cursor.h"

#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ACursor::ACursor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Static Mesh"));
	StaticMesh->SetupAttachment(RootComponent);
	StaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void ACursor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACursor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FHitResult HitResult;
	if (GetWorld()->GetFirstPlayerController()->GetHitResultUnderCursorByChannel(
		ETraceTypeQuery::TraceTypeQuery1,
		false,
		HitResult)) {
		if (HitResult.Actor->ActorHasTag(IgnoreTags[0]))
		{
			return;
		}
		SetActorLocation(HitResult.Location + HitResult.Normal * Offset);
		SetActorRotation(HitResult.Normal.ToOrientationRotator());
		StaticMesh->SetVisibility(true);
	}
	else
	{
		StaticMesh->SetVisibility(false);
	}
}

