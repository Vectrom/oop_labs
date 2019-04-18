#include <iostream>
#include "Executor.h"

Executor::Result Executor::secureRun(const Function& func, double x) {
	Result res;
	res.valid = true;

	try {
		res.value = func(x);
	}
	catch (const bool) {
		res.valid = false;
		res.problem = "Boolean of value false thrown";
	}
	catch (const char * str) {
		res.valid = false;
		res.problem = str;
	}
	
	return res;
}

Executor::Result::operator double() {
	if(!valid)
		throw "";
	return value;
	
}

std::ostream& operator<<(std::ostream& o, const Executor::Result& result){
	o << "ERROR " << result.problem;
	return o;
}

