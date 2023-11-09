// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/Survivor.h"
#include "Kismet/GameplayStatics.h"
#include "GameModes/GenericGM.h"
#include "Sound/SoundBase.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ASurvivor::ASurvivor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName(TEXT("Skeletal Mesh")));
	SetRootComponent(SkeletalMesh);
	//SkeletalMesh->SetupAttachment(RootComponent);

}

void ASurvivor::Revive()
{
	if(bAlive) return;

	bAlive = true;
	SetActorHiddenInGame(false);
	if(ReviveIdle) UGameplayStatics::SpawnSoundAtLocation(this, ReviveIdle, GetActorLocation());
}

bool ASurvivor::IsAlive()
{
    return bAlive;
}
// Called when the game starts or when spawned
void ASurvivor::BeginPlay()
{
	Super::BeginPlay();
	SetActorHiddenInGame(true);
	Cast<AGenericGM>(UGameplayStatics::GetGameMode(GetWorld()))->AssignSurvivorSlot(Index, this);


}

// Called every frame
void ASurvivor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

