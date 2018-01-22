// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS()
class ABEYANCE_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

	// Character Health
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float Health = 100;

	// Is the character dead?
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Base Character")
		bool IsDead = false;

	// Calculate death function (helper)
	virtual void CalculateDead();

	// Calculate health function
	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CalculateHealth(float Delta);

	UPROPERTY(Category = "Character Movement", EditAnywhere, meta = (ClampMin = "0.0", ClampMax = "180.0", UIMin = "0.0", UIMax = "180.0"))
		float WalkableFloorAngle = 180;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Handles input for moving forward and backward.
	UFUNCTION()
		void MoveForward(float Value);

	// Handles input for moving right and left.
	UFUNCTION()
		void MoveRight(float Value);

	// Sets jump flag when key is pressed.
	UFUNCTION()
		void StartJump();

	// Clears jump flag when key is released.
	UFUNCTION()
		void StopJump();


};
