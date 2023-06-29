// Fill out your copyright notice in the Description page of Project Settings.


#include "CloudSaveVisitor.h"

void UCloudSaveVisitor::VisitPlayerProfile(UPlayerProfileData* Data)
{
	Super::VisitPlayerProfile(Data);

	//Save to cloud logic
}

void UCloudSaveVisitor::VisitInGameCurrency(UInGameCurrencyData* Data)
{
	Super::VisitInGameCurrency(Data);

	//Save to cloud logic
}
