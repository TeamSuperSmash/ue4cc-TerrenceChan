// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawn.h"


// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Set pawn to be controlled by lowest-numbered player.
    AutoPossessPlayer = EAutoReceiveInput::Player0;

    // Create a dummy root component we can attach things to.
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    // Create a camera and visible object.
    UCameraComponent* OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCamera"));
    OurVisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OurVisibleComponent"));
    // Attach camera and visible object component to root component.
    // Offset and rotate camera.
    OurCamera->SetupAttachment(RootComponent);
    OurCamera->SetRelativeLocation(FVector(-250.0f, 0.0f, 250.0f));
    OurCamera->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
    OurVisibleComponent->SetupAttachment(RootComponent);

    moveSpeed = 100.0f;
    gracePeriod = 1.0f;
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Handling grow and shrink based on "Grow" action.
    float CurrentScale = OurVisibleComponent->GetComponentScale().X;
    if (bGrace && bGrowing)
    {
        CurrentScale = 2.0f;
        graceCounter = gracePeriod;
    }
    if (bGrowing)
    {
        // Grow to double size over one second.
        CurrentScale += DeltaTime;
    }
    else
    {
        // Shrink half as fast as grow.
        CurrentScale -= (DeltaTime * 0.5f);
    }
    // Make sure to clamp to starting size, and expand to twice only.
    CurrentScale = FMath::Clamp(CurrentScale, 1.0f, 2.0f);
    OurVisibleComponent->SetWorldScale3D(FVector(CurrentScale));

    // Handle movement based on MoveX and MoveY axis.
    if (!CurrentVelocity.IsZero())
    {
        bMoving = true;
        moveSpeed += 10.0f;

        FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime);
        SetActorLocation(NewLocation);
    }
    else
    {
        bMoving = false;
        moveSpeed -= 10.0f;
    }
    moveSpeed = FMath::Clamp(moveSpeed, 100.0f, 500.0f);

    if (bMoving)
    {
        if (graceCounter < gracePeriod)
        {
            UE_LOG(LogTemp, Warning, TEXT("Grace is true! Grace counter is %f"), graceCounter);
            graceCounter += DeltaTime;
            bGrace = true;
        }
        else
        {
            //UE_LOG(LogTemp, Warning, TEXT("Grace is false!"));
            bGrace = false;
        }
    }
    else
    {
        //UE_LOG(LogTemp, Warning, TEXT("Grace is reset!"));
        bGrace = false;
        graceCounter = 0.0f;
    }
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Respond when "Grow" key is pressed or released.
    InputComponent->BindAction("Grow", IE_Pressed, this, &AMyPawn::StartGrowing);
    InputComponent->BindAction("Grow", IE_Released, this, &AMyPawn::StopGrowing);

    // Respond every frame to MoveX and MoveY axis.
    InputComponent->BindAxis("MoveX", this, &AMyPawn::Move_XAxis);
    InputComponent->BindAxis("MoveY", this, &AMyPawn::Move_YAxis);
}

void AMyPawn::Move_XAxis(float AxisValue)
{
    // Move at 100 units per second forward or backward.
    CurrentVelocity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * moveSpeed;
}

void AMyPawn::Move_YAxis(float AxisValue)
{
    // Move at 100 units per second left or right.
    CurrentVelocity.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * moveSpeed;
}

void AMyPawn::StartGrowing()
{
    bGrowing = true;
}

void AMyPawn::StopGrowing()
{
    bGrowing = false;
}

