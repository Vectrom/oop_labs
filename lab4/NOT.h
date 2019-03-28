#pragma once
#include "OneArg.h"

class NOT : public OneArg {
	public:
		NOT() = default;
		const bool result(const bool& arg) const override;
};