#include "Singleton.h"
#include <iostream>
std::shared_ptr<Singleton> Singleton::getInstance()
{
	static std::shared_ptr<Singleton> singleton(new Singleton);
	return singleton;
}

void Singleton::setValue(int value)
{
	this->value = value;
}

void Singleton::print()
{
	std::cout << this->value << std::endl;
}
