// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StaticMeshActor.h"
#include "ParticleHelper.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Laser.generated.h"

UCLASS()
class ABEYANCE_API ALaser : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaser();

	USceneComponent* Root;

	//UParticleSystemComponent* ;
	UPROPERTY(EditDefaultsOnly)
		UParticleSystemComponent* laserParticle;

	UPROPERTY(EditDefaultsOnly)
		UStaticMeshComponent* blockA;

	UPROPERTY(EditDefaultsOnly)
		UStaticMeshComponent* blockB;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
