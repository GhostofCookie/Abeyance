// Fill out your copyright notice in the Description page of Project Settings.

#include "Laser.h"
#include "Components/StaticMeshComponent.h"
#include <iostream>



// Sets default values
ALaser::ALaser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(FName("Root"));

	blockA = CreateDefaultSubobject<UStaticMeshComponent>(FName("blockA"));
	blockA->SetRelativeLocation(FVector(50.f, 0.f, 0.f));

	blockB = CreateDefaultSubobject<UStaticMeshComponent>(FName("blockB"));
	blockB->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	laserParticle = CreateDefaultSubobject<UParticleSystemComponent>(FName("LaserParticle"));

}

// Called when the game starts or when spawned
void ALaser::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	laserParticle->SetBeamSourcePoint(0, blockA->GetComponentLocation(), 0);
	laserParticle->SetBeamTargetPoint(0, blockB->GetComponentLocation(), 0);
}

