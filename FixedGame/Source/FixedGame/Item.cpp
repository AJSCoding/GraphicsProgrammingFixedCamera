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
void AItem::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<ABallPlayer>(OtherActor) != nullptr)
	{
		Collected();
	}
}

void AItem::Collected_Implementation()
{

}
