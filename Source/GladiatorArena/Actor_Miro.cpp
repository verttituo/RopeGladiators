// Fill out your copyright notice in the Description page of Project Settings.




#include "Actor_Miro.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/Core/Public/Math/Vector.h"
#include <string>



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


	IntArray.Add(5);
	if (IntArray[0]==5)
	{
		UE_LOG(LogTemp, Warning, TEXT("number in array is: 5") )
	}
	
}

// Called every frame
void AActor_Miro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	

}

void AActor_Miro::set_miro(int32 value)
{
	totalRoundAmount = value;


	//for testing
	FString val = FString::FromInt(value);
	UE_LOG(LogTemp, Warning, TEXT("Calling from Blueprint value is: %s"), *val )
}

void AActor_Miro::false_miro()
{

	UE_LOG(LogTemp, Warning, TEXT("Infinite loop"))
}

//with int32& p1 Blueprint treats value as "out", this way we can create "multiple" returns to show in blueprint
//forums.unrealengine.com/development-discussion/c-gameplay-programming/24776-how-to-define-a-function-with-multiple-return-values-as-blueprint-in-c
void AActor_Miro::get_miro(int32& p1, int32& p2, int32& rounds, FString& roundsLeft, int32& currentRound)
{
	//TODO name all variables and functions with better names
	p1 = 32;
	p2 = 55;
	rounds = totalRoundAmount;
	currentRound = currentRoundAmount;

	
	roundsLeft = FString::FromInt(currentRoundAmount) + "/" + FString::FromInt(totalRoundAmount);




	//return;
}

void AActor_Miro::AddToCurrentRoundAmount()
{
	currentRoundAmount++;
	return;
}

void AActor_Miro::ResetVariables()
{
	currentRoundAmount = 0;


}

