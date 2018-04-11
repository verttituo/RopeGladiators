// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAIController.h"
#include "Engine/World.h"
#include "AI/Navigation/NavigationSystem.h"
#include "Engine/TargetPoint.h"
#include "EngineUtils.h"
#include "UObjectIterator.h"
#include <string>
#include "Engine/StaticMeshActor.h"
#include "GameFramework/PlayerController.h"

void AEnemyAIController::BeginPlay() 
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("AIController possessing enemy"));

	player = GetWorld()->GetFirstPlayerController()->GetPawn();
	Enemy = Cast<APawn>(GetPawn());
	//target = FindObject<AActor>(GetWorld(), TEXT("Actor_1"));

	//TODO find targetPoints and add them into array
	for (TActorIterator<ATargetPoint> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		
		//Mesh=*ActorItr;
		targ = *ActorItr;
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorItr->GetName());
		UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorItr->GetActorLocation().ToString());

	}

	
}
void AEnemyAIController::Tick(float DeltaTime) 
{


	

	
	

	//UE_LOG(LogTemp, Warning, TEXT("MOVING TOWARDS CHARACTER %s AT POSITION %s"), *player->GetName(), *player->GetActorLocation().ToString());

	//MoveToActor(player,3000);

	//MoveToLocation(player->GetActorLocation());


	//MoveToActor()


}









