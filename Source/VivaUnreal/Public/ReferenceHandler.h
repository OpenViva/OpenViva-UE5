// Copyright (C) 2023 OpenViva Team. Licensed under AGPL-3.0.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReferenceHandler.generated.h"


UCLASS()
class VIVAUNREAL_API UReferenceHandler : public UObject
{
	GENERATED_BODY()
	

public:

    UReferenceHandler();

    UFUNCTION(BlueprintCallable, Category = "Reference Manager")
        static UReferenceHandler* GetInstance();

    UPROPERTY(EditAnywhere, Category = "Reference Manager")
        AActor* DayCycleReference;

    UPROPERTY(EditAnywhere, Category = "Reference Manager")
        AActor* AmbienceManagerActor;

    UPROPERTY(EditAnywhere, Category = "Reference Manager")
        AActor* MusicManagerV2Actor;

private:
    static UReferenceHandler* Instance;
};
