#pragma once

class Adaptee {
public:
	int negNum;
	Adaptee(int negNum) : negNum(negNum) {}
	int getNegNumber() {
		return negNum;
	}
};