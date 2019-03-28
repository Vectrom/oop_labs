#include <iostream>
#include "StringWrapper.h"

void StringWrapper::print() const {
	std::cout << _value;
}

Wrapper * StringWrapper::copy() {
	return new StringWrapper(_value);
}