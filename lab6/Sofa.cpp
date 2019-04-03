#include <iostream>
#include "Sofa.h"

Sofa::Sofa(int sz, int w, int dl, int siedz) : Mebel(sz, w, dl), _siedzisko(siedz) {}

Sofa::Sofa(int siedz) : _siedzisko(siedz) {}

Sofa::~Sofa() { 
	std::cout << "~Sofa" << std::endl; 
}

void Sofa::print() const {
	std::cout << "Sofa: ";
	Mebel::print();
	std::cout << "  siedzisko: " << _siedzisko;
}