#pragma once
#include "Mebel.h"

class Lozko : virtual public Mebel {
	public:
		Lozko(int sz, int w, int dl, int szerSpan);
		Lozko(int szerSpan);
		~Lozko();
		void print() const override;

	private:
		int _szerokoscSpania;
};