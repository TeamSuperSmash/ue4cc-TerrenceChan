// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSCharacter.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

#pragma region SetFPSCamera
    // Create FPS camera component.
    FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    // Attack camera component to capsule component.
    FPSCameraComponent->SetupAttachment(GetCapsuleComponent());
    // Position camera slightly above the eyes.
    FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));
    // Allow the pawn the control camera rotation.
    FPSCameraComponent->bUsePawnControlRotation = true;
#pragma endregion

#pragma region SetFPSMesh
    // Create first person mesh component for player.
    FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
    // Only player owner sees this mesh.
    FPSMesh->SetOnlyOwnerSee(true);
    // Attach FPS mesh to FPS camera.
    FPSMesh->SetupAttachment(FPSCameraComponent);
    // Disable environmental shadow to retain illusion of single mesh.
    FPSMesh->bCastDynamicShadow = false;
    FPSMesh->CastShadow = false;
    GetMesh()->SetOwnerNoSee(true);
#pragma endregion
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using FPSCharacter."));
    }
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Set up "movement" bindings.
    PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

    // Set up "look" bindings.
    PlayerInputComponent->BindAxis("Turn", this, &AFPSCharacter::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::AddControllerPitchInput);

    // Set up "action" bindings.
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::StartJump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFPSCharacter::StopJump);
    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);
}

void AFPSCharacter::MoveForward(float value)
{
    // Find out which way is "forward" and record that the player wants to move that way.
    FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
    AddMovementInput(Direction, value);
}

void AFPSCharacter::MoveRight(float value)
{
    // Find out which way is "right" and record that the player wants to move that way.
    FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
    AddMovementInput(Direction, value);
}

void AFPSCharacter::SetYawSensitivity(float value)
{
    
}

void AFPSCharacter::SetPitchSensitivity(float value)
{

}

void AFPSCharacter::StartJump()
{
    bPressedJump = true;
}

void AFPSCharacter::StopJump()
{
    bPressedJump = false;
}

void AFPSCharacter::Fire()
{
    // Attempt to fire projectile...
    if (ProjectileClass)
    {
        // Get camera transform.
        FVector CameraLocation;
        FRotator CameraRotation;
        GetActorEyesViewPoint(CameraLocation, CameraRotation);

        // Transform MuzzleOffset from camera space to world space.
        FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);
        FRotator MuzzleRotation = CameraRotation;
        // Skew aim to be slightly upwards.
        MuzzleRotation.Pitch += 10.0f;
        
        UWorld* World = GetWorld();
        if (World)
        {
            FActorSpawnParameters SpawnParams;
            SpawnParams.Owner = this;
            SpawnParams.Instigator = Instigator;
            // Spawn the projectile at the muzzle.
            AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
            if (Projectile)
            {
                // Set the projectile's initial trajectory.
                FVector LaunchDirection = MuzzleRotation.Vector();
                Projectile->FireInDirection(LaunchDirection);
            }
        }
    }
}

