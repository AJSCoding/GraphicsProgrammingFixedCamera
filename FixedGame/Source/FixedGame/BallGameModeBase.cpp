// Fill out your copyright notice in the Description page of Project Settings.


#include "BallGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "FixedGame/Item.h"

void ABallGameModeBase::BeginPlay()
{
	TArray<AActor*> Items;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AItem::StaticClass(), Items);
}

void ABallGameModeBase::UpdateItemText()
{

}

void ABallGameModeBase::ItemCollected()
{

}

