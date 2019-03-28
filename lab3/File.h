#pragma once
#include <iostream>

/** 
 * @class File
 * @brief Klasa reprezentująca folder jako skladnik systemu plikow
 **/
class File {
	public:
/**
 * @fn File
 * @brief Konstruktor pliku. Ustawie jego nazwe na taka, jaka przekazano jako parametr
 * @param name Nazwa pliku
 **/
		File(const std::string &name) : _name(name) {}
/**
 * @fn ~File
 * @brief Domyslny wirtualny destruktor
 **/
		virtual ~File() = default;
/**
 * @fn print
 * @brief Funkcja wirtualna. Wypisuje nazwe pliku poprzedzona spacjami w ilosci przekazanej jako parametr
 * @param count Ilosc spacji, ktore zostana wypisane przed nazwa pliku
 **/
		virtual void print(const int & count) const;
/**
 * @fn getName
 * @brief Getter, zwraca nazwe pliku
 * @return Nazwa pliku
 **/
		const std::string& getName() const {return _name;}
		
	private:
		std::string _name;
};