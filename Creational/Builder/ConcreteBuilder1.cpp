#include "ConcreteBuilder1.h"
#include <iostream>

ConcreteBuilder::ConcreteBuilder() : result(std::make_shared<Product1>())
{
	std::cout << "Created" << std::endl;
}

void ConcreteBuilder::setParam1(int param1)
{
	this->result->setP1(param1);
}

void ConcreteBuilder::setParam2(int param2)
{
	this->result->setP2(param2);
}

void ConcreteBuilder::setParam3(int param3)
{
	this->result->setP3(param3);
}

void ConcreteBuilder::setParam4(int param4)
{
	this->result->setP4(param4);
}

void ConcreteBuilder::reset()
{
	this->result = std::make_shared<Product1>();
}

std::shared_ptr<ProductBase> ConcreteBuilder::getProduct()
{
	return this->result;
}
