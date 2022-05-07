#include "ConcreteProduct1.h"
#include "ConcreteFactory1.h"

ConcreteFactory1::ConcreteFactory1()
{
}

ConcreteProduct1 ConcreteFactory1::createProduct1(int height, int width)
{
	std::string model = "Test";
	return ConcreteProduct1(height, width, model);
}