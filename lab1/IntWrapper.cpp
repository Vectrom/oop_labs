#include <iostream>
#include "IntWrapper.h"

void IntWrapper::print() const {
	std::cout << _value;
}

Wrapper * IntWrapper::copy() {
	return new IntWrapper(_value);
}