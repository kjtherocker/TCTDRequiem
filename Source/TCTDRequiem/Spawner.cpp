// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"

// Sets default values
ASpawner::ASpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	Super::BeginPlay();

	WaveSetup = NewObject<UWaveSetup>();
	m_EnemyList.Add(Basic, Enemy_Standard);
	m_EnemyList.Add(Large, Enemy_Large);
	m_EnemyList.Add(Fast, Enemy_Fast);
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawner::SpawnEnemy()
{
		UWorld* world = GetWorld();


	if(WaveSetup == nullptr)
	{
		return;
	}
	
	if(WaveSetup->m_EnemysToSpawn.Num() == 0)
	{
		return;	
	}
	
	if(world == nullptr)
	{
		return;
	}



	
	SpawnEnemyPosition = GetActorLocation();
	FRotator m_Rotator = GetActorRotation();

	AEnemy* m_EnemyToSpawn;

	
	m_EnemyToSpawn = Cast<AEnemy>(world->SpawnActor<AActor>(m_EnemyList[WaveSetup->m_EnemysToSpawn[0]], SpawnEnemyPosition, m_Rotator));
	WaveSetup->m_EnemysToSpawn.RemoveAt(0);
	m_EnemyToSpawn->SetWaypoints(Waypoints);
}

