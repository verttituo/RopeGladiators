// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/TargetPoint.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "MyAITest.generated.h"


UCLASS()
class GLADIATORARENA_API AMyAITest : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyAITest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
		AActor* Enemy;
	UPROPERTY(EditAnywhere)
		AActor* player;
	UPROPERTY(EditAnywhere)
		ATargetPoint* targ;
	UPROPERTY(EditAnywhere)
		TArray<ATargetPoint*> targets;
	UPROPERTY(EditAnywhere)
		AAIController* TestController;

	UFUNCTION(BlueprintCallable, Category = "MyAITest")
		void nextTargetpoint(int32 & index, TArray<ATargetPoint*> & targs);

private:
	UPROPERTY(EditAnywhere)
		int32 theIndex;
};
