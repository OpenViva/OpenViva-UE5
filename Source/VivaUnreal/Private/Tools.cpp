// Fill out your copyright notice in the Description page of Project Settings.


#include "Tools.h"

void UTools::LogError(FString message, float length)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, length, FColor::Red, message);
	}
}

void UTools::LogWarning(FString message, float length)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, length, FColor::Yellow, message);
	}
}

void UTools::Log(FString message, float length)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, length, FColor::White, message);
	}
}