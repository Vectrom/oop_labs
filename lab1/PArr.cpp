#include <iostream>
#include "PArr.h"

PArr::PArr(int size) : _size(size) {
	_array = new Wrapper*[size];
}

PArr::~PArr() {
	for(int i=0; i<_size; i++)
		delete _array[i];
	delete[] _array;
}

Wrapper *& PArr::operator[](int index) {
	return _array[index];
}

const Wrapper * PArr::operator[](int index) const {
	return _array[index];
}

std::ostream& operator<<(std::ostream &o, const PArr& array) {
	for(int i=0; i<array._size; i++) {
		array[i]->print();
		o << " ";
	}
	return o;
}

PArr& PArr::operator=(PArr& array) {
	if(&array == this)
		return *this;
	for(int i=0; i<_size; i++)
		delete _array[i];
	delete[] _array;
	_size = array._size;
	_array = new Wrapper*[_size];
	for(int i = 0; i < array._size; i++)
		_array[i] = array[i]->copy();
	return *this;
}