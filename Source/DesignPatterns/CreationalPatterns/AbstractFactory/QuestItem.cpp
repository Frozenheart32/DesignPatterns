// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestItem.h"


// Sets default values
AQuestItem::AQuestItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AQuestItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AQuestItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

