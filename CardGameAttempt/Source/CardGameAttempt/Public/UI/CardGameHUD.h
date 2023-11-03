// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CardGameHUD.generated.h"

/**
 * 
 */
UCLASS()
class CARDGAMEATTEMPT_API UCardGameHUD : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	void FireLeftAction();
	void FireRightAction();

private:
	/** Bindings */
	UPROPERTY(Transient, meta = ( BindWidgetAnim ))
	class UWidgetAnimation* InitializeAnimation;

	UPROPERTY(Transient, meta = ( BindWidgetAnim ))
	class UWidgetAnimation* StartGameAnim;

	UPROPERTY(Transient, meta = ( BindWidgetAnim ))
	class UWidgetAnimation* NoCardsSelectedAnim;

	UPROPERTY(Transient, meta = ( BindWidgetAnim ))
	class UWidgetAnimation* LeftCardSelectedAnim;

	UPROPERTY(Transient, meta = ( BindWidgetAnim ))
	class UWidgetAnimation* RightCardSelectedAnim;

	UPROPERTY(Transient, meta = ( BindWidgetAnim ))
	class UWidgetAnimation* LeftCardConfirmedAnim;

	UPROPERTY(Transient, meta = ( BindWidgetAnim ))
	class UWidgetAnimation* RightCardConfirmedAnim;

	UPROPERTY( meta = ( BindWidget ), meta=(AllowPrivateAccess="true"))
	class UCard* LeftCard;

	UPROPERTY( meta = ( BindWidget ), meta=(AllowPrivateAccess="true"))
	class UCard* RightCard;

	UPROPERTY( meta = ( BindWidget ), meta=(AllowPrivateAccess="true"))
	class UImage* EventImg;

	/** Varaibles */
	UPROPERTY(EditAnywhere, Category="Variables", meta=(AllowPrivateAccess="true"))
	class USoundBase* IntroSFX;

	UPROPERTY(EditAnywhere, Category="Variables", meta=(AllowPrivateAccess="true"))
	class USoundBase* CardPickedSFX;

	UPROPERTY(EditAnywhere, Category="Variables", meta=(AllowPrivateAccess="true"))
	class UDataTable* EventsDataTable;

	/** This number represents if the user is going left or right and what animation to play based off if they're going left or right input*/
	float choiceTrack = 0; 

	bool bPlayedIntro = false;
	bool bStartedGame = false;

	class ABasicCharacter* Player;

	FTimerHandle PlayerInputDelay;
	FTimerHandle ReturnCardsDelay;

	struct FEventData* CurrentEvent;

	/** Functions */
	void EnablePlayerInput();
	void ResetCards();
	void LoadLeftEvent();
	void LoadRightEvent();
};
