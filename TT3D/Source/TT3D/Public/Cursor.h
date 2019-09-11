// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cursor.generated.h"

UCLASS(ClassGroup = Cursor, Blueprintable)
class TT3D_API ACursor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACursor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cursor, meta = (ClampMin = 0, UIMin = 0))
	float Offset = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cursor)
	TArray<FName> IgnoreTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cursor)
	UStaticMeshComponent* StaticMesh = nullptr;


};
