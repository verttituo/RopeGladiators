// Fill out your copyright notice in the Description page of Project Settings.

#include "DeathRay.h"
#include "Engine.h"


// Sets default values for this component's properties
UDeathRay::UDeathRay()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDeathRay::BeginPlay()
{
	
	Super::BeginPlay();
	
	SetDRay();
	//DRaySize = FVector(5, 5, 5);
	// ...
	//ARayCollision->SetActorHiddenInGame(true);
	//ARayCollision->SetActorEnableCollision(false);
	//DRayActor->SetActorScale3D(DRaySize);
}


// Called every frame
void UDeathRay::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	//TODO: Make deathray change size depending on Vector(Vecotr changes actors size)
	DRayMesh->SetActorScale3D(DRaySize);
	//DRayActor->GetActorBounds(false, DRaySize, DRaySize);
	// ...
}

//void UDeathRay::ResetVariables()
//{
//}

void UDeathRay::SetDRay()
{
	//DRayCollision = DRayActor->FindComponentByClass<UPrimitiveComponent>();
	UE_LOG(LogTemp,Warning,TEXT("DEEEEETTTTHHHH"))
}

void UDeathRay::GrowDRay()
{
	//DRaySize.Size = DRaySize.X * .1f, DRaySize.Y * .1f;
}