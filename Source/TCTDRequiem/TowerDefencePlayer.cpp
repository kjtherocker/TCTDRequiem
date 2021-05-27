// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefencePlayer.h"

// Sets default values
ATowerDefencePlayer::ATowerDefencePlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ATowerDefencePlayer::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<APlayerController>(GetController());

	if (PlayerController)
	{
		PlayerController->bShowMouseCursor = true; 
		PlayerController->bEnableClickEvents = true; 
		PlayerController->bEnableMouseOverEvents = true;
	}
	
	GetWorld()->GetGameViewport()->GetMousePosition(CurrentPosition);

	OldPosition = CurrentPosition;
	
}

// Called every frame
void ATowerDefencePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATowerDefencePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAction("Spawn", IE_Pressed, this, &ATowerDefencePlayer::RaycastToCheckIfNodeIsFree);

}

void ATowerDefencePlayer::RaycastToCheckIfNodeIsFree()
{
	//GEngine->AddOnScreenDebugMessage(-1,5.f, FColor::Green,  TEXT("MouseClicked"));
	UWorld* world = GetWorld();


	//This is just a reimplementation of FMath::LinePlaneIntersection that just takes certain shortcuts because the plane's normal is (0,0,1):

	FVector WorldLocation;
	FVector WorldDirection;
	float DistanceAboveGround = 10.0f;

	PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection); 

	FVector PlaneOrigin(0.0f, 0.0f, DistanceAboveGround);


	FHitResult* hitResult = new FHitResult();
	FVector StartPoint = GetActorLocation();

	
	FVector EndPoint = FMath::LinePlaneIntersection(
                WorldLocation,
                WorldLocation + WorldDirection,
					   PlaneOrigin,
                FVector::UpVector);



	FCollisionQueryParams * TraceParams = new FCollisionQueryParams();

	if(GetWorld()->LineTraceSingleByChannel(*hitResult, StartPoint, EndPoint, ECC_Visibility, * TraceParams))
	{
       GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,
           FString::Printf(TEXT("You Hit: %s"), *hitResult->GetActor()->GetName()));
       
       
       
       ATowerNode* TowerNodeTemp =  Cast<ATowerNode>(hitResult->GetActor());
       TowerNodeTemp->SpawnTurret(ToSpawn);
        	
		 
	}
}

void ATowerDefencePlayer::SpawnTurret(FVector aPosition)
{
	UWorld* world = GetWorld();

	if(world)
	{	
		FVector m_SpawnPos = aPosition;
		FRotator m_Rotator = GetActorRotation();

		AEnemy* m_EnemyToSpawn;
		m_EnemyToSpawn = Cast<AEnemy>(world->SpawnActor<AActor>(ToSpawn, m_SpawnPos, m_Rotator));
		m_EnemyToSpawn->SetActorLocation(aPosition);
	}
	
}

