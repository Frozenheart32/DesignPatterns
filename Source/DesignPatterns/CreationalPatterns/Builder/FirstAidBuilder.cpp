// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstAidBuilder.h"
#include "CreationalPatterns/AbstractFactory/FirstAidItem.h"
#include "Core/MyGameInstance.h"
#include "Kismet/KismetMathLibrary.h"

UFirstAidBuilder::UFirstAidBuilder()
{
	AidTypes.Add(EFirstAidType::SmallAid);
	AidTypes.Add(EFirstAidType::NormalAid);
	AidTypes.Add(EFirstAidType::BigAid);
}

ACollectableItem* UFirstAidBuilder::Build(const FVector& Position, const FRotator& Rotation)
{
	FActorSpawnParameters Parameters;
	Parameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	auto Item = GetWorld()->SpawnActor<AFirstAidItem>(Position, Rotation, Parameters);
	
	if(GetGameInstance())
	{
		auto GI = GetGameInstance();
		int32 LastIndex = AidTypes.Num() - 1;
		auto RandomIndex = UKismetMathLibrary::RandomIntegerInRange(0, LastIndex);

		FFirstAidInfo Info{};
		auto Result = GI->TryGetFirstAidInfo(AidTypes[RandomIndex], Info);
		if(Result)
		{
			auto RandomHealValue = UKismetMathLibrary::RandomFloatInRange(Info.MinHealValue, Info.MaxHealValue);
			Item->InitializeItem(Info.StaticMesh, Info.Material, RandomHealValue);
		}
	}
	
	return Item;
}
