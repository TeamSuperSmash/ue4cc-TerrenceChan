// Fill out your copyright notice in the Description page of Project Settings.

#include "Door.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
    DoorMesh->SetupAttachment(RootComponent);

    CountdownInterval = 3;

    Position.X = 0.0f;
    Position.Y = 0.0f;
    Position.Z = 0.0f;

    Rotation.Yaw = 0.0f;
    Rotation.Pitch = 0.0f;
    Rotation.Roll = 0.0f;
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
    GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ADoor::AdvanceTimer, 1.0f, true);
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor::AdvanceTimer()
{
    ++CountdownTime;
    if (CountdownTime >= CountdownInterval)
    {
        // Done counting, so stop timer.
        GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
        // Do something special.
        CountdownHasFinished();
    }
}

void ADoor::CountdownHasFinished()
{
    if (!bOpen)
    {
        Rotation.Yaw += 90.0f;
        DoorMesh->SetRelativeRotation(Rotation);
        bOpen = true;
    }
    else
    {
        Rotation.Yaw -= 90.0f;
        DoorMesh->SetRelativeRotation(Rotation);
        bOpen = false;
    }

    CountdownTime = 0;
    GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ADoor::AdvanceTimer, 1.0f, true);
}

