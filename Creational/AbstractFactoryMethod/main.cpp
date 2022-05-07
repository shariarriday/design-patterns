// CMakeProject1.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "ConcreteFactory1.h"
#include "ConcreteProduct1.h"
int main()
{
	ConcreteProduct1 prod1 = ConcreteFactory1().createProduct1(1, 2);
	prod1.printInfo();
}
