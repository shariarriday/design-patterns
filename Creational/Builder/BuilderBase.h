#pragma once

#include "ProductBase.h"
#include <memory>

class BuilderBase {
public:
	virtual void setParam1(int param1) = 0;
	virtual void setParam2(int param2) = 0;
	virtual void setParam3(int param3) = 0;
	virtual void setParam4(int param4) = 0;
	virtual void reset() = 0;
	virtual std::shared_ptr<ProductBase> getProduct() = 0;
};