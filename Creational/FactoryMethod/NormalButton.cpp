#include "NormalButton.h"

#include <iostream>

NormalButton::NormalButton(std::string& buttonText)
{
	this->buttonText = buttonText;
}

NormalButton::~NormalButton()
{
	std::cout << "Normal Button has been destroyed" << std::endl;
}

void NormalButton::buttonAction()
{
	std::cout << "Normal Button Action is invoked" << std::endl;
	std::cout << this->buttonText << std::endl;
}
