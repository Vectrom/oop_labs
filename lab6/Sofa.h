#pragma once
#include "Mebel.h"

class Sofa : virtual public Mebel {
	public:
		Sofa(int sz, int w, int dl, int siedz);
		Sofa(int siedz);
		~Sofa();
		void print() const override;

	private:
		int _siedzisko;
};