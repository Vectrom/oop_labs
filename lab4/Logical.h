#pragma once
#include "OR.h"
#include "AND.h"
#include "NOT.h"

class Logical {
	public:
		static const bool eval(const TwoArg& operation, const bool& arg1, const bool& arg2 = false);
		static const bool eval(const OneArg& operation, const bool& arg);
};