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

	/* Create Actors that will be set reference to Traps triggerActor*/
	UPROPERTY(EditAnywhere)
	AActor* TrapTriggerActor1;
	UPROPERTY(EditAnywhere)
	AActor* TrapTriggerActor2;
	UPROPERTY(EditAnywhere)
	AActor* TrapTriggerActor3;
	UPROPERTY(EditAnywhere)
	AActor* TrapTriggerActor4;
	////////////////////////////////

	/* Create components that will be set to reference TrapTriggerActors, so that we get access to triggerActors Collision*/
	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* TrapTriggerComponent1;
	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* TrapTriggerComponent2;
	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* TrapTriggerComponent3;
	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* TrapTriggerComponent4;
	//////////////////////////

	/* Create Actors that will be set to reference Traps triggerActors staticMeshActor childobject. Reason is to change its Visibility in Game*/
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

	/* Function that activates and "spawns" traps to level at random order*/
	UFUNCTION(BlueprintCallable, Category = "StageManager")
	void TrapSpawn();

	/* Function to set TrapTriggerComponents reference traps triggerActors Collision*/
	void setobjets();

private:
	int randomNum; // Random number to decide what trap will be activated.
	
	TArray<int32> trapArray; //Array to store activated traps
	

};
