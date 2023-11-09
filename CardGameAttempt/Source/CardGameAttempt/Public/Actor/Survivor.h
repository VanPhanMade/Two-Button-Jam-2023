// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Survivor.generated.h"

UCLASS()
class CARDGAMEATTEMPT_API ASurvivor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASurvivor();

	void Revive();

	bool IsAlive();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="Variables", meta=(AllowPrivateAccess="true"))
	class USoundBase* ReviveIdle;

	UPROPERTY(EditAnywhere, Category="Variables", meta=(AllowPrivateAccess="true"))
	int Index = 0;

	/** Components */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* SkeletalMesh;

	bool bAlive = false;

};
