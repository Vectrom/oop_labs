#include <iostream>
#include "File.h"

void File::print(const int & count) const {
    for(int i = 0; i < count; i++)
        std::cout << " ";
    std::cout << _name << std::endl;
}