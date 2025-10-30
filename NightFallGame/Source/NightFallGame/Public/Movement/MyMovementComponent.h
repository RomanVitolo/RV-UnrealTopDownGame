

#pragma once

#include "CoreMinimal.h"
#include "MyMovementComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class NIGHTFALLGAME_API UMyMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UMyMovementComponent();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	FVector NextLocation;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed = 100.0f;
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void MoveToLocation(const FVector& NewLocation);
};