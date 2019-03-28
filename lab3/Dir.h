#pragma once
#include "File.h"

/** 
 * @class Dir
 * @brief Klasa reprezentująca katalog jako skladnik systemu plikow. Dir dziedziczy po File, m.in. aby moc wykorzystywac metode wirtualna print(const int &),
 		  co umozliwia poprawne wypisywanie struktury katalogow
 **/
class Dir : public File {
	public:
/**
 * @fn Dir
 * @brief Konstruktor katalogu. Ustawie jego nazwe na taka, jaka przekazano jako parametr (wykonuje konstruktor File z nazwa podana jako parametr)
 * @param name Nazwa katalogu
 **/
		Dir(const std::string &name) : File(name) {}

/**
 * @fn ~Dir
 * @brief Destruktor. Zwalnia pamiec przydzielona plikom przechowywanym w katalogu i wypisuje informacje o usuwaniu katalogu i poszczegolnych plikow.
 **/
		~Dir();

/**
 * @fn get
 * @brief Wyszukuje w katalogu plik o podanej jako parametr nazwie i zwraca staly wskaznik do niego, jesli plik znajduje sie w katalogu
 * @param name Nazwa pliku, ktorego wskaznik zostanie zwrocony
 * @return Staly wskaznik do pliku o nazwie podanej jego parametr, jesli plik znajduje sie w katalogu, w przeciwnym razie nullptr
 **/
		const File * get(const std::string & name) const;

/**
 * @fn print
 * @brief Funkcja wirtualna, wypisuje nazwe katalogu poprzedzona spacjami w ilosci przekazanej jako parametr, a nastepnie wypisuje rekurencyjnie zawartosc katalogu
 * @param count Ilosc spacji, ktore zostana wypisane przed nazwa pliku
 **/
		void print(const int & count) const;

/**
 * @fn operator+=
 * @brief Przeciazenie operatora +=. Dodaje plik do katalogu, tzn. umieszcza wskaznik do pliku przekazanego jako parametr w tablicy wskaznikow do plikow
 * @param File Wskaznik do pliku, ktory ma zostac dodany do katalogu
 **/
		void operator+=(File * file);

	private:
		File * _files[10];
		int _size = 0;
};

/**
 * @fn operator<<
 * @brief Globalne przeciazenie operatora <<. Wykonuje wirtualna metode print(const int &), wypisujaca nazwe poprzedzona spacjami dla plikow lub nazwe poprzedzona spacjami
 		  i rekurencyjnie zawartosc katalogu dla katalogow
 * @param o Referencja do std::ostream
 * @param file Wskaznik do pliku, na ktorym ma zostac wykonana metoda print(const int &)
 * @return Referencja do std::ostream
 **/
std::ostream& operator<<(std::ostream &o, const File & file);