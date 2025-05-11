// Fill out your copyright notice in the Description page of Project Settings.

#include "BallGameModeBase.h"
#include "RollableWidget.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "FixedGame/Item.h"

void ABallGameModeBase::BeginPlay()
{
	TArray<AActor*> Items;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AItem::StaticClass(), Items);
	ItemsInLevel = Items.Num();

	if (GameWidgetClass)
	{
		GameWidget = Cast<URollableWidget>(CreateWidget(GetWorld(), GameWidgetClass));

			if (GameWidget)
			{
				GameWidget->AddToViewport();
				UpdateItemText();
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("GameWidget is null in UpdateItemText"));
			}
	}
}

void ABallGameModeBase::UpdateItemText()
{
	GameWidget->SetItemText(ItemsCollected, ItemsInLevel);
}

void ABallGameModeBase::ItemCollected()
{
	ItemsCollected++;
	UpdateItemText();
}

