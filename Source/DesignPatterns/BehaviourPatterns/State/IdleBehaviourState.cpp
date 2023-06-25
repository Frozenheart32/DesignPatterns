// Fill out your copyright notice in the Description page of Project Settings.


#include "IdleBehaviourState.h"

void UIdleBehaviourState::Init(float NewTimer)
{
	//Set variables from args
	Timer = NewTimer;
}

void UIdleBehaviourState::Enter()
{
	Time += Timer;
}

void UIdleBehaviourState::Tick(const float& DeltaTime)
{
	if(Time > 0)
		Time -= DeltaTime;
	else
	{
		//Call stateMachine change on any state (walk)

		//or Idle
		//Time += Timer;
	}
}

void UIdleBehaviourState::Exit()
{
	
}
