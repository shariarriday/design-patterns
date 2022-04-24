#pragma once

#include "ButtonInterface.h"

class NormalButton : public ButtonInterface {
public:
	NormalButton(std::string& buttonText);
	~NormalButton() final override;
	void buttonAction() final override;
};