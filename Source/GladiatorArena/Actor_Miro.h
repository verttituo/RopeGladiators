// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Actor_Miro.generated.h"

UCLASS()
class GLADIATORARENA_API AActor_Miro : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActor_Miro();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UFUNCTION(BlueprintImplementableEvent, Category = "Implemented Miro")
		//void add_miro();

	UFUNCTION(BlueprintCallable, Category = "Implemented Miro")
		void set_miro(int32 value);

	UFUNCTION(BlueprintCallable, Category = "Implemented Miro")
		void false_miro();

	UFUNCTION(BlueprintCallable, Category = "Implemented Miro")
		void get_miro(int32& p1_point, int32& p2_point, int32& rounds, FString& roundsLeft, int32& currentRound);

	UFUNCTION(BlueprintCallable, Category = "Implemented Miro")
		void AddToCurrentRoundAmount();
	

private:

	FString roundsLeftString = "";

	int32 currentRoundAmount = 0;
	int32 totalRoundAmount = 15;
	int32 p1_points = 31;
	int32 p2_points = 32;




};
