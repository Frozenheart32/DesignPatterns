// Fill out your copyright notice in the Description page of Project Settings.


#include "SimulationCOR.h"

#include "HttpRequestHandler.h"

void USimulationCOR::StartSimulation()
{
	const auto YandexHttpRequest = NewObject<UHttpRequestHandler>();
	YandexHttpRequest->Init("https://yandex.ru", 1);
	
	const auto GoogleHttpRequest = NewObject<UHttpRequestHandler>();
	GoogleHttpRequest->Init("https://google.com", 2);

	YandexHttpRequest->SetSuccessor(GoogleHttpRequest);

	YandexHttpRequest->HandleRequest(2);

	//call yandex
	//call google
}
