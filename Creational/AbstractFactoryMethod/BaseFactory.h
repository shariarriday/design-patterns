#pragma once

#include "ConcreteProduct1.h"

class BaseFactory {
public:
	BaseFactory();
	virtual ConcreteProduct1 createProduct1(int height, int width) = 0;
};