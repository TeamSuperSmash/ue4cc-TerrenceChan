// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Pawn.h"
#include "PawnWithCamera.generated.h"

UCLASS()
class HOWTO_PLAYERCAMERA_API APawnWithCamera : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APawnWithCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
    UPROPERTY(EditAnywhere)
        USpringArmComponent* OurCameraSpringArm;

    UPROPERTY(EditAnywhere)
    UStaticMeshComponent* OurStaticMesh;

    UCameraComponent* OurCamera;

public:
    // Input variables
    FVector2D MovementInput;
    FVector2D CameraInput;
    float zoomFactor;
    bool bZoomingIn;

    // Input functions
    void MoveForward(float AxisValue);
    void MoveRight(float AxisValue);
    void PitchCamera(float AxisValue);
    void YawCamera(float AxisValue);
    void ZoomIn();
    void ZoomOut();

    // Zoom variables
    UPROPERTY(EditAnywhere)
        float zoomInSpeedMultiplier = 0.5f;
    UPROPERTY(EditAnywhere)
        float zoomOutSpeedMultiplier = 0.25f;
    UPROPERTY(EditAnywhere)
        float maxZoomFOV = 90.0f;
    UPROPERTY(EditAnywhere)
        float minZoomFOV = 60.0f;
    UPROPERTY(EditAnywhere)
        float maxZoomDistance = 400.0f;
    UPROPERTY(EditAnywhere)
        float minZoomDistance = 300.0f;
    UPROPERTY(EditAnywhere)
        float moveSpeedMultiplier = 100.0f;
    UPROPERTY(EditAnywhere)
        float minPitch = -80.0f;
    UPROPERTY(EditAnywhere)
        float maxPitch = -10.0f;

};
