#include <iostream>
#include "Kanapa.h"

Kanapa::Kanapa(int sz, int w, int dl, int siedz, int szerSpan) : Mebel(sz, w, dl), Sofa(siedz), Lozko(szerSpan) {}

Kanapa::~Kanapa() {
	std::cout << "~Kanapa" << std::endl;
}

void Kanapa::print() const {
	std::cout << "jako ";
	Mebel::print();
	std::cout << std::endl << "  jako ";
	Sofa::print();
	std::cout << std::endl << "  jako ";
	Lozko::print();
}