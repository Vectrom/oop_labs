#pragma once

namespace Executor {
	/**
	* @class Function
	* @brief Klasa reprezentujaca funkcje matematyczna
	*/
	class Function {
		public:
			/**
			* @fn operator()
			* @brief Metoda zwracajaca wynik wykonania danej funkcji matematycznej dla argumentu podanego jako parametr, o ile jest on w dziedzinie. Jesli nie - wyrzucany jest wyjatek.
			* @param x Argument funkcji matematycznej
			* @result Wynik wykonania funkcji matematycznej z argumentem przekazanym jako parametr
			*/
			virtual double operator()(double x) const = 0;
	};

	/**
	* @class Result
	* @brief Klasa opakowujaca wynik wykonanej funkcji
	*/
	class Result {
	public:
		bool valid;
		double value;
		std::string problem;

		/**
		* @fn operator double()
		* @brief Metoda konwertujaca wynik do double, o ile wynik jest prawidlowy. Jesli nie - wyrzucany jest wyjatek.
		*/
		operator double();
	};

/**
* @fn secureRun
* @brief Funkcja uruchamiajaca funkcje matematyczna przekazana jako parametr z argumentem przekazanym jako parametr wraz z obsluga wyjatkow.
* @param func Funkcja matematyczna, ktora ma zostac wykonana
* @param x Argument funkcji matematycznej
* @result Rezultat wykonania funkcji matematycznej z argumentem przekazanym jako parametr
*/
Result secureRun(const Function& func, double x);
}

/**
* @fn secureRun
* @brief Przeciazenie operatora << pozwalajace na wypisanie problemu zwiazanego z danym rezultatem
* @param o Referencja do obiektu typu ostream, do którego zostanie wypisany problem
* @param result Rezultat, ktorego problem zostanie wypisany
* @result Referencja do obiektu typu ostream, do ktorego zostal wypisany problem
*/
std::ostream& operator<<(std::ostream& o, const Executor::Result& result);
