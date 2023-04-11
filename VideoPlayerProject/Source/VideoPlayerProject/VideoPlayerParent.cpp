// Fill out your copyright notice in the Description page of Project Settings.


#include "VideoPlayerParent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AVideoPlayerParent::AVideoPlayerParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVideoPlayerParent::BeginPlay()
{
	Super::BeginPlay();

	//Enable controller inputs
	this->EnableInput(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}

// Called every frame
void AVideoPlayerParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called when the player wants to start video playback
void AVideoPlayerParent::PlayVideo()
{
	
}

// Called when the player wants to pause video playback
void AVideoPlayerParent::PauseVideo()
{

}
