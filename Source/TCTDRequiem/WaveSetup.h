// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WaveSetup.generated.h"

/**
 * 
 */

UENUM()
enum EnemyType
{
	Basic ,
    Large ,
    Fast  ,
};

UCLASS()
class TCTDREQUIEM_API UWaveSetup : public UObject
{
	GENERATED_BODY()


	public:
	TArray<EnemyType> m_EnemysToSpawn;

	void SpawnWave();
	
	
};
