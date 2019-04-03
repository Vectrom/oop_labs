#pragma once

class Mebel {
	public:
		Mebel() = default;
		Mebel(int sz, int w, int dl);
		virtual ~Mebel();
		virtual void print() const;
	private:
		int _szerokosc;
		int _wysokosc;
		int _dlugosc;
};

std::ostream& operator<<(std::ostream& o, const Mebel & mebel);