#include "NormalButtonCreator.h"
#include "NormalButton.h"
#include <iostream>

NormalButtonCreator::NormalButtonCreator(std::string& buttonText) : buttonText(buttonText)
{}

std::unique_ptr<ButtonInterface> NormalButtonCreator::createButton()
{
	return std::move(std::make_unique<NormalButton>(this->buttonText));
}