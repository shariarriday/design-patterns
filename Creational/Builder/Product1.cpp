#include "Product1.h"
#include <iostream>

Product1::Product1(): p1(0), p2(0), p3(0), p4(0) {
}

void Product1::setP1(int p1)
{
	this->p1 = p1;
}

void Product1::setP2(int p2)
{
	this->p2 = p2;
}

void Product1::setP3(int p3)
{
	this->p3 = p3;
}

void Product1::setP4(int p4)
{
	this->p4 = p4;
}

void Product1::printInfo() {
	std::cout << "Info: " << this->p1 << " " << this->p2 << " " << this->p3 << " " << this->p4 << std::endl;;
}