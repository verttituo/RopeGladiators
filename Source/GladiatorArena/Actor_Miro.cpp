// Fill out your copyright notice in the Description page of Project Settings.

#include "Actor_Miro.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/Core/Public/Math/Vector.h"



// Sets default values
AActor_Miro::AActor_Miro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActor_Miro::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AActor_Miro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	

}

void AActor_Miro::set_miro(int32 value)
{

	FString val = FString::FromInt(value);
	UE_LOG(LogTemp, Warning, TEXT("Calling from Blueprint value is: %s"), *val )
}

void AActor_Miro::false_miro()
{

	UE_LOG(LogTemp, Warning, TEXT("Infinite loop"))
}

int32 AActor_Miro::get_miro(int32 p1, int32 p2)
{
	int32 p1_points = 31;
	int32 p2_points = 32;

	UE_LOG(LogTemp, Warning, TEXT("Getting value"))

	return p1_points, p2_points;
}

