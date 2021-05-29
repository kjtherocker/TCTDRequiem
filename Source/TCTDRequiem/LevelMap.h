// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelMap.generated.h"

/**
 * 
 */


UENUM()
enum MapNodes
{
	Turret = 0,
    Road   = 1,
};

UCLASS()
class TCTDREQUIEM_API ULevelMap : public UObject
{
	GENERATED_BODY()

	public:
	
	short GridDimensionX = 10;
	short GridDimensionY = 10;
	TArray<short> FloorBlueprint;

	void Initialize();
	int GetIndex(int aRow, int aColumn);
};
