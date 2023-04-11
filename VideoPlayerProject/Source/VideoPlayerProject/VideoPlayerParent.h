// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VideoPlayerParent.generated.h"

UCLASS()
class VIDEOPLAYERPROJECT_API AVideoPlayerParent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVideoPlayerParent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when the player wants to start video playback
	UFUNCTION(BlueprintCallable)
		void PlayVideo();

	// Called when the player wants to pause video playback
	UFUNCTION(BlueprintCallable)
		void PauseVideo();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//VARIABLES
	// Stores the selected video to play
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMediaSource* MediaSource;

	// Stores the media player in which to play the selected video with
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMediaPlayer* MediaPlayer;
	// Stores the time at which to start the video from
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FTimespan StartTime;
};
