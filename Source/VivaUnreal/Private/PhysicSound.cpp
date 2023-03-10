// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicSound.h"
#include "Tools.h"

// Sets default values for this component's properties
UPhysicSound::UPhysicSound()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPhysicSound::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	
}


// Called every frame
void UPhysicSound::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
	UTools::Log("Dubscr is a biatch");
	TestVariable = 0;
}

