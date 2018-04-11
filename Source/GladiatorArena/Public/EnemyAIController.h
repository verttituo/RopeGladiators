// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/TargetPoint.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"


/**
 * 
 */
UCLASS()
class GLADIATORARENA_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

		virtual void BeginPlay() override;
	
		virtual void Tick(float DeltaSeconds) override;

	

		UPROPERTY(EditAnywhere)
		AActor* Enemy;
		UPROPERTY(EditAnywhere)
		AActor* player;
		UPROPERTY(EditAnywhere)
			AStaticMeshActor* Mesh;
		UPROPERTY(EditAnywhere)
			ATargetPoint* targ;
		//AActor* target;
		/*UPROPERTY(EditAnywhere)
		ATargetPoint* Target;*/
		//ATargetPoint Target;

		//TArray<ATargetPoint> GetTargets();
		//void FindAllActors(UWorld* World, TArray(Target*)&Out)
		
};
