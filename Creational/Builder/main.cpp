#include <iostream>
#include "Director.h"
#include "ConcreteBuilder1.h"
int main() {
	auto builder = std::make_shared<ConcreteBuilder>();
	auto director = std::make_shared<Director>();
	director->setBuilder(builder);
	director->makeProduct1();
	auto product = builder->getProduct();
	product->printInfo();
}