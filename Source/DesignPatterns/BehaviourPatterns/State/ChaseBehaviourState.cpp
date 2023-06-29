// Fill out your copyright notice in the Description page of Project Settings.


#include "ChaseBehaviourState.h"

void UChaseBehaviourState::Enter()
{
	Time = CheckTimer;
}

void UChaseBehaviourState::Tick(const float& DeltaTime)
{
	if(Time > 0.f)
		Time -= DeltaTime;
	else
	{
		Time += CheckTimer;

		const bool Result = CheckEscapeDistance();
		if(Result)
		{
			//Change on any state (Idle, walk)
		}
	}
}

void UChaseBehaviourState::Exit()
{
	//Set nullptr for owner Target field;
}

bool UChaseBehaviourState::CheckEscapeDistance() const
{
	//get target location
	//Owner->Target->GetActorLocation();
	FVector TargetLocation;
	//Get Owner location
	//Owner->GetActorLocation();
	FVector OwnerLocation;
	const float Distance = (TargetLocation - OwnerLocation).Size();
	return Distance > EscapeDistance;
}
