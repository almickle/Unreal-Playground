#include "Food Web/FoodWebFactory.h"
#include "FoodWebAsset.h"

UFoodWebFactory::UFoodWebFactory()
{
	bCreateNew = true; bEditAfterNew = true;
	SupportedClass = UFoodWebAsset::StaticClass();
}
UObject* UFoodWebFactory::FactoryCreateNew( UClass* Class, UObject* Parent, FName Name,
											EObjectFlags Flags, UObject*, FFeedbackContext* )
{
	return NewObject<UFoodWebAsset>( Parent, Class, Name, Flags );
}
