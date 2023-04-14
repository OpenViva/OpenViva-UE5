// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicSound.generated.h"
#include <Engine/DataTable.h>

class USoundCue;

USTRUCT(BlueprintType)
struct FPhysicSoundSettings
{

        UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        float HardMinVel;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        float SoftMinVel;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        float SoftMinPitch;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        float SoftMaxPitch;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        float DragMinVel;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        float DragMaxVel;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        float DragMinPitch;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        float DragMaxPitch;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        float DragMaxVolumeVel;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class VIVAUNREAL_API UPhysicSound : public UActorComponent
{

public:
    UPhysicSound();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        USoundCue* CollisionSoundsSoft;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        USoundCue* CollisionSoundsHard;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        TArray<UPrimitiveComponent*> IgnoreSoundsFrom;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        USoundCue* DragSoundLoop;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        UPrimitiveComponent* RigidBody;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Physics Sound")
        UDataTable* PhysicSoundSettingsDataTable;

    UFUNCTION()
        void OnCollisionEnter(FHitResult Hit);

    UFUNCTION()
        void OnCollisionStay(FHitResult Hit);

    UFUNCTION()
        void Drag();

private:
    FPhysicSoundSettings Settings;
    float LastCollisionSoundTime;
    FTimerHandle DragTimerHandle;
    bool IsDragging;
    bool PlaySounds;

    // Omitted "dragCoroutine" as we are using a Timer instead

};