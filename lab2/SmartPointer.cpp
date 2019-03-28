#include <iostream>
#include "SmartPointer.h"

SmartPointer::SmartPointer(TestClassA * pointer) : _pointer(pointer) {
    _count = new int;
    *_count = 1;
}


SmartPointer::SmartPointer(SmartPointer & pointer) : _pointer(pointer._pointer), _count(pointer._count) {
	(*_count)++;
}

SmartPointer::~SmartPointer() {
	(*_count)--;
	if(!*_count) {
		delete _count;
		delete _pointer;
	}
}

SmartPointer & SmartPointer::operator=(const SmartPointer & pointer) {
	if(this == &pointer)
		return *this;

	(*_count)--;
	if(!*_count) {
		delete _count;
		delete _pointer;
	}
	_pointer = pointer._pointer;
	_count = pointer._count;
	(*_count)++;
	return *this;
}

const TestClassA & SmartPointer::operator*() const {
	return *_pointer;
}

const TestClassA * SmartPointer::operator->() const {
	return _pointer;
}