// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/GenericGM.h"
#include "Actor/Survivor.h"

bool AGenericGM::ReviveCharacter(int index)
{
    if(index == 0) 
    {
        SurvivorA->Revive();
        return true;
    }
    if(index == 1) 
    {
        SurvivorB->Revive();
        return true;
    }
    if(index == 2) 
    {
        SurvivorC->Revive();
        return true;
    }
    if(index == 3) 
    {
        SurvivorD->Revive();
        return true;
    }
    return false;
}

bool AGenericGM::bAllSurvivorsAlive()
{
    return SurvivorA->IsAlive() && SurvivorB->IsAlive() && SurvivorC->IsAlive() && SurvivorD->IsAlive();
}
void AGenericGM::AssignSurvivorSlot(int index, ASurvivor *SurvivorRef)
{
    UE_LOG(LogTemp, Display, TEXT("Survivor %d added."), index);

    if(index == 0) SurvivorA = SurvivorRef; 
    if(index == 1) SurvivorB = SurvivorRef;
    if(index == 2) SurvivorC = SurvivorRef;
    if(index == 3) SurvivorD = SurvivorRef;
}
