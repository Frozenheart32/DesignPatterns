// Fill out your copyright notice in the Description page of Project Settings.


#include "HandlerBase.h"

UHandlerBase* UHandlerBase::GetSuccessor() const
{
	return Successor.Get();
}

void UHandlerBase::SetSuccessor(UHandlerBase* Handler)
{
	if(Handler)
	{
		Successor = Handler;
	}
}
