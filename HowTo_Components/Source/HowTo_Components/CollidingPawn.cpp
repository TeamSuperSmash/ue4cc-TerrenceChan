// Fill out your copyright notice in the Description page of Project Settings.

#include "CollidingPawn.h"
#include "CollidingPawnMovementComponent.h"

// Sets default values
ACollidingPawn::ACollidingPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

#pragma region CollideComponent
    // Root component will be a sphere that reacts to physics.
    USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>
        (TEXT("RootComponent"));
    RootComponent = SphereComponent;
    SphereComponent->InitSphereRadius(40.0f);
    SphereComponent->SetCollisionProfileName(TEXT("Pawn"));
#pragma endregion

#pragma region SphereVisual
    // Create and position mesh component so we can see where the sphere is.
    UStaticMeshComponent* SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>
        (TEXT("VisualRepresentation"));
    SphereVisual->SetupAttachment(RootComponent);
    static ConstructorHelpers::FObjectFinder<UStaticMesh>
        SphereVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
    if (SphereVisualAsset.Succeeded())
    {
        SphereVisual->SetStaticMesh(SphereVisualAsset.Object);
        SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
        SphereVisual->SetWorldScale3D(FVector(0.8f));
    }
#pragma endregion

#pragma region ParticleSystem
    // Create particle system that we can activate and deactivate.
    OurParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MovementParticles"));
    OurParticleSystem->SetupAttachment(SphereVisual);
    OurParticleSystem->bAutoActivate = false;
    OurParticleSystem->SetRelativeLocation(FVector(-20.0f, 0.0f, 20.0f));
    static ConstructorHelpers::FObjectFinder<UParticleSystem>
        ParticleAsset (TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
    if (ParticleAsset.Succeeded())
    {
        OurParticleSystem->SetTemplate(ParticleAsset.Object);
    }
#pragma endregion

#pragma region SpringArm
    USpringArmComponent* SpringArm = CreateDefaultSubobject<USpringArmComponent>
        (TEXT("CameraAttachmentArm"));
    SpringArm->SetupAttachment(RootComponent);
    SpringArm->RelativeRotation = FRotator(-45.0f, 0.0f, 0.0f);
    SpringArm->TargetArmLength = 400.0f;
    SpringArm->bEnableCameraLag = true;
    SpringArm->CameraLagSpeed = 3.0f;
#pragma endregion

#pragma region Camera
    // Create camera and attach to spring arm component.
    UCameraComponent* Camera = CreateDefaultSubobject<UCameraComponent>
        (TEXT("ActualCamera"));
    Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
#pragma endregion

    // Take control of the default player. 
    AutoPossessPlayer = EAutoReceiveInput::Player0;

    // Create an instance of movement component, then tell it to update the root.
    OurMovementComponent = CreateDefaultSubobject<UCollidingPawnMovementComponent>
        (TEXT("CustomMovementComponent"));
    OurMovementComponent->UpdatedComponent = RootComponent;
}

// Called when the game starts or when spawned
void ACollidingPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollidingPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACollidingPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    InputComponent->BindAction("ParticleToggle", IE_Pressed, this, &ACollidingPawn::ParticleToggle);

    InputComponent->BindAxis("MoveForward", this, &ACollidingPawn::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &ACollidingPawn::MoveRight);
    InputComponent->BindAxis("Turn", this, &ACollidingPawn::Turn);
}

UPawnMovementComponent * ACollidingPawn::GetMovementComponent() const
{
    return OurMovementComponent;
}

void ACollidingPawn::MoveForward(float _axisValue)
{
    if (OurMovementComponent && (OurMovementComponent->UpdatedComponent == RootComponent))
    {
        OurMovementComponent->AddInputVector(GetActorForwardVector() * _axisValue);
    }
}

void ACollidingPawn::MoveRight(float _axisValue)
{
    if (OurMovementComponent && (OurMovementComponent->UpdatedComponent == RootComponent))
    {
        OurMovementComponent->AddInputVector(GetActorRightVector() * _axisValue);
    }
}

void ACollidingPawn::Turn(float _axisValue)
{
    FRotator NewRotation = GetActorRotation();
    NewRotation.Yaw += _axisValue;
    SetActorRotation(NewRotation);
}

void ACollidingPawn::ParticleToggle()
{
    if (OurParticleSystem && OurParticleSystem->Template)
    {
        OurParticleSystem->ToggleActive();
    }
}

