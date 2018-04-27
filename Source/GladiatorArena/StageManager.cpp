// Fill out your copyright notice in the Description page of Project Settings.

#include "StageManager.h"
#include "Engine.h"
#include "UnrealMathUtility.h"

// Sets default values
AStageManager::AStageManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStageManager::BeginPlay()
{
	Super::BeginPlay();

	SetObjects();		//Execute setobjects Function
	ActivateDRay();		//Used only for testing purposes
	ActivateFlamets();	//Used only for testing purposes
	ActivatePendulum();	//Used only for testing purposes
}


void AStageManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStageManager::TrapSpawn()
{
	/* If trapArray is shorter or equally long as 4*/
	if (trapArray.Num() <= 3)
	{
		/* Loop randomNum between 1 to 5 as long as it is not contained in trapArray*/
		do
		{

			UE_LOG(LogTemp, Warning, TEXT("Looping"));
			randomNum = FMath::FRandRange(1, 5);
		} while (trapArray.Contains(randomNum));

		trapArray.Add(randomNum); // Add value that randomNum got to trapArray

		/* SwitchCase for activating and "spawning" traps, depending on the value that randomNum got*/
		switch (randomNum)
		{
		case 1:
			UE_LOG(LogTemp, Warning, TEXT("Spawning trap1"));
			TrapMesh1->SetActorHiddenInGame(false);		// Sets TrapMesh visible in game
			TrapTriggerComponent1->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); //Enables collision for TrapTriggerComponent
			break;
		case 2:
			UE_LOG(LogTemp, Warning, TEXT("Spawning trap2"));
			TrapMesh2->SetActorHiddenInGame(false);
			TrapTriggerComponent2->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			break;
		case 3:
			UE_LOG(LogTemp, Warning, TEXT("Spawning trap3"));
			TrapMesh3->SetActorHiddenInGame(false);
			TrapTriggerComponent3->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			break;
		case 4:
			UE_LOG(LogTemp, Warning, TEXT("Spawning trap4"));
			TrapMesh4->SetActorHiddenInGame(false);
			TrapTriggerComponent4->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			break;
		default:
			break;
		}
	}
			
}
//Resets objects between rounds
void AStageManager::Resetobjects()
{
	trapArray.Empty();
	TrapMesh1->SetActorHiddenInGame(true);
	TrapMesh2->SetActorHiddenInGame(true);
	TrapMesh3->SetActorHiddenInGame(true);
	TrapMesh4->SetActorHiddenInGame(true);
	TrapTriggerComponent1->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	TrapTriggerComponent2->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	TrapTriggerComponent3->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	TrapTriggerComponent4->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}
/* Function to set TrapTriggerComponents reference to traps triggerActors Collision*/
void AStageManager::SetObjects()
{
	
	TrapTriggerComponent1 = TrapTriggerActor1->FindComponentByClass<UPrimitiveComponent>();
	TrapTriggerComponent2 = TrapTriggerActor2->FindComponentByClass<UPrimitiveComponent>();
	TrapTriggerComponent3 = TrapTriggerActor3->FindComponentByClass<UPrimitiveComponent>();
	TrapTriggerComponent4 = TrapTriggerActor4->FindComponentByClass<UPrimitiveComponent>();

	DRayCollider = DRayActor->FindComponentByClass<UCapsuleComponent>();
	FlametCollider = FlametActor->FindComponentByClass<UCapsuleComponent>();
	FlametWallCollider = FlametWallActor->FindComponentByClass<UCapsuleComponent>();
	PendulumCollider = PendulumActor->FindComponentByClass<USphereComponent>();
}

void AStageManager::ActivateDRay() //Used only for testing purposes
{
	DRayActor->SetActorHiddenInGame(false);
	DRayCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void AStageManager::ActivateFlamets() //Used only for testing purposes
{
	FlametActor->SetActorHiddenInGame(false);
	FlametWallActor->SetActorHiddenInGame(false);
	FlametCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	FlametWallCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void AStageManager::ActivatePendulum() //Used only for testing purposes
{
	PendulumActor->SetActorHiddenInGame(false);
	PendulumCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}
