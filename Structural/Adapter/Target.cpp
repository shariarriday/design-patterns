#include "Target.h"

Target::Target(int positiveNumber) : positiveNumber{ positiveNumber } {}

int Target::request() {
	return this->positiveNumber;
}