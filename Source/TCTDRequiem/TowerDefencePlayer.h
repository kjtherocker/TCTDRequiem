// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Enemy.h"
#include "TowerNode.h"
#include "TowerDefencePlayer.generated.h"

UCLASS()
class TCTDREQUIEM_API ATowerDefencePlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATowerDefencePlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(VisibleAnywhere)
	UCameraComponent* PlayerCamera;


	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ToSpawn;

	UPROPERTY(VisibleAnywhere)
	FVector2D CurrentPosition;
	FVector2D OldPosition; 


	APlayerController* PlayerController;
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void RaycastToCheckIfNodeIsFree();
	

	virtual void SpawnTurret(FVector aPosition);
	

};
