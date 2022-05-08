#pragma once

#include "BuilderBase.h"
#include <memory>

class Director {
private:
	std::shared_ptr<BuilderBase> builder;
public:
	void makeProduct1();
	void setBuilder(const std::shared_ptr<BuilderBase>& builder);
};