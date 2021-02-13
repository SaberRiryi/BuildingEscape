// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"
// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	FString Log = TEXT("Hello");

	//a pointer is just a memory address to something

	// //this creates a pointer PrtLog. When used in a declaration the 
	// //ampersand in &Log means a reference, but in an assignment, it's
	// //the address in memory of the Log variable
	// FString* PrtLog = &Log;

	// Log.Len();

	// //Then we dereference with *PrtLog and we put it in parens because the dot
	// //in .Len() has precedence. So we use parens to dereference the object
	// //first then call .Len()
	// (*PrtLog).Len();

	// //This is the simplified sytax that dereferences and calls the Len function
	// PrtLog->Len();

	// UE_LOG(LogTemp, Warning, TEXT("%s"), **PrtLog);
	
	
	
	UE_LOG(LogTemp, Display, TEXT("%s"), *GetOwner()->GetName());

	FString ObjectPosition = GetOwner()->GetActorLocation().ToString();
	UE_LOG(LogTemp, Display, TEXT("%s is at position: %s"), *GetOwner()->GetName(), *ObjectPosition);
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

