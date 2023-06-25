// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAnalyticsProxy.h"

void UGameplayAnalyticsProxy::Initialized(UGameplayManager* Manager)
{
	if(IsInitialized || !Manager) return;

	Original = Manager;

	IsInitialized = true;
}

void UGameplayAnalyticsProxy::Win()
{
	if(!Original.IsValid()) return;

	//TODO:Send statistic
	//IAnaliticSerive.SendWinEvent()

	//after
	Original->Win();
}

void UGameplayAnalyticsProxy::Lose()
{
	if(!Original.IsValid()) return;

	//TODO:Send statistic
	//IAnaliticSerive.SendLoseEvent();

	//after
	Original->Lose();
}
