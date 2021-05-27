// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyStaticMesh"));
	
	WaypointsAreSet = false;
}

void AEnemy::MoveToWaypoint(float aDeltaTime)
{
	if(Waypoints.IsValidIndex(0) == false)
	{
		return;
	}



	if(WaypointsAreSet == false)
	{
		return;
	}
	
	if(FVector::Dist(GetActorLocation(), GoToWaypoint) < 20.5f )
	{
		GoToNextWaypoint();
	}

	FVector CurrentPosition = GetActorLocation();

	float deltaX = GoToWaypoint.X - CurrentPosition.X;
	float deltaY = GoToWaypoint.Y - CurrentPosition.Y;

	AngleToWaypoint = atan2(deltaX,deltaY);
	
	CurrentPosition.X += sin(AngleToWaypoint) * EnemySpeed * aDeltaTime;
	CurrentPosition.Y += cos(AngleToWaypoint) * EnemySpeed * aDeltaTime;
	
	
	SetActorLocation(CurrentPosition);
}

void AEnemy::GoToNextWaypoint()
{
	if(Waypoints.Num() == 0)
	{
		EnemyGotToGoal();
		return;
	}
	
	GoToWaypoint = Waypoints[0];
	Waypoints.RemoveAt(0);
}

void AEnemy::SetWaypoints(TArray<FVector> aWaypointList)
{
	FVector CurrentPosition = GetActorLocation();

	GoToWaypoint = Waypoints[0];
	
	Waypoints.RemoveAt(0);

	WaypointsAreSet = true;
}

void AEnemy::EnemyGotToGoal()
{
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEnemy::SetTurretReferences(ATurret* aAddToList)
{
	TowersAttackingEnemys.Add(aAddToList);
}

void AEnemy::Death()
{
	for(int i = 0 ; i < TowersAttackingEnemys.Num(); i++)
	{
		//TowersAttackingEnemys[i]->EnemyWasKilled(GetName());		
	}
	
	Destroy(true);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemy::TakeDamage(int aDamageTaken)
{
	CurrentHealth -= aDamageTaken;
	
	if(CurrentHealth <= 0)
	{
		Death();
	}
}

