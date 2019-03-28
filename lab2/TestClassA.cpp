#include <iostream>
#include "TestClassA.h"

TestClassA::TestClassA(const std::string& name) : _name(name) {
    std::cout << ".. Konstruuje TestClassA " << _name << std::endl;
}

TestClassA::~TestClassA() {
    std::cout << ".. Usuwam TestClassA " << _name << std::endl;
}

const std::string TestClassA::name() const {
    return _name;
}