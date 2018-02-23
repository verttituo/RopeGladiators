// Fill out your copyright notice in the Description page of Project Settings.

#include "blueprintimplementableActor.h"


// Sets default values
AblueprintimplementableActor::AblueprintimplementableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AblueprintimplementableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AblueprintimplementableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AblueprintimplementableActor::ResultScreen()
{
	UE_LOG(LogTemp, Warning, TEXT("Show ResultScreen"))
}