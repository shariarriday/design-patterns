#pragma once

#include "BuilderBase.h"
#include "Product1.h"

class ConcreteBuilder : public BuilderBase {
	std::shared_ptr<Product1> result;
public:
	ConcreteBuilder();
	void setParam1(int param1) override;
	void setParam2(int param2) override;
	void setParam3(int param3) override;
	void setParam4(int param4) override;
	void reset() override;
	std::shared_ptr<ProductBase> getProduct() override;
};