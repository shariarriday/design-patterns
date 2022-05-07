#pragma once

#include <string>

class BaseProduct {
protected:
	int height;
	int width;
	std::string model;
public:
	BaseProduct(int height, int width, std::string& model);
};