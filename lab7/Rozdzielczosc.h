#pragma once
#include <iostream>
/**
* @class Rozdzielczosc
* @brief Klasa reprezentujaca rozdzielczosc urzadzen biurowych.
*/
class Rozdzielczosc {
	public:
	/**
 	 * @fn Rodzielczosc
 	 * @brief Konstruktor tworzacy nowy obiekt reprezentujący rozdzielczosc z zadana wysokością i szerokością
	 * @param width Szerokość
	 * @param height Wysokość
 	 */	
		Rozdzielczosc(const int width, const int height) : _width(width), _height(height) {}

	/**
 	 * @fn getWidth
 	 * @brief Zwraca szerokosc rozdzielczosci
	 * @return Szerokosc
 	 */
		int getWidth() const {return _width;}

	/**
 	 * @fn getHeight
 	 * @brief Zwraca wysokosc rozdzielczosci
	 * @return Wysokosc
 	 */
		int getHeight() const {return _height;}

	private:
		int _width;
		int _height;
};

/**
 * @fn operator<<
 * @brief Przeciazenie operatora << pozwalajace na wypisanie przy jego uzyciu rozdzielczosci
 * @param o Referencja do obiektu typu ostream, do którego zostanie wypisana rodzielczość
 * @param rozdzielczosc Rozdzielczość, która zostanie wypisana
 * @return Obiekt typu ostream, do ktorego zostala wypisana rozdzielczosc
 */

std::ostream& operator<<(std::ostream&o, const Rozdzielczosc& rozdzielczosc);