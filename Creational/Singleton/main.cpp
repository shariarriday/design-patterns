#include "Singleton.h"

int main() {
	auto singleton1 = Singleton::getInstance();
	singleton1->setValue(10);
	auto singleton2 = Singleton::getInstance();
	singleton2->print();
	singleton2->setValue(1000);
	singleton1->print();
}