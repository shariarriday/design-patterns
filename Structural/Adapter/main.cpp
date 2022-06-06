#include <iostream>

#include "Target.h"
#include "Adaptee.h"
#include "Adapter.h"

int main() {
	std::cout << "Adapter Pattern" << std::endl;
	Target target = Target(1);
	Adaptee adaptee = Adaptee(-2);

	Adapter1 adapter = Adapter1(&adaptee);

	std::cout << target.request() << std::endl;
	std::cout << adapter.request() << std::endl;
}