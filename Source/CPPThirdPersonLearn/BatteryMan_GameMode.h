// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BatteryMan_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class CPPTHIRDPERSONLEARN_API ABatteryMan_GameMode : public AGameMode
{
	GENERATED_BODY()

	ABatteryMan_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnyWhere)
		TSubclassOf<APawn> PlayerRecharge;

	float Spawn_Z = 500.0f;

	UPROPERTY(EditAnyWhere)
		float Spawn_X_Min;

	UPROPERTY(EditAnyWhere)
		float Spawn_X_Max;

	UPROPERTY(EditAnyWhere)
		float Spawn_Y_Min;

	UPROPERTY(EditAnyWhere)
		float Spawn_Y_Max;

	void SpawnPlayerRecharge();
	
};
