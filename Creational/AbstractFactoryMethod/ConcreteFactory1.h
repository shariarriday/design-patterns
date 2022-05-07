#pragma once

#include "BaseFactory.h"

class ConcreteFactory1 : public BaseFactory {
public:
	ConcreteFactory1();
	ConcreteProduct1 createProduct1(int height, int width) override;
};