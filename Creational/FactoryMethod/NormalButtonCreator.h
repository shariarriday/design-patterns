#pragma once

#include "ButtonCreatorInterface.h"

class NormalButtonCreator : public ButtonCreatorInterface {
public:
	std::string buttonText;
	NormalButtonCreator(std::string& buttonText);
	std::unique_ptr<ButtonInterface> createButton() override;
};