#pragma once
#include "Sofa.h"
#include "Lozko.h"

class Kanapa : public Sofa, public Lozko {
	public:
		Kanapa(int sz, int w, int dl, int siedz, int szerSpan);
		~Kanapa();
		virtual void print() const override;
	private:
};