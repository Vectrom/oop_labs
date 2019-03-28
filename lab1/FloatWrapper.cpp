#include <iostream>
#include "FloatWrapper.h"

void FloatWrapper::print() const {
	std::cout << _value;
}

Wrapper * FloatWrapper::copy() {
	return new FloatWrapper(_value);
}