// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponAnimationComponent.h"

#include "WeaponBase.h"


// Sets default values for this component's properties
UWeaponAnimationComponent::UWeaponAnimationComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UWeaponAnimationComponent::BeginPlay()
{
	Super::BeginPlay();

	auto Owner = GetOuter();
	if(const auto WeaponBase = Cast<AWeaponBase>(Owner))
	{
		auto Mesh = WeaponBase->GetWeaponMesh();
		if(Mesh)
		{
			AnimInstance = Mesh->GetAnimInstance();
		}
	}
}


void UWeaponAnimationComponent::StartFireAnimation()
{
	if(!AnimInstance) return;

	AnimInstance->Montage_Play(FireMontage);
}

void UWeaponAnimationComponent::StartReloadAnimation()
{
	if(!AnimInstance) return;

	AnimInstance->Montage_Play(ReloadMontage);
}

