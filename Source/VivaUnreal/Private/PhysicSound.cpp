// Fill out your copyright notice in the Description page of Project Settings.
#include "PhysicSound.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Math/UnrealMathUtility.h"

UPhysicSound::UPhysicsSound()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UPhysicSound::BeginPlay()
{
    Super::BeginPlay();

    if (PhysicSoundSettingsDataTable)
    {
        static const FString ContextString(TEXT("PhysicsSoundSettingsContext"));
        Settings = *PhysicSoundSettingsDataTable->FindRow<FPhysicSoundSettings>(TEXT("DefaultSettings"), ContextString, true);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("[PhysicsSound] Missing PhysicsSoundSettingsDataTable for %s"), *GetOwner()->GetName());
    }

    RigidBody = GetOwner()->FindComponentByClass<UPrimitiveComponent>();
    if (!RigidBody)
    {
        UE_LOG(LogTemp, Error, TEXT("[PhysicsSound] Missing RigidBody reference for %s"), *GetOwner()->GetName());
    }

    // Setup OnCollisionEnter and OnCollisionStay event bindings
    RigidBody->OnComponentHit.AddDynamic(this, &UPhysicsSound::OnCollisionEnter);
    RigidBody->OnComponentBeginOverlap.AddDynamic(this, &UPhysicsSound::OnCollisionStay);
}

void UPhysicSound::OnCollisionEnter(FHitResult Hit)
{
    if (!PlaySounds) return;

    if (UGameplayStatics::GetTimeSeconds(GetWorld()) < 2.0f)
    {
        return;
    }

    // Omitted sourceItem-related code, as it's specific to your project

    if (IgnoreSoundsFrom.Contains(Hit.GetActor()))
    {
        return;
    }

    AActor* OtherActor = Hit.GetActor();
    if (!OtherActor) return;

    UPrimitiveComponent* OtherComponent = Cast<UPrimitiveComponent>(OtherActor->GetComponentByClass(UPrimitiveComponent::StaticClass()));
    if (!OtherComponent) return;

    if (UGameplayStatics::GetTimeSeconds(GetWorld()) - LastCollisionSoundTime < 0.1f)
    {
        return;
    }

    FVector AvgPos = Hit.Location; // Adjust this line if needed to compute the average contact position
    FVector RelativeVelocity = RigidBody->GetComponentVelocity() - OtherComponent->GetComponentVelocity();
    float SqVel = RelativeVelocity.SizeSquared();

    if (SqVel > FMath::Square(Settings->HardMinVel) && CollisionSoundsHard)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), CollisionSoundsHard, AvgPos);

        LastCollisionSoundTime = UGameplayStatics::GetTimeSeconds(GetWorld());
    }
    else if (SqVel > FMath::Square(Settings->SoftMinVel) && CollisionSoundsSoft)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), CollisionSoundsSoft, AvgPos);

        float Vel = FMath::Sqrt(SqVel);
        float T = (Vel - Settings->SoftMinVel) / (Settings->HardMinVel - Settings->SoftMinVel);
        float Volume = FMath::Min(1.0f, T);
        float Pitch = FMath::Lerp(Settings->SoftMinPitch, Settings->SoftMaxPitch, T);

        LastCollisionSoundTime = UGameplayStatics::GetTimeSeconds(GetWorld());
    }
}

void UPhysicSound::OnCollisionStay(FHitResult Hit)
{
    if (!Settings || !DragSoundLoop)
    {
        return;
    }

    if (UGameplayStatics::GetTimeSeconds(GetWorld()) < 2.0f)
    {
        return;
    }

    AActor* OtherActor = Hit.GetActor();
    if (!OtherActor) return;

    UPrimitiveComponent* OtherComponent = Cast<UPrimitiveComponent>(OtherActor->GetComponentByClass(UPrimitiveComponent::StaticClass()));
    if (!OtherComponent) return;

    FVector RelativeVelocity = RigidBody->GetComponentVelocity() - OtherComponent->GetComponentVelocity();
    if (RelativeVelocity.SizeSquared() > Settings.DragMinVel * Settings.DragMinVel)
    {
        IsDragging = true;
        if (!DragTimerHandle.IsValid())
        {
            GetWorld()->GetTimerManager().SetTimer(DragTimerHandle, this, &UPhysicsSound::Drag, GetWorld()->GetDeltaSeconds(), true);
        }
    }
}

void UPhysicSound::Drag()
{
    if (!IsDragging)
    {
        GetWorld()->GetTimerManager().ClearTimer(DragTimerHandle);
        DragSoundHandle->Stop();
        return;
    }

    if (!DragSoundHandle || !DragSoundHandle->IsPlaying())
    {
        DragSoundHandle = USoundManager::RequestHandle(FVector::ZeroVector, GetOwner()->GetTransform());
        DragSoundHandle->Play(DragSoundLoop);
        DragSoundHandle->SetLooping(true);
    }

    float Vel = RigidBody->GetPhysicsLinearVelocity().Size();
    DragSoundHandle->SetPitch(FMath::Lerp(Settings->DragMinPitch, Settings->DragMaxPitch, FMath::GetClampedRatio(Settings->DragMinVel, Settings->DragMaxVel, Vel)));
    DragSoundHandle->SetVolume(FMath::Clamp01(Vel / Settings->DragMaxVolumeVel));
    IsDragging = false;
}

