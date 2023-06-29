// Fill out your copyright notice in the Description page of Project Settings.


#include "IColleague.h"

#include "Mediator.h"

// Add default functionality here for any IIColleague functions that are not pure virtual.
void IIColleague::InitMediator(UMediator* NewMediator)
{
	if(NewMediator)
	{
		Mediator = NewMediator;
	}
}
