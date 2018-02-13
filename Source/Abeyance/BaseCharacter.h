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

	// Character Health.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float Health = 100;

	// Character Max Health.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float MaxHealth = 100;

	// Character Health.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float XP = 0;

	// Character Max Health.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float MaxXp = 1000;

	// Is the character dead?
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Base Character")
	bool IsDead = false;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Base Character")
	int SkillPoints = 0;

	// Character Mana.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float Lucidity = 100;

	// Character XP and Ability multiplier.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float Understanding = 0;

	// How fast health regenerates
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Rates")
	float HealthRegenRate = 0.5;

	// How fast mana regenerates
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Rates")
	float ManaRegenRate = 0.5;

	// Character's ability to coherse enemies to their side.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float Influence = 5; // This is a percentage.

	// The chance that the character will be ignored.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float ShadowPercentage = 10; // This is a percentage.

	// Melee Damage
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float MeleeDamage = 10;

	// Ranged damage
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	float RangeDamage = 10;

    // Calculate health function
	UFUNCTION(BlueprintCallable, Category = "Calculate Stats")
	virtual void CalculateHealth(float Delta);

	// Calculate health function
	UFUNCTION(BlueprintCallable, Category = "Base Character")
	virtual void CalculateStat(FName Name, float Delta);

	// Calculate health function
	UFUNCTION(BlueprintCallable, Category = "Calculate Stats")
	virtual void CalculateXp(float Delta);

	// Calculate death function (helper)
	virtual void CalculateDead();


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
