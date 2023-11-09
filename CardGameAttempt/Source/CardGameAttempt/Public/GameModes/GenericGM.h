// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GenericGM.generated.h"

/**
 * 
 */
UCLASS()
class CARDGAMEATTEMPT_API AGenericGM : public AGameModeBase
{
	GENERATED_BODY()

public:
	bool ReviveCharacter(int index);

	bool bAllSurvivorsAlive();

	void AssignSurvivorSlot(int index, class ASurvivor* SurvivorRef);

private:
	class ASurvivor* SurvivorA;
	class ASurvivor* SurvivorB;
	class ASurvivor* SurvivorC;
	class ASurvivor* SurvivorD;
};
