#pragma once

#include "ProductBase.h"

class Product1 : public ProductBase {
	int p1;
	int p2;
	int p3;
	int p4;
public:
	Product1();
	void setP1(int p1);
	void setP2(int p2);
	void setP3(int p3);
	void setP4(int p4);
	void printInfo() override;
};