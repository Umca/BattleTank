// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */

UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max downward speed, 1 max moveup
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category=Setup)
	float MaxDegreesPerSecond = 10.;
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 30.;
	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0.;
};
