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

}

//player sets round amount, called from BP
void AGameManager::SetRoundAmountToPlay(int32 roundSetToCode)
{

	totalRoundAmountSet = roundSetToCode;

}


void AGameManager::GetValuesFromCodeToBP(int32 & p1_point, int32 & p2_point, int32 & p3_point, int32 & p4_point, int32 & totalRoundAmount, FString & roundAmountsToResultScreen, int32 & currentRound)
{

	p1_point = p1_points;
	p2_point = p2_points;
	p3_point = p3_points;
	p4_point = p4_points;
	totalRoundAmount = totalRoundAmountSet;
	currentRound = currentRound;

	roundAmountsToResultScreen = FString::FromInt(currentRoundPlaying) + "/" + FString::FromInt(totalRoundAmountSet);

}

// Adds to player scores based on the played round. Called in the level BP.
void AGameManager::AddToPlayerScores(TArray<int32> roundScoreArray)
{
	p1_points += roundScoreArray[0];
	p2_points += roundScoreArray[1];
	p3_points += roundScoreArray[2];
	p4_points += roundScoreArray[3];
}

void AGameManager::AddToCurrentRoundAmount()
{
	currentRoundPlaying++;
}

void AGameManager::ResetCodeVariables()
{
	currentRoundPlaying = 0;
}

