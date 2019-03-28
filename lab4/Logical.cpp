#include <iostream>
#include "Logical.h"

const bool Logical::eval(const TwoArg& operation, const bool& arg1, const bool& arg2) {
	return operation.result(arg1, arg2);
}

const bool Logical::eval(const OneArg& operation, const bool& arg) {
	return operation.result(arg);
}	