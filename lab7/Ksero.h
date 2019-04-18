#pragma once
#include "Papierozerne.h"
/**
* @class Ksero
* @brief Klasa reprezentujaca ksero. Ksero jest urzadzeniem papierozernym. Dziedziczenie po Papierozernym pozwoli na wykorzystanie
* 	     metody wirtualnej informujacej o rodzaju urzadzenia..
*/
class Ksero : public virtual Papierozerne {
	public:
		/**
	 	 * @fn rodzaj
	 	 * @brief Metoda informujaca o rodzaju urzadzenia
		 * @return Rodzaj urzadzenia
	 	 */	
		std::string rodzaj() const override {return "Ksero";}
};