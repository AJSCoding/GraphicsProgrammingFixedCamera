// Fill out your copyright notice in the Description page of Project Settings.


#include "BallPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ABallPlayer::ABallPlayer()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");


	RootComponent = Mesh;

	SpringArm->SetupAttachment(Mesh);
	
	Camera->SetupAttachment(SpringArm);

	Mesh->SetSimulatePhysics(true);

	Mesh->OnComponentHit.AddDynamic(this, &ABallPlayer::OnHit);
}

// Called when the game starts or when spawned
void ABallPlayer::BeginPlay()
{
	Super::BeginPlay();
	MoveForce *= Mesh->GetMass();
	JumpImpulse *= Mesh->GetMass();
	
}

// Called to bind functionality to input
void ABallPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	InputComponent->BindAxis("MoveForward", this, &ABallPlayer::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ABallPlayer::MoveRight);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ABallPlayer::Jump);
}

void ABallPlayer::MoveRight(float Value)
{
	const FVector Right = Camera->GetRightVector() * MoveForce * Value;
	Mesh->AddForce(Right);
}

void ABallPlayer::MoveForward(float Value)
{
	const FVector Forward = Camera->GetForwardVector() * MoveForce * Value;
	Mesh->AddForce(Forward);
}

void ABallPlayer::Jump()
{
	if (JumpCount >= MaxJumpCount)
	{
		return;
	}

	Mesh->AddImpulse(FVector(0, 0, JumpImpulse));

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

