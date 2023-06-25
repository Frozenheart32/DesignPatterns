// Fill out your copyright notice in the Description page of Project Settings.


#include "WalkBehaviorState.h"

#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"


void UWalkBehaviorState::Enter()
{
	Time = CheckTimer;
}

void UWalkBehaviorState::Tick(const float& DeltaTime)
{
	if(Time > 0)
		Time -= DeltaTime;
	else
	{
		Time += CheckTimer;

		bool Result;
		const auto Target = CheckDistance(Result);
		if(Result)
		{
			//Set to owner field Target
			//Call change state on ChaseBehaviorState
			
		}
	}
}

void UWalkBehaviorState::Exit()
{
	
}

ACharacter* UWalkBehaviorState::CheckDistance(bool& Result) const
{
	TArray<AActor*> Targets;
		
	TArray<AActor*> IgnoreActors;
	//Set Owner Character
	//IgnoreActors.Init(MyActor, 1);
	
	//Get Owner position
	//FVector Position = MyActor->GetActorLocation();
	FVector Position{};
	Result = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), Position, CheckRadius, TraceObjectTypes,
		TargetFilterClass, IgnoreActors, Targets);

	if(Result)
	{
		return Cast<ACharacter>(Targets[0]);
	}

	return nullptr;
}

void UWalkBehaviorState::Init(const TArray<TEnumAsByte<EObjectTypeQuery>>& NewTraceObjectTypes,
	const TSubclassOf<ACharacter>& NewTargetFilterClass, const float& NewCheckTargetDistance,
	const float& NewCheckTimer)
{
	TraceObjectTypes = NewTraceObjectTypes;
	TargetFilterClass = NewTargetFilterClass;
	CheckRadius = NewCheckTargetDistance;
	CheckTimer = NewCheckTimer;
}


