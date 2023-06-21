// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponDamageComponent.h"

#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
UWeaponDamageComponent::UWeaponDamageComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UWeaponDamageComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UWeaponDamageComponent::Shoot(FVector ShootPosition, FVector Direction)
{
	//use trace
	FHitResult Result;
	FVector End = ShootPosition + Direction * FireDistance;
	GetWorld()->LineTraceSingleByChannel(Result, ShootPosition, End, ECC_Visibility);

	if(Result.GetActor())
	{
		UGameplayStatics::ApplyDamage(Result.GetActor(), Damage, nullptr, GetOwner(), nullptr);
	}
}

