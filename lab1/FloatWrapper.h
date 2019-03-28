#pragma once
#include "Wrapper.h"

class FloatWrapper: public Wrapper {
	public:
		FloatWrapper(float value) : _value(value) {}
		void print() const;
		Wrapper * copy();
	private:
		float _value;
};