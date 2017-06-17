////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "GeneratedClasses/NoesisTabPanel.h"
#include "NoesisCreateClass.h"
#include "NoesisCreateInterface.h"

using namespace Noesis;
using namespace Gui;

UNoesisTabPanel::UNoesisTabPanel(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NoesisComponentTypeClass = Noesis::Gui::TabPanel::StaticGetClassType();
}

void UNoesisTabPanel::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TabPanel* NoesisTabPanel = NsDynamicCast<Noesis::Gui::TabPanel*>(InNoesisComponent);
	check(NoesisTabPanel);
}

void UNoesisTabPanel::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::TabPanel* NoesisTabPanel = NsDynamicCast<Noesis::Gui::TabPanel*>(NoesisComponent.GetPtr());
	check(NoesisTabPanel);


}

void UNoesisTabPanel::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::TabPanel* NoesisTabPanel = NsDynamicCast<Noesis::Gui::TabPanel*>(NoesisComponent.GetPtr());
	check(NoesisTabPanel);


}

