#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraph.h"
#include "FoodWebAsset.h"
#include "FoodWebGraph.generated.h"

UCLASS()
class BIOSPHEREEDITOR_API UFoodWebEdGraph : public UEdGraph
{
	GENERATED_BODY()
public:
	void RebuildFromAsset( UFoodWebAsset* Asset );
	void WriteBackToAsset( UFoodWebAsset* Asset ) const;
};

