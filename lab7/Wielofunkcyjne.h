#pragma once
#include "Drukarka.h"
#include "Skaner.h"
#include "Ksero.h"
/**
* @class Wielofunkcyjne
* @brief Klasa reprezentujaca urzadzenie wielofunkcyjne, ktore laczy w sobie funkcje drukarki, skanera i ksera. Dziedziczenie po Drkarce, Skanerze i Kserze
*        pozwala na  skorzystanie z metod kazdego z tych urzadzen.
**/
class Wielofunkcyjne : public Drukarka, public Skaner, public Ksero {
	public:
		/**
	 	 * @fn Wielofunkcyjne
	 	 * @brief Konstruktor tworzacy nowy obiekt reprezentujący urzadzenie wielofunkcyjne z zadana rozdzielczoscia drukarki i skanera
		 * @param rozdzielczoscDrukarki Rozdzielczosc drukarki
		 * @param rozdzielczoscSkanera Rozdzielczosc skanera
	 	 */	
		Wielofunkcyjne(const Rozdzielczosc rozdzielczoscDrukarki, const Rozdzielczosc rozdzielczoscSkanera) : Drukarka(rozdzielczoscDrukarki), Skaner(rozdzielczoscSkanera) {}
		/**
	 	 * @fn rodzaj
	 	 * @brief Metoda informujaca o rodzaju urzadzenia
		 * @return Rodzaj urzadzenia
	 	 */	
		std::string rodzaj() const override {return "Wielofunkcyjne";}
};