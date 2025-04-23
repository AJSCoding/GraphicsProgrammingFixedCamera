// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "FixedGame/BallPlayer.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;
	
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &AItem::OverlapBegin);

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}
void AItem::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    if (!IsValid(OtherActor))
    {
        UE_LOG(LogTemp, Warning, TEXT("OverlapBegin: OtherActor is invalid or null."));
        return;
    }

    // Log what we hit
    UE_LOG(LogTemp, Warning, TEXT("OverlapBegin: Hit %s (Class: %s)"),
        *OtherActor->GetName(),
        *OtherActor->GetClass()->GetName());

    // Defensive check: only continue if it's a subclass of ABallPlayer
    if (OtherActor->IsA<ABallPlayer>())
    {
        ABallPlayer* Player = Cast<ABallPlayer>(OtherActor);

        if (IsValid(Player))
        {
            UE_LOG(LogTemp, Warning, TEXT("OverlapBegin: Cast succeeded, calling Collected."));
            Collected();
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("OverlapBegin: Cast to ABallPlayer failed despite IsA check."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("OverlapBegin: OtherActor is not a BallPlayer."));
    }
}

void AItem::Collected_Implementation()
{

}
