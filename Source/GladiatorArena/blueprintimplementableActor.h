// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "blueprintimplementableActor.generated.h"

UCLASS()
class GLADIATORARENA_API AblueprintimplementableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AblueprintimplementableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Implemented")
		void CPP_FUNCTION();

	UFUNCTION(BlueprintCallable, Category = "Implemented")
	void ResultScreen();
	
};
