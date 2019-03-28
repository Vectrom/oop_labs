#pragma once
#include "TwoArg.h"

class OR :public TwoArg{
	public:
		OR() = default;
		const bool result(const bool& arg1, const bool& arg2) const override;
};