// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnWithCamera.h"


// Sets default values
APawnWithCamera::APawnWithCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

#pragma region SpringArm
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    OurCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
    OurCameraSpringArm->SetupAttachment(RootComponent);
    OurCameraSpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f),
        FRotator(-60.0f, 0.0f, 0.0f));
    OurCameraSpringArm->TargetArmLength = 400.0f;
    OurCameraSpringArm->bEnableCameraLag = true;
    OurCameraSpringArm->CameraLagSpeed = 3.0f;
#pragma endregion

    OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("GameCamera"));
    OurCamera->SetupAttachment(OurCameraSpringArm, USpringArmComponent::SocketName);

    OurStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualMesh"));
    OurStaticMesh->SetupAttachment(RootComponent);
    static ConstructorHelpers::FObjectFinder<UStaticMesh>
        OurStaticMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone"));
    if (OurStaticMeshAsset.Succeeded())
    {
        OurStaticMesh->SetStaticMesh(OurStaticMeshAsset.Object);
        OurStaticMesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), 
            FRotator(90.0f, 0.0f, 270.0f));
    }

    // Take control of default player.
    AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void APawnWithCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawnWithCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    {
        if (bZoomingIn)
        {
            // Zoom in over half of second.
            zoomFactor += DeltaTime / zoomInSpeedMultiplier;
        }
        else
        {
            // Zoom out over quarter of second.
            zoomFactor -= DeltaTime / zoomOutSpeedMultiplier;
        }
        zoomFactor = FMath::Clamp<float>(zoomFactor, 0.0f, 1.0f);
        // Blend our camera's FOV and our SpringArm's length based on zoomFactor.
        OurCamera->FieldOfView = FMath::Lerp<float>(maxZoomFOV, minZoomFOV, zoomFactor);
        OurCameraSpringArm->TargetArmLength = FMath::Lerp<float>(maxZoomDistance, minZoomDistance, zoomFactor);
    }

    {
        // Rotate our actor's yaw, which will turn our camera because we're attached to it.
        FRotator NewRotation = GetActorRotation();
        NewRotation.Yaw += CameraInput.X;
        SetActorRotation(NewRotation);
    }

    {
        // Rotate our actor's pitch, but limit it so we always look downward.
        FRotator NewRotation = OurCameraSpringArm->GetComponentRotation();
        NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch + CameraInput.Y, minPitch, maxPitch);
        OurCameraSpringArm->SetWorldRotation(NewRotation);
    }

    {
        // Handle movement based on "MoveX" and "MoveY" axes.
        if (!MovementInput.IsZero())
        {
            // Scale our movement input axis by 100 units per second.
            MovementInput = MovementInput.GetSafeNormal() * moveSpeedMultiplier;
            FVector NewLocation = GetActorLocation();
            NewLocation += GetActorForwardVector() * MovementInput.X * DeltaTime;
            NewLocation += GetActorRightVector() * MovementInput.Y * DeltaTime;
            SetActorLocation(NewLocation);
        }
    }
}

// Called to bind functionality to input
void APawnWithCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Hook up events for "ZoomIn"
    InputComponent->BindAction("ZoomIn", IE_Pressed, this, &APawnWithCamera::ZoomIn);
    InputComponent->BindAction("ZoomIn", IE_Released, this, &APawnWithCamera::ZoomOut);

    // Hook up every-frame handling for our four axes.
    InputComponent->BindAxis("MoveForward", this, &APawnWithCamera::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &APawnWithCamera::MoveRight);
    InputComponent->BindAxis("CameraPitch", this, &APawnWithCamera::PitchCamera);
    InputComponent->BindAxis("CameraYaw", this, &APawnWithCamera::YawCamera);
}

void APawnWithCamera::MoveForward(float AxisValue)
{
    MovementInput.X = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void APawnWithCamera::MoveRight(float AxisValue)
{
    MovementInput.Y = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void APawnWithCamera::PitchCamera(float AxisValue)
{
    CameraInput.Y = AxisValue;
}

void APawnWithCamera::YawCamera(float AxisValue)
{
    CameraInput.X = AxisValue;
}

void APawnWithCamera::ZoomIn()
{
    bZoomingIn = true;
}

void APawnWithCamera::ZoomOut()
{
    bZoomingIn = false;
}

