// Fill out your copyright notice in the Description page of Project Settings.


#include "BallPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"

// Sets default values
ABallPlayer::ABallPlayer()
{
	PrimaryActorTick.bCanEverTick = false;

	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));


	RootComponent = PlayerMesh;

	SpringArm->SetupAttachment(PlayerMesh);
	
	Camera->SetupAttachment(SpringArm);

	PlayerMesh->SetSimulatePhysics(true);

	PlayerMesh->OnComponentHit.AddDynamic(this, &ABallPlayer::OnHit);
}

// Called when the game starts or when spawned
void ABallPlayer::BeginPlay()
{
	Super::BeginPlay();
	MoveForce *= PlayerMesh->GetMass();
	JumpImpulse *= PlayerMesh->GetMass();


	if (!Camera)
	{
		UE_LOG(LogTemp, Error, TEXT("Camera is NULL in BeginPlay!"));
	}
	if (!PlayerMesh)
	{
		UE_LOG(LogTemp, Error, TEXT("Mesh is NULL in BeginPlay!"));
	}
	if (!SpringArm)
	{
		UE_LOG(LogTemp, Error, TEXT("SpringArm is NULL in BeginPlay!"));
	}
	
}

// Called to bind functionality to input
void ABallPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("SwitchCamera", IE_Pressed, this, &ABallPlayer::SwitchCamera);
	PlayerInputComponent->BindAxis("MoveForward", this, &ABallPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABallPlayer::MoveRight);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ABallPlayer::Jump);
}

void ABallPlayer::MoveRight(float Value)
{
	if (!Camera || !PlayerMesh)
	{
		UE_LOG(LogTemp, Error, TEXT("Camera or PlayerMesh is NULL in MoveRight!"));
		return;
	}

	const FVector Right = Camera->GetRightVector() * MoveForce * Value;
	PlayerMesh->AddForce(Right);
}

void ABallPlayer::MoveForward(float Value)
{
	if (!Camera)
	{
		UE_LOG(LogTemp, Error, TEXT("Camera is NULL in MoveForward!"));
		return;
	}

	if (!PlayerMesh)
	{
		UE_LOG(LogTemp, Error, TEXT("Mesh is NULL in MoveForward!"));
		return;
	}

	const FVector Forward = Camera->GetForwardVector() * MoveForce * Value;
	PlayerMesh->AddForce(Forward);
}

void ABallPlayer::Jump()
{
	if (JumpCount >= MaxJumpCount)
	{
		return;
	}

	PlayerMesh->AddImpulse(FVector(0, 0, JumpImpulse));

	JumpCount++;
}

void ABallPlayer::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	const float HitDirection = Hit.Normal.Z;

	if (HitDirection > 0)
	{
		JumpCount = 0;
	}
}

void ABallPlayer::SwitchCamera()
{
	if (FixedCameras.Num() == 0) return;

	CurrentCameraIndex = (CurrentCameraIndex + 1) % FixedCameras.Num();

	APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
	if (PC && FixedCameras[CurrentCameraIndex])
	{
		PC->SetViewTargetWithBlend(FixedCameras[CurrentCameraIndex], 0.5f);
	}
}

