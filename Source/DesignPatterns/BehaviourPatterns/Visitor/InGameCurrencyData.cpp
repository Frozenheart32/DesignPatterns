// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameCurrencyData.h"

void UInGameCurrencyData::Accept(UVisitorBase* Visitor)
{
	Visitor->VisitInGameCurrency(this);
}
