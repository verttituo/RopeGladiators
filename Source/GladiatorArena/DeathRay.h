// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Vector.h"
#include "DeathRay.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GLADIATORARENA_API UDeathRay : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDeathRay();

	UPROPERTY(EditAnywhere)
	AActor* DRayActor;

	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* DRayCollision;

	UPROPERTY(EditAnywhere)
	AActor* DRayMesh;

	UPROPERTY(EditAnywhere)
	FVector DRaySize;

	UFUNCTION(BlueprintCallable, Category = "DeathRay")
	void SetDRay();

	UFUNCTION(BlueprintCallable, Category = "DeathRay")
	void GrowDRay();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//UFUNCTION(BlueprintCallable, Category = "Implemented Miro")
		//void ResetVariables();
	
	/*UPROPERTY (EditAnywhere)
	UPrimitiveComponent* RayCollision;

	UPROPERTY(EditAnywhere)
	AActor* ARayCollision;*/
};
