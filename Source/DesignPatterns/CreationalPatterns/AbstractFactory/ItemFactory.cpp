// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemFactory.h"

#include "CreationalPatterns/Builder/ItemBuilder.h"
#include "CreationalPatterns/Singleton/BuilderRepository.h"

ACollectableItem* UItemFactory::CreateItem(TSubclassOf<ACollectableItem> ItemType, FVector Position, FRotator Rotation)
{
	auto BuilderRepository = UBuilderRepository::GetBuilderRepository();
	if(!BuilderRepository) return nullptr;

	bool Result = false;
	auto Builder = BuilderRepository->TryGetItemBuilder(ItemType,Result);
	if(!Result) return nullptr;

	return Builder->Build(Position, Rotation);
}
