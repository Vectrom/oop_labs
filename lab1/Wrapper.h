#pragma once

class Wrapper {
	public:
		Wrapper() = default;
		virtual ~Wrapper() = default;
		virtual void print() const = 0;
		virtual Wrapper * copy() = 0;
	private:
};