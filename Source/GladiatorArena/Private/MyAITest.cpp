// Fill out your copyright notice in the Description page of Project Settings.

#include "MyAITest.h"
#include "Engine/TargetPoint.h"
#include "EngineUtils.h"
#include "UObjectIterator.h"
#include "GameFramework/Pawn.h"
#include "Engine.h"
#include "Collision.h"

// Sets default values
AMyAITest::AMyAITest()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}


void AMyAITest::BeginPlay()
{
	Super::BeginPlay();
	

	//gets Targetpoints from world to array
	for (TActorIterator<ATargetPoint> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		targ = *ActorItr;
		//UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorItr->GetName());
		//UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorItr->GetActorLocation().ToString());
		targets.Add(targ);
	}



	TestController = Cast<AAIController>((Controller));
}


void AMyAITest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//pathfinding
	//TestController->MoveToLocation(targ->GetTargetLocation());

}

// Called to bind functionality to input
void AMyAITest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyAITest::nextTargetpoint(int32 & index, TArray<ATargetPoint*> & targs)
{
	

		index =  + 1;

	//col = targets[0]->FindComponentByClass<UBoxComponent>();
	//index = index + 1;
	UE_LOG(LogTemp, Warning, TEXT("target reached!"));
}

