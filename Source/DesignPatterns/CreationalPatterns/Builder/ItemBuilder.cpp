// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBuilder.h"
#include "Core/MyGameInstance.h"

void UItemBuilder::Init(UMyGameInstance* MyGameInstance)
{
	GameInstance = MyGameInstance;
}

UMyGameInstance* UItemBuilder::GetGameInstance() const
{
	return GameInstance.Get();
}
