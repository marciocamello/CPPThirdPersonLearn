// Fill out your copyright notice in the Description page of Project Settings.
#include "AdvancedCharacter.h"
#include <stdexcept>

using namespace std;

// Sets default values
AAdvancedCharacter::AAdvancedCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdvancedCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAdvancedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAdvancedCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAdvancedCharacter::GetActorEyesViewPoint(FVector& Location, FRotator& Rotation) const
{
	Location = GetMesh()->GetSocketLocation(EyesSocketName);
	Rotation = GetMesh()->GetSocketRotation(EyesSocketName);


}

