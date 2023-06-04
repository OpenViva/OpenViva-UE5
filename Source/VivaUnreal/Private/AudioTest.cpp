// Fill out your copyright notice in the Description page of Project Settings.


#include "AudioTest.h"
#include "Components/AudioComponent.h"

// Sets default values
AAudioTest::AAudioTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAudioTest::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAudioTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

