// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/CardGameHUD.h"
#include "Characters/BasicCharacter.h"
#include "UI/Card.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DataTable.h"
#include "Data/EventData.h"
#include "Kismet/KismetSystemLibrary.h"

/** Audio libraries */
#include "Sound/SoundBase.h"

void UCardGameHUD::NativeConstruct()
{
    Super::NativeConstruct();
}

void UCardGameHUD::FireLeftAction()
{
    if(!bPlayedIntro || !bStartedGame) return;

    /** Core gameplay loop */
    if(!Player->bCanReceiveInput) return;
    Player->bCanReceiveInput = false;

    ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    FVector PlayerLoc = myCharacter->GetActorLocation();

    choiceTrack--;
    if(choiceTrack == -2) /** Left card selected as choice */
    {
        static const FString ContextString(TEXT("Event Context String"));
        if(EventsDataTable)
        {
            FName NextEvent = CurrentEvent->LeftCardData.ConnectedEvent; 
            if(NextEvent == FName(TEXT("END")))
            {
                UKismetSystemLibrary::QuitGame(this, GetOwningPlayer(), EQuitPreference::Quit, true);
                return;
            }
            if(NextEvent == FName(TEXT("REPLAY")))
            {
                NextEvent = FName(TEXT("Intro"));   
                //UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("StartingMap")));
            }
            CurrentEvent = EventsDataTable->FindRow<FEventData>(NextEvent, ContextString, true);  
        }

        PlayAnimation(LeftCardConfirmedAnim, 0.f, 1, EUMGSequencePlayMode::Forward, 1.f, false);

        if(CardSwipeSFX) UGameplayStatics::SpawnSoundAtLocation(this, CardSwipeSFX, PlayerLoc);

        GetWorld()->GetTimerManager().SetTimer(ReturnCardsDelay, this, &ThisClass::LoadLeftEvent, 1.1f, false);
        choiceTrack = 0;
        return;
    }
    if(choiceTrack == -1) /** Looking at left card */
    {
        
        if(CardPickedSFX) UGameplayStatics::SpawnSoundAtLocation(this, CardPickedSFX, PlayerLoc);
        GetWorld()->GetTimerManager().SetTimer(PlayerInputDelay, this, &ThisClass::EnablePlayerInput, .26f, false);
        PlayAnimation(LeftCardSelectedAnim, 0.f, 1, EUMGSequencePlayMode::Forward, 1.f, false);
        return;
    }
    if(choiceTrack == 0) /** Looking at right -> looking at both choices */
    {
        GetWorld()->GetTimerManager().SetTimer(PlayerInputDelay, this, &ThisClass::EnablePlayerInput, .26f, false);
        PlayAnimation(RightCardSelectedAnim, 0.f, 1, EUMGSequencePlayMode::Reverse, 1.f, false);
        return;
    }
}

void UCardGameHUD::FireRightAction()
{
    ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    FVector PlayerLoc = myCharacter->GetActorLocation();

    if(!bPlayedIntro) 
    {
        Player = Cast<ABasicCharacter>(GetOwningPlayer()->GetCharacter());
        PlayAnimation(InitializeAnimation, 0.f, 0, EUMGSequencePlayMode::Forward, 1.f, false);
        bPlayedIntro = true;
        return;
    }

    if(!bStartedGame)
    {
        
        
        if(IntroSFX) UGameplayStatics::SpawnSoundAtLocation(this, IntroSFX, PlayerLoc);
        PlayAnimation(StartGameAnim, 0.f, 1, EUMGSequencePlayMode::Forward, 1.f, false);
        bStartedGame = true;

        static const FString ContextString(TEXT("Event Context String"));
        if(EventsDataTable)
        {
            CurrentEvent = EventsDataTable->FindRow<FEventData>(FName(TEXT("Intro")), ContextString, true);
            if(CurrentEvent)
            {
                Player->bCanReceiveInput = false;
                GetWorld()->GetTimerManager().SetTimer(PlayerInputDelay, this, &ThisClass::EnablePlayerInput, CurrentEvent->EventDialogueDuration, false);

                EventImg->SetBrushFromTexture(CurrentEvent->EventImage);
                LeftCard->LoadNewCardData(CurrentEvent->LeftCardData.CardName, CurrentEvent->LeftCardData.CardDescription, CurrentEvent->LeftCardData.CardImage);
                RightCard->LoadNewCardData(CurrentEvent->RightCardData.CardName, CurrentEvent->RightCardData.CardDescription, CurrentEvent->RightCardData.CardImage); 
                USoundBase* IntroAudio = CurrentEvent->EventSFX;
                if(IntroAudio)
                {
                    UGameplayStatics::SpawnSoundAtLocation(this, IntroAudio, PlayerLoc);
                }
            }
        }
        

        return;
    }

    /** Core gameplay loop */
    if(!Player->bCanReceiveInput) return;
    Player->bCanReceiveInput = false;

    choiceTrack++;
    if(choiceTrack == 2) /** Right card selected as choice */
    {
        static const FString ContextString(TEXT("Event Context String"));
        if(EventsDataTable)
        {
            FName NextEvent = CurrentEvent->RightCardData.ConnectedEvent;
            if(NextEvent == FName(TEXT("END")))
            {
                UKismetSystemLibrary::QuitGame(this, GetOwningPlayer(), EQuitPreference::Quit, true);
                return;
            }
            if(NextEvent == FName(TEXT("REPLAY")))
            {
                NextEvent = FName(TEXT("Intro"));  
                //UGameplayStatics::OpenLevel(GetWorld(), FName(TEXT("StartingMap")));
            }
            CurrentEvent = EventsDataTable->FindRow<FEventData>(NextEvent, ContextString, true);
        }

        if(CardSwipeSFX) UGameplayStatics::SpawnSoundAtLocation(this, CardSwipeSFX, PlayerLoc);
        PlayAnimation(RightCardConfirmedAnim, 0.f, 1, EUMGSequencePlayMode::Forward, 1.f, false);
        GetWorld()->GetTimerManager().SetTimer(ReturnCardsDelay, this, &ThisClass::LoadRightEvent, 1.1f, false);
        choiceTrack = 0;
        return;
    }
    if(choiceTrack == 1) /** Looking at right card */
    {
        if(CardPickedSFX) UGameplayStatics::SpawnSoundAtLocation(this, CardPickedSFX, PlayerLoc);
        GetWorld()->GetTimerManager().SetTimer(PlayerInputDelay, this, &ThisClass::EnablePlayerInput, .26f, false);
        PlayAnimation(RightCardSelectedAnim, 0.f, 1, EUMGSequencePlayMode::Forward, 1.f, false);
        return;
    }
    if(choiceTrack == 0) /** Looking at left -> looking at both choices */
    {
        GetWorld()->GetTimerManager().SetTimer(PlayerInputDelay, this, &ThisClass::EnablePlayerInput, .26f, false);
        PlayAnimation(LeftCardSelectedAnim, 0.f, 1, EUMGSequencePlayMode::Reverse, 1.f, false);
        return;
    }
}

void UCardGameHUD::EnablePlayerInput()
{
    Player->bCanReceiveInput = true;
    GetWorld()->GetTimerManager().ClearTimer(PlayerInputDelay);
    GetWorld()->GetTimerManager().ClearTimer(ReturnCardsDelay);
}

void UCardGameHUD::ResetCards()
{
    PlayAnimation(NoCardsSelectedAnim, 0.f, 1, EUMGSequencePlayMode::Forward, 1.f, false);
    GetWorld()->GetTimerManager().SetTimer(PlayerInputDelay, this, &ThisClass::EnablePlayerInput, CurrentEvent->EventDialogueDuration, false);
}

void UCardGameHUD::LoadLeftEvent()
{
    if(CurrentEvent)
    {
        EventImg->SetBrushFromTexture(CurrentEvent->EventImage);
        LeftCard->LoadNewCardData(CurrentEvent->LeftCardData.CardName, CurrentEvent->LeftCardData.CardDescription, CurrentEvent->LeftCardData.CardImage);
        RightCard->LoadNewCardData(CurrentEvent->RightCardData.CardName, CurrentEvent->RightCardData.CardDescription, CurrentEvent->RightCardData.CardImage); 
        USoundBase* IntroAudio = CurrentEvent->EventSFX;
        
        ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
        FVector PlayerLoc = myCharacter->GetActorLocation();
        if(IntroAudio) UGameplayStatics::SpawnSoundAtLocation(this, IntroAudio, PlayerLoc);

        
        GetWorld()->GetTimerManager().SetTimer(PlayerInputDelay, this, &ThisClass::EnablePlayerInput, CurrentEvent->EventDialogueDuration, false);
    }

    ResetCards();
}

void UCardGameHUD::LoadRightEvent()
{
    if(CurrentEvent)
    {
        EventImg->SetBrushFromTexture(CurrentEvent->EventImage);
        LeftCard->LoadNewCardData(CurrentEvent->LeftCardData.CardName, CurrentEvent->LeftCardData.CardDescription, CurrentEvent->LeftCardData.CardImage);
        RightCard->LoadNewCardData(CurrentEvent->RightCardData.CardName, CurrentEvent->RightCardData.CardDescription, CurrentEvent->RightCardData.CardImage); 
        USoundBase* IntroAudio = CurrentEvent->EventSFX;

        ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
        FVector PlayerLoc = myCharacter->GetActorLocation();
        if(IntroAudio) UGameplayStatics::SpawnSoundAtLocation(this, IntroAudio, PlayerLoc);

        
        GetWorld()->GetTimerManager().SetTimer(PlayerInputDelay, this, &ThisClass::EnablePlayerInput, CurrentEvent->EventDialogueDuration, false);
    }

    ResetCards();
}
