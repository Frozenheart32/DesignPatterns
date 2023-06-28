// Fill out your copyright notice in the Description page of Project Settings.


#include "RaceMediator.h"

void URaceMediator::SendMessage(UObject* Colleague)
{
	if(const auto ColleaguePtr = Cast<IIColleague>(Colleague))
	{

		//Map is ready.
		if(Finish.Get() == ColleaguePtr)
		{
			//Start race!
			Car->Notify();
		}

		//Car Finished
		if(Car.Get() == ColleaguePtr)
		{
			//Create win widget
			Finish->Notify();
		}
	}
}
