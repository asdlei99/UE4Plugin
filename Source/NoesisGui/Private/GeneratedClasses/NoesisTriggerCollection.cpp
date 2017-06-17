////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "GeneratedClasses/NoesisTriggerCollection.h"
#include "NoesisCreateClass.h"
#include "NoesisCreateInterface.h"

using namespace Noesis;
using namespace Gui;

UNoesisTriggerCollection::UNoesisTriggerCollection(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NoesisComponentTypeClass = Noesis::Gui::TypedCollection<Noesis::Gui::BaseTrigger>::StaticGetClassType();
}

void UNoesisTriggerCollection::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TypedCollection<Noesis::Gui::BaseTrigger>* NoesisTriggerCollection = NsDynamicCast<Noesis::Gui::TypedCollection<Noesis::Gui::BaseTrigger>*>(InNoesisComponent);
	check(NoesisTriggerCollection);
}

void UNoesisTriggerCollection::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::TypedCollection<Noesis::Gui::BaseTrigger>* NoesisTriggerCollection = NsDynamicCast<Noesis::Gui::TypedCollection<Noesis::Gui::BaseTrigger>*>(NoesisComponent.GetPtr());
	check(NoesisTriggerCollection);


}

void UNoesisTriggerCollection::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::TypedCollection<Noesis::Gui::BaseTrigger>* NoesisTriggerCollection = NsDynamicCast<Noesis::Gui::TypedCollection<Noesis::Gui::BaseTrigger>*>(NoesisComponent.GetPtr());
	check(NoesisTriggerCollection);


}

