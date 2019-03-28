#pragma once
#include "Wrapper.h"

class PArr {
	public:
		PArr(int size);
		~PArr();
		Wrapper *& operator[](int index);
		const Wrapper * operator[](int index) const;
		PArr& operator=(PArr& array);
		friend std::ostream& operator<<(std::ostream &o, const PArr& array);
	private:
		Wrapper ** _array;
		int _size;
};