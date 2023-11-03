// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Card.generated.h"

/**
 * 
 */
UCLASS()
class CARDGAMEATTEMPT_API UCard : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

private:
	UPROPERTY( meta = ( BindWidget ), meta=(AllowPrivateAccess="true"))
	class UTextBlock* CardName;

	UPROPERTY( meta = ( BindWidget ), meta=(AllowPrivateAccess="true"))
	class UImage* CardImage;

	UPROPERTY( meta = ( BindWidget ), meta=(AllowPrivateAccess="true"))
	class UTextBlock* CardDescription;

public:
	void LoadNewCardData(FText NewCardName, FText NewCardDescription, UTexture2D* NewImage);
};
