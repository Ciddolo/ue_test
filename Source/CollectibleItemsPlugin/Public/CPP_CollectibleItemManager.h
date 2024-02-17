#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"

#include "CPP_CollectibleItemManager.generated.h"

UCLASS()
class COLLECTIBLEITEMSPLUGIN_API ACPP_CollectibleItemManager : public AActor
{
	GENERATED_BODY()	

private:
	UPROPERTY()
		int CurrentScore = 0;

public:
	UFUNCTION(Category = "Score")
		void AddPoints(int Points);

	UFUNCTION(Category = "Score")
		int GetCurrentScore();

	UFUNCTION(Category = "Score")
		void ResetCurrentScore();
};
