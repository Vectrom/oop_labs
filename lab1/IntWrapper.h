#pragma once
#include "Wrapper.h"

class IntWrapper: public Wrapper {
	public:
		IntWrapper(int value) : _value(value) {}
		void print() const;
		Wrapper * copy();
	private:
		int _value;
};