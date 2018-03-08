// Fill out your copyright notice in the Description page of Project Settings.

#include "Calculations.h"

bool UCalculations::CalculateChance(int Percentage)
{
	return (FMath::RandRange(1, 100 / Percentage) == 1 ? true : false);
}


