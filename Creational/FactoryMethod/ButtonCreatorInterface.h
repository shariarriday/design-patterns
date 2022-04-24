#pragma once

#include "ButtonInterface.h"
#include <memory>

class ButtonCreatorInterface {
protected:
	ButtonCreatorInterface() = default;
	virtual std::unique_ptr<ButtonInterface> createButton() = 0;
};