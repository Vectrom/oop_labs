#pragma once
#include "TwoArg.h"

class AND : public TwoArg  {
	public:
		AND() = default;
		const bool result(const bool& arg1, const bool& arg2) const override;
};