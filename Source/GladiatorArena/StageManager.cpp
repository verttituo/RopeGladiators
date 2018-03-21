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

	setobjets();


	//MyActor->Destroy();
	//MyActor->SetActorEnableCollision(ECollisionEnabled::QueryAndPhysics);
	//Trigger = MyActor->FindComponentByClass<UPrimitiveComponent>();
	//Trigger->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	//TriggersCube->SetActorHiddenInGame(true);
}


void AStageManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStageManager::TrapSpawn()
{
	//UE_LOG(LogTemp, Warning, TEXT("Spawnataan trap1"));
	//MyActor->SetActorHiddenInGame(false);	
	//TriggersCube->SetActorHiddenInGame(false);
	//Trigger->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	randomNum= FMath::FRandRange(1, 5);
	tempNum = &randomNum;


	
	switch (randomNum)
	{
	case 1 :
		UE_LOG(LogTemp, Warning, TEXT("Spawnataan trap1"));
		
		TrapMesh1->SetActorHiddenInGame(false);
		TrapTriggerComponent1->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		break;
	case 2:
		UE_LOG(LogTemp, Warning, TEXT("Spawnataan trap2"));
		TrapMesh2->SetActorHiddenInGame(false);
		TrapTriggerComponent2->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		break;
	case 3:
		UE_LOG(LogTemp, Warning, TEXT("Spawnataan trap3"));
		TrapMesh3->SetActorHiddenInGame(false);
		TrapTriggerComponent3->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		break;
	case 4:
		UE_LOG(LogTemp, Warning, TEXT("Spawnataan trap4"));
		TrapMesh4->SetActorHiddenInGame(false);
		TrapTriggerComponent4->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		break;
	default:
		break;
	}
}

void AStageManager::setobjets()
{

	TrapTriggerComponent1 = TrapTriggerActor1->FindComponentByClass<UPrimitiveComponent>();
	TrapTriggerComponent2 = TrapTriggerActor2->FindComponentByClass<UPrimitiveComponent>();
	TrapTriggerComponent3 = TrapTriggerActor3->FindComponentByClass<UPrimitiveComponent>();
	TrapTriggerComponent4 = TrapTriggerActor4->FindComponentByClass<UPrimitiveComponent>();

}
