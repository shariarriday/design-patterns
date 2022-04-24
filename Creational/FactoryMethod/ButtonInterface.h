// CMakeProject1.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <string>

class ButtonInterface {
public:
	std::string buttonText;

	ButtonInterface() = default;
	virtual ~ButtonInterface() = default;
	virtual void buttonAction() = 0;
};
