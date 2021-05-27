// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class TCTDREQUIEM_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	int m_ProjectileDamage;
	
	UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* m_Mesh;
	
	UPROPERTY(EditAnywhere)
    float m_ProjectileSpeed;


	AEnemy* m_EnemyToAttack;
	
	virtual void GoToEnemy(float aDeltatime);

	virtual void Activate(AEnemy* aEnemy);
	virtual void Deactivate();


	bool ProjectileState;

	UFUNCTION()
       void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
           int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
