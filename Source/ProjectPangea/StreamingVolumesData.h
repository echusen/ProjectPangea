// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include <vector>

#include "StreamingVolumesData.generated.h"

UCLASS()
class PROJECTPANGEA_API AStreamingVolumesData : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStreamingVolumesData();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


    ////////////////////////////////////////////////////////////////////
    UPROPERTY(EditAnywhere)
    AActor * currentVolume;
    UPROPERTY(EditAnywhere)
    FName levelToLoad;
    UPROPERTY(EditAnywhere)
    FName levelToUnload;
    
    UPROPERTY(EditAnywhere)
    bool hasQueuedUpload;
    UPROPERTY(EditAnywhere)
    bool testQueing;
    UPROPERTY(EditAnywhere)
    FName levelToUnload_queued;
    UPROPERTY(EditAnywhere)
    int int_queueCountdown;

    void queueUnload(FName levelToUnload);
    void clearQueue();
};
