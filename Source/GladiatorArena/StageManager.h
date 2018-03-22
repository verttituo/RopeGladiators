// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StageManager.generated.h"

UCLASS()
class GLADIATORARENA_API AStageManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStageManager();

	UPROPERTY(EditAnywhere)
	AActor* TrapTriggerActor1;
	UPROPERTY(EditAnywhere)
	AActor* TrapTriggerActor2;
	UPROPERTY(EditAnywhere)
	AActor* TrapTriggerActor3;
	UPROPERTY(EditAnywhere)
	AActor* TrapTriggerActor4;
	////////////////////////////////
	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* TrapTriggerComponent1;
	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* TrapTriggerComponent2;
	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* TrapTriggerComponent3;
	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* TrapTriggerComponent4;
	//////////////////////////
	UPROPERTY(EditAnywhere)
		AActor* TrapMesh1;
	UPROPERTY(EditAnywhere)
		AActor* TrapMesh2;
	UPROPERTY(EditAnywhere)
		AActor* TrapMesh3;
	UPROPERTY(EditAnywhere)
		AActor* TrapMesh4;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	UFUNCTION(BlueprintCallable, Category = "StageManager")
	void TrapSpawn();

	void setobjets();

private:
	int randomNum;
	int * tempNum;
	
	TArray<int32> trapArray;
	

};
