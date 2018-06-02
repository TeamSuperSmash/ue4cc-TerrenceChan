// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS()
class HOWTO_VTE_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    // Time taken before door opens.
    UPROPERTY(EditAnywhere)
        int CountdownInterval;

    int CountdownTime;

    void AdvanceTimer();

    void CountdownHasFinished();

    bool bOpen;
	
    FTimerHandle CountdownTimerHandle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UStaticMeshComponent* DoorMesh;

    FVector Position;
    FRotator Rotation;
};
