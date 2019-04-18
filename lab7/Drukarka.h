#pragma once
#include "Papierozerne.h"
#include "Rozdzielczosc.h"

/**
* @class Drukarka
* @brief Klasa reprezentujaca drukarke. Drukarka jest urzadzeniem papierozernym. 
*        Dziedziczenie po Papierozernym pozwoli na wykorzystanie metody wirtualnej informujacej o rodzaju urzadzenia.
**/
class Drukarka : public virtual Papierozerne {
	public:
		/**
	 	 * @fn Drukarka
	 	 * @brief Konstruktor tworzacy nowy obiekt reprezentujący drukarke z zadana rozdzielczoscia
		 * @param rozdzielczosc Rozdzielczosc drukarki
	 	 */	
		Drukarka(const Rozdzielczosc rozdzielczosc) : _rozdzielczosc(rozdzielczosc) {}

		/**
	 	 * @fn rozdzielczosc
	 	 * @brief Zwraca rozdzielczość z jaką pracuje drukarka
		 * @return Rozdzielczosc drukarki
	 	 */
		Rozdzielczosc rozdzielczosc() const {return _rozdzielczosc;}
		
		/**
	 	 * @fn rodzaj
	 	 * @brief Metoda informujaca o rodzaju urzadzenia
		 * @return Rodzaj urzadzenia
	 	 */	
		std::string rodzaj() const {return "Drukarka";}

	private:
		Rozdzielczosc _rozdzielczosc;
};