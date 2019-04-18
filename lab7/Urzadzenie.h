#pragma once
#include <iostream>
/**
* @class Urzadzenie
* @brief Klasa abstrakcyjna reprezentujaca urzadzenie biurowe
*/
class Urzadzenie {
	public:
		/**
	 	 * @fn rodzaj
	 	 * @brief Metoda czysto wirtualna informujaca o rodzaju urzadzenia
		 * @return Rodzaj urzadzenia
	 	 */	
		virtual std::string rodzaj() const = 0;

		virtual ~Urzadzenie() = default;
};