#pragma once
class Target {
private:
	int positiveNumber;
public:
	Target() = default;
	Target(int positiveNumber);
	virtual int request();
};

