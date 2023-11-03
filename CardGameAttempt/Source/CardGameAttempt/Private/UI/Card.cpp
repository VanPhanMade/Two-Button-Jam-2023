// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Card.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"


void UCard::NativeConstruct()
{
    Super::NativeConstruct();
}
void UCard::LoadNewCardData(FText NewCardName, FText NewCardDescription, UTexture2D* NewImage)
{
    CardName->SetText(NewCardName);
    CardDescription->SetText(NewCardDescription);
    CardImage->SetBrushFromTexture(NewImage);

}
