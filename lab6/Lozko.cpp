#include <iostream>
#include "Lozko.h"

Lozko::Lozko(int sz, int w, int dl, int szerSpan) : Mebel(sz, w, dl), _szerokoscSpania(szerSpan) {}

Lozko::Lozko(int szerSpan) : _szerokoscSpania(szerSpan) {}

Lozko::~Lozko() { 
	std::cout << "~Lozko" << std::endl;
}

void Lozko::print() const {
	std::cout << "Lozko: ";
	Mebel::print();
	std::cout << "  sz.spania: " << _szerokoscSpania;
}