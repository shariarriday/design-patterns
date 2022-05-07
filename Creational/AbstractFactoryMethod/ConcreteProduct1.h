#pragma once

#include "BaseProduct.h"

class ConcreteProduct1 : public BaseProduct {
public:
	ConcreteProduct1(int height, int width, std::string& model);
	void printInfo();
};