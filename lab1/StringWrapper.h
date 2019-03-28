#pragma once
#include "Wrapper.h"

class StringWrapper: public Wrapper {
	public:
		StringWrapper(std::string value) : _value(value) {}
		void print() const;
		Wrapper * copy();
	private:
		std::string _value;
};