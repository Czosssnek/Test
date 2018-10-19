#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AIController.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"
#include "MyBlueprint_AI_Behaviour.generated.h"

UCLASS()
class UMyBlueprint_AI_Behaviour : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = AI)
		static bool SetSightRange(AAIController* Controller, float NewSightRange);
};
