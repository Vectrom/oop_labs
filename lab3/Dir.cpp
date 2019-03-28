#include <iostream>
#include "Dir.h"

Dir::~Dir() {
std::cout << "Deleting Dir: " << getName() << std::endl;
	for(int i = 0; i < _size; i++) {
		std::cout << "About to delete " << _files[i]->getName() << std::endl;
		delete _files[i];
	}
}

const File * Dir::get(const std::string & name) const {
    for(int i = 0; i < _size; i++) {
    	if(_files[i]->getName() == name)
    		return _files[i];
    }
    return nullptr;
}

void Dir::print(const int & count) const {
    for(int i = 0; i < count; i++) {
        std::cout << " ";
    }

	std::cout << getName() << std::endl;
    for(int i = 0; i < _size; i++) {
        _files[i]->print(count + 1);

    }
}

void Dir::operator+=(File * file) {
    _files[_size] = file;
    _size++;
}

std::ostream& operator<<(std::ostream &o, const File & file) {
    file.print(0);
    return o;
}