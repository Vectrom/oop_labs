#include "Rozdzielczosc.h"

std::ostream& operator<<(std::ostream& o, const Rozdzielczosc& rozdzielczosc) {
	o << rozdzielczosc.getWidth() << "x" << rozdzielczosc.getHeight();
	return o;
}