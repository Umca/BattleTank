// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"
#include "Engine/World.h"



void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());

	if (!PlayerTank) return;
	else {
		// move towards the player

		// aim at the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		// fire if ready
		//ControlledTank->Fire();
	}
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}


