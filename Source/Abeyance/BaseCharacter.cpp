// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"


// Sets default values
ABaseCharacter::ABaseCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Health < MaxHealth)
		Health += 1*HealthRegenRate;
	if (Health > MaxHealth)
		Health = MaxHealth;

	if (Lucidity < MaxLucidity)
		Lucidity += 1 * ManaRegenRate;
	if (Lucidity > MaxLucidity)
		Lucidity = MaxLucidity;

}

// Implement Calculate Health
void ABaseCharacter::CalculateHealth(float Delta)
{
	Health -= Delta;
	CalculateDead();
}

void ABaseCharacter::CalculateStat(FName Name, float Delta)
{
	if (Name == "range")
		RangeDamage += Delta;
	else if (Name == "melee")
		MeleeDamage += Delta;
	else if (Name == "influence")
		Influence += Delta;
	else if (Name == "shadow")
		ShadowPercentage += Delta;
	else if (Name == "understanding")
		Understanding += Delta;
	else if (Name == "mana")
		MaxLucidity += Delta;
	else if (Name == "health")
	{
		MaxHealth += Delta;
		CalculateDead();
	}
}

void ABaseCharacter::CalculateXp(float Delta)
{
	XP += Delta;
	if (XP >= MaxXp || XP == MaxXp)
	{
		XP -= MaxXp;
		MaxXp *= 1.3;
		SkillPoints += 1;
	}
}


// Implement Calculate Dead
void ABaseCharacter::CalculateDead()
{
	if (Health <= 0)
		IsDead = true;
	else
		IsDead = false;
}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up "movement" bindings.
	PlayerInputComponent->BindAxis("MoveForward", this, &ABaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABaseCharacter::MoveRight);


	// Set up "action" bindings.
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ABaseCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ABaseCharacter::StopJump);

}

void ABaseCharacter::MoveForward(float Value)
{
	// Find out which way is "forward" and record that the player wants to move that way
	const FRotator Yaw = FRotator(0.0f, GetControlRotation().Yaw, 0.0f);
	FVector Direction = FRotationMatrix(Yaw).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void ABaseCharacter::MoveRight(float Value)
{
	// Find out which way is "right" and record that the player wants to move that way
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void ABaseCharacter::StartJump()
{
	bPressedJump = true;
}

void ABaseCharacter::StopJump()
{
	bPressedJump = false;
}

#if WITH_EDITOR
// Override PostEditChangeProperty
void ABaseCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	IsDead = false;
	Health = 100;

	Super::PostEditChangeProperty(PropertyChangedEvent);

	CalculateDead();

}
#endif

