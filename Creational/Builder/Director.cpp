#include "Director.h"
#include "ConcreteBuilder1.h"
#include <iostream>
void Director::makeProduct1()
{
	this->builder->reset();
	this->builder->setParam1(1000);
	this->builder->setParam2(1233);
	this->builder->setParam3(0);
	this->builder->setParam4(1232);
}

void Director::setBuilder(const std::shared_ptr<BuilderBase>& builder)
{
	this->builder = builder;
	std::cout << this->builder.use_count() << std::endl;
}
