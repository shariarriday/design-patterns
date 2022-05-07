#pragma once

#include <memory>

class Singleton {
	int value;
	Singleton() = default;
public:
	Singleton(const Singleton& s) = delete;
	Singleton operator=(const Singleton& s) = delete;
	static std::shared_ptr<Singleton> getInstance();
	void setValue(int value);
	void print();
};