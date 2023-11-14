// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Mover.h"
#include "TriggerComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RAIDERSOFDUNGEONS_API UTriggerComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UTriggerComponent();

protected:
	virtual void BeginPlay() override;
	

public:
	void TickComponent(float DeltaTime, ELevelTick TickType,
	                   FActorComponentTickFunction* ThisTickFunction);

	UFUNCTION(BlueprintCallable)
	void SetMover(UMover* Mover);
	
private:
	UPROPERTY(EditAnywhere)
	FName AcceptableActorTag;

	UMover* Mover;

	AActor* GetAcceptableActor() const;
};
