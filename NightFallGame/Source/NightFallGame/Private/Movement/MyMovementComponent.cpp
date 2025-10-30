

#include "Movement/MyMovementComponent.h"

UMyMovementComponent::UMyMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMyMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	NextLocation = GetOwner()->GetActorLocation();
	GetOwner()->SetActorTickEnabled(false);
}

void UMyMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector Movement = NextLocation - GetOwner()->GetActorLocation();
	Movement.Normalize();
	Movement = Movement * (Speed * DeltaTime);

	if (Speed * DeltaTime > (NextLocation - GetOwner()->GetActorLocation()).Size())
	{
		GetOwner()->SetActorLocation(NextLocation);
		SetComponentTickEnabled(false);
	}
	else
	{
		GetOwner()->SetActorLocation(GetOwner()->GetActorLocation() + Movement);
	}			
}

void UMyMovementComponent::MoveToLocation(const FVector& NewLocation)
{
	NextLocation = NewLocation;
	SetComponentTickEnabled(true);
}
