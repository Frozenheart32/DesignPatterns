// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpRequestHandler.h"

void UHttpRequestHandler::Init(const FString& NewURL, int32 Num)
{
	URL = NewURL;
	QueueNum = Num;
}

void UHttpRequestHandler::HandleRequest(int32 Condition)
{
	//start http request and ect...

	if(QueueNum == Condition)
	{
		return;
	}


	if(GetSuccessor())
	{
		GetSuccessor()->HandleRequest(Condition);
	}
}
