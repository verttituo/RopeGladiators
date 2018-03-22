// Fill out your copyright notice in the Description page of Project Settings.

#include "GameManager.h"


// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (hidden)
	{
		//actor->Destroy();
		actor->SetActorHiddenInGame(true);
		actor->SetActorEnableCollision(false);
		
		//actor->SetActorTickEnabled(false);
	}

}

//player sets round amount, called from BP
void AGameManager::SetRoundAmountToPlay(int32 roundSetToCode)
{

	totalRoundAmountSet = roundSetToCode;

}


void AGameManager::GetValuesFromCodeToBP(int32 & p1_point, int32 & p2_point, int32 & totalRoundAmount, FString & roundAmountsToResultScreen, int32 & currentRound)
{

	p1_point = p1_points;
	p2_point = p2_points;
	totalRoundAmount = totalRoundAmountSet;
	currentRound = currentRoundPlaying;

	roundAmountsToResultScreen = FString::FromInt(currentRoundPlaying) + "/" + FString::FromInt(totalRoundAmountSet);

}

void AGameManager::AddToCurrentRoundAmount()
{
	currentRoundPlaying++;
}

void AGameManager::ResetCodeVariables()
{
	currentRoundPlaying = 0;
}




