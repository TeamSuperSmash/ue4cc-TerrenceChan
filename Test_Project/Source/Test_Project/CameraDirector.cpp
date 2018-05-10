// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraDirector.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACameraDirector::ACameraDirector()
{ 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACameraDirector::BeginPlay()
{	Super::BeginPlay();
	
}

// Called every frame
void ACameraDirector::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    smoothBlendTime = 3.0f;
    timeBetweenCameraChanges = 2.0f + smoothBlendTime;

    timeToNextCamChange -= DeltaTime;

    if (timeToNextCamChange <= 0.0f)
    {
        timeToNextCamChange += timeBetweenCameraChanges;

        cameraIndex++;
        if (cameraIndex >= (int)CameraList.Max())
        {
            cameraIndex = 0;
        }

        // Actor that handles control of local player.
        APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);

        if (OurPlayerController)
        {
            if (CameraList[cameraIndex] != nullptr)
            {
                // Smooth blend between cameras.
                OurPlayerController->SetViewTargetWithBlend(CameraList[cameraIndex], smoothBlendTime);
            }
        }
    }
}

