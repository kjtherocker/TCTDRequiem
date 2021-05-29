// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "WaveSetup.h"
#include "Spawner.generated.h"


UCLASS()
class TCTDREQUIEM_API ASpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* m_Mesh;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> Enemy_Standard;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> Enemy_Large;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> Enemy_Fast;


	UWaveSetup * WaveSetup;

	TMap<EnemyType,TSubclassOf<AActor>> m_EnemyList;
	
	UPROPERTY(EditAnywhere)
  TArray<FVector> Waypoints;

	UPROPERTY(EditAnywhere)
	FVector SpawnEnemyPosition;


	
	UFUNCTION()
	virtual void SpawnEnemy();
	
};
