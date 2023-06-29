// Fill out your copyright notice in the Description page of Project Settings.


#include "LocalSaveVisitor.h"

void ULocalSaveVisitor::VisitPlayerProfile(UPlayerProfileData* Data)
{
	Super::VisitPlayerProfile(Data);

	//Save to JSON logic
}

void ULocalSaveVisitor::VisitInGameCurrency(UInGameCurrencyData* Data)
{
	Super::VisitInGameCurrency(Data);

	//Save to JSON logic
}
