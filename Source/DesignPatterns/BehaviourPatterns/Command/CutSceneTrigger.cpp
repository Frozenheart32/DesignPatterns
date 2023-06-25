// Fill out your copyright notice in the Description page of Project Settings.


#include "CutSceneTrigger.h"

#include "GameFramework/Character.h"


// Sets default values
ACutSceneTrigger::ACutSceneTrigger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	BoxCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxCollider->SetCollisionResponseToAllChannels(ECR_Overlap);

	BoxCollider->SetupAttachment(RootComponent);

	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ACutSceneTrigger::BoxColliderOverlapped);
}

void ACutSceneTrigger::BoxColliderOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bBFromSweep, const FHitResult& SweepResult)
{
	if(const auto Character = Cast<ACharacter>(OtherActor))
	{
		Run();
	}
}
