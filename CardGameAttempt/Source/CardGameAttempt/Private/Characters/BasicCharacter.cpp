/** Core packages */
#include "Characters/BasicCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

/** Component libraries */
#include "Camera/CameraComponent.h"
#include "UI/CardGameHUD.h"

/** Input libraries */
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

/** Audio libraries */
#include "Sound/SoundBase.h"

ABasicCharacter::ABasicCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(FName(TEXT("Camera")));
	CameraComponent->SetupAttachment(RootComponent);
}

void ABasicCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	UUserWidget* WidgetInstance = CreateWidget<UUserWidget>(GetWorld(), HUD);
	WidgetInstance->AddToViewport();

	HUDref = Cast<UCardGameHUD>(WidgetInstance);
	HUDref->FireRightAction(); //Clears cards initially and only displays title page
}

void ABasicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABasicCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(InteractActionLeft, ETriggerEvent::Triggered, this, &ThisClass::InteractLeft);
		EnhancedInputComponent->BindAction(InteractActionRight, ETriggerEvent::Triggered, this, &ThisClass::InteractRight);
	}
}

void ABasicCharacter::InteractLeft()
{
	if(bCanReceiveInput)
	{
		if(InteractSFX)	UGameplayStatics::SpawnSoundAtLocation(this, InteractSFX, GetActorLocation());
		HUDref->FireLeftAction();
	} 
}
void ABasicCharacter::InteractRight()
{
	if(bCanReceiveInput) 
	{
		if(InteractSFX)	UGameplayStatics::SpawnSoundAtLocation(this, InteractSFX, GetActorLocation());
		HUDref->FireRightAction();
	}
		
	
}

