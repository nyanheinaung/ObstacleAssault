// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FVector PlatformVelocity = FVector(100,0,0);
		
	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	float MovableRange = 100.f;

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	bool Movable = false;

	FVector StartLocation;

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FRotator RotationVelocity;

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	bool RotateAble = false;

	void MovePlatform(float DeltaTime);

	void RotatePlatform(float DeltaTime);

	bool ShouldPlatformReturn() const;

	float GetDistanceMoved() const;
};
