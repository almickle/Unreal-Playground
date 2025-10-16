#include "SpeciesAssetFactory.h"
#include "SpeciesAsset.h"

USpeciesAssetFactory::USpeciesAssetFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = USpeciesAsset::StaticClass();
}

UObject* USpeciesAssetFactory::FactoryCreateNew( UClass* Class, UObject* Parent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn )
{
	return NewObject<USpeciesAsset>( Parent, Class, Name, Flags );
}
