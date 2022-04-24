// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "NormalButtonCreator.h"
#include <memory>

int main()
{
	std::string confirm = "Confirm";
	std::unique_ptr<NormalButtonCreator> normalButtonCreator = std::make_unique<NormalButtonCreator>(confirm);
	auto normalButton = normalButtonCreator->createButton();
	normalButton->buttonAction();
}
