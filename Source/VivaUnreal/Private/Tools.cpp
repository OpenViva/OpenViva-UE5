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

float UTools::EaseInOutQuad(float t)
{
	return t < 0.5f ? 2.0f * t * t : -1.0f + (4.0f - 2.0f * t) * t;
}

float UTools::GetSide(FVector p, AActor* reference)
{
	FVector localPos = reference->GetTransform().InverseTransformPosition(p);
	return localPos.Z > 0 ? 1.0f : -1.0f;
}

float Bearing(const FTransform& source, const FVector& point)
{
	FVector toSource = source.GetLocation() - point;
	float newFacingYaw = FMath::Atan2(-toSource.X, -toSource.Z) * 180.0f / UE_PI;
	return FMath::FindDeltaAngleDegrees(source.Rotator().Yaw, newFacingYaw);
}
