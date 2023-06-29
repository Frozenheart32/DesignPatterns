// Fill out your copyright notice in the Description page of Project Settings.


#include "CutSceneCharacter.h"


// Sets default values
ACutSceneCharacter::ACutSceneCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void ACutSceneCharacter::StartCutsceneAnimation()
{
	const auto MyMesh = GetMesh();
	if(MyMesh)
	{
		const auto GI = MyMesh->GetAnimInstance();
		GI->Montage_Play(CutsceneMontage);
	}
}

void ACutSceneCharacter::Operation()
{
	StartCutsceneAnimation();
}

