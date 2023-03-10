// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Tools.generated.h"

/**
 * 
 */
UCLASS()
class VIVAUNREAL_API UTools : public UObject
{
	GENERATED_BODY()

public:
	static void LogError(FString message, float length = 5);

	static void LogWarning(FString message, float length = 5);

	static void Log(FString message, float length = 5);
};
