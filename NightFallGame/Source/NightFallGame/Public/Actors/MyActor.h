// Roman Vitolo

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class NIGHTFALLGAME_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	FVector NextLocation;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed = 100.0f;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void MoveToLocation(const FVector& NewLocation);

};
