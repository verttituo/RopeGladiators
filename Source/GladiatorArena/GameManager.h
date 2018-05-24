// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameManager.generated.h"

UCLASS()
class GLADIATORARENA_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void SetRoundAmountToPlay(int32 roundSetToCode);

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void GetValuesFromCodeToBP(int32& p1_point, int32& p2_point, int32& p3_point, int32& p4_point, int32& totalRoundAmount, int32& currentRound);

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void AddToPlayerScores(TArray<int32> roundScoreArray);

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void AddToCurrentRoundAmount();

	UFUNCTION(BlueprintCallable, Category = "GameManager")
		void ResetCodeVariables();


private:

	int32 currentRoundPlaying = 0;
	int32 totalRoundAmountSet = 15;

	int32 p1_points = 0;
	int32 p2_points = 0;
	int32 p3_points = 0;
	int32 p4_points = 0;

	
};
