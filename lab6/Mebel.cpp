#include <iostream>
#include "Mebel.h"

Mebel::Mebel(int sz, int w, int dl) : _szerokosc(sz), _wysokosc(w), _dlugosc(dl) {}

Mebel::~Mebel() {
	std::cout << "~Mebel" << std::endl;
}

void Mebel::print() const {
	std::cout << "Mebel: sz:" << _szerokosc << " wys:" << _wysokosc << " dl:" <<  _dlugosc;
}

std::ostream& operator<<(std::ostream& o, const Mebel & mebel) {
	mebel.print();
	return o;
}