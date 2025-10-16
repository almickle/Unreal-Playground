#include "BiosphereAssetFactory.h"
#include "BiosphereAsset.h"

UBiosphereFactory::UBiosphereFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UBiosphereAsset::StaticClass();
}

UObject* UBiosphereFactory::FactoryCreateNew( UClass* Class, UObject* Parent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn )
{
	return NewObject<UBiosphereAsset>( Parent, Class, Name, Flags );
}
