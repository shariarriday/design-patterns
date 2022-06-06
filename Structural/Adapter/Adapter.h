#pragma once

#include "Target.h"

class Adapter1 : public Target {
public : 
	Adaptee* adaptee;
	Adapter1(Adaptee* adaptee) : adaptee(adaptee) {}
	int request() override;
};

int Adapter1::request() 
{
	return adaptee->getNegNumber() * -1;
}