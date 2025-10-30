// Roman Vitolo


#include "Actors/MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	NextLocation = GetActorLocation();
	SetActorTickEnabled(false);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (this->GetActorLocation() != NextLocation)
	{
		FVector Movement = NextLocation - this->GetActorLocation();
		Movement.Normalize();
		Movement = Movement * (Speed * DeltaTime);

		if (Speed * DeltaTime > (NextLocation - this->GetActorLocation()).Size())
		{
			SetActorLocation(NextLocation);
			SetActorTickEnabled(false);
		}
		else
		{
			this->SetActorLocation(this->GetActorLocation() + Movement);
		}		
	}
}

void AMyActor::MoveToLocation(const FVector& NewLocation)
{
	NextLocation = NewLocation;
	SetActorTickEnabled(true);
}

