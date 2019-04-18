#pragma once
#include "Rozdzielczosc.h"
/**
* @class Skaner
* @brief Klasa reprezentujaca skaner. Dziedziczenie po Urzadzeniu pozwoli na wykorzystanie metody wirtualnej informujacej o rodzaju urzadzenia.
**/
class Skaner : public virtual Urzadzenie {
	public:
		/**
	 	 * @fn Skaner
	 	 * @brief Konstruktor tworzacy nowy obiekt reprezentujący skaner z zadana rozdzielczoscia
		 * @param rozdzielczosc Rozdzielczosc skanera
	 	 */	
		Skaner(const Rozdzielczosc rozdzielczosc) : _rozdzielczosc(rozdzielczosc) {}

		/**
	 	 * @fn rozdzielczosc
	 	 * @brief Zwraca rozdzielczość z jaką pracuje skaner
		 * @return Rozdzielczosc skanera
	 	 */
		Rozdzielczosc rozdzielczosc() const {return _rozdzielczosc;}
		/**
	 	 * @fn rodzaj
	 	 * @brief Metoda informujaca o rodzaju urzadzenia
		 * @return Rodzaj urzadzenia
	 	 */	
		std::string rodzaj() const override {return "Skaner";}

	private:
		Rozdzielczosc _rozdzielczosc;
};