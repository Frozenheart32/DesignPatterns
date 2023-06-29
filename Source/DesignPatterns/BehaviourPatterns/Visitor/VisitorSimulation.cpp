// Fill out your copyright notice in the Description page of Project Settings.


#include "VisitorSimulation.h"

#include "CloudSaveVisitor.h"
#include "InGameCurrencyData.h"
#include "LocalSaveVisitor.h"
#include "PlayerProfileData.h"

UVisitorSimulation::UVisitorSimulation()
{
	DataService = CreateDefaultSubobject<UDataService>(TEXT("DataService"));
}

void UVisitorSimulation::StartSimulation()
{
	const auto PlayerProfile = NewObject<UPlayerProfileData>(DataService);
	PlayerProfile->Level = 5;
	PlayerProfile->AccountName = "CyberGirl77";

	const auto Currency = NewObject<UInGameCurrencyData>(DataService);
	Currency->Gold = 100;
	Currency->Wood = 500;
	Currency->Copper = 1000;

	DataService->Add(PlayerProfile);
	DataService->Add(Currency);

	const auto LocalSaver = NewObject<ULocalSaveVisitor>(this);
	const auto CloudSaver = NewObject<UCloudSaveVisitor>(this);

	//start save on local disk
	DataService->Accept(LocalSaver);
	
	//start save on cloud
	DataService->Accept(CloudSaver);
}
