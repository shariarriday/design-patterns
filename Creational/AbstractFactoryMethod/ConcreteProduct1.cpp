#include "ConcreteProduct1.h"
#include <iostream>

ConcreteProduct1::ConcreteProduct1(int height, int width, std::string& model) : BaseProduct(height, width, model)
{
}

void ConcreteProduct1::printInfo() {
	std::cout << this->model << " " << this->height << " " << this->width << std::endl;
}