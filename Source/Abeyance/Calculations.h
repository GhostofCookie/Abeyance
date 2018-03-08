// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Calculations.generated.h"

/**
 * 
 */
UCLASS()
class ABEYANCE_API UCalculations : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	// Calculates chance given a percentage.
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CalculateChance", CompactNodeTitle="CHANCE"), Category = "Calculations")
	bool CalculateChance(int Percentage);
	
	
};
