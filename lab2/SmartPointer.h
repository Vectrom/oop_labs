#pragma once
#include "TestClassA.h"
using namespace std;

/** 
 * @class SmartPointer
 * @brief Klasa reprezentująca sprytny wskaznik.
 **/
class SmartPointer {
	public:
/**
 * @fn SmartPointer
 * @brief Konstruktor sprytnego wskaznika. Zapisuje wskaznik przekazany jako parametr jako atrybut klasy, 
 *		  alokuje pamiec na licznik obiektow, na ktore wskazuje sprytny wskaznik i ustawia go na 1.
 * @param pointer Wskaznik do obiektu na ktory ma wskazywac sprytny wskaznik
 **/
		SmartPointer(TestClassA * pointer);
/**
 * @fn SmartPointer
 * @brief Konstruktor kopiujacy sprytnego wskaznika. Oprocz standardowego skopiowania wskaznika do obiektu i wskaznika do licznika,
 *		  inkrementuje licznik obiektow, na ktore wskazuje sprytny wskaznik.
 * @param pointer Sprytny wskaznik, ktory chcemy skopiowac
 **/
		SmartPointer(SmartPointer & pointer);
/** 
 * @fn ~SmartPointer
 * @brief Destruktor sprytnego wskaznika. Dekrementuje licznik obiektow, na ktore wskazuje sprytny wskaznik. 
*	      Jesli po tej operacji licznik jest rowny 0, dealokuje pamiec przeznaczona na przechowywanie obiektu i licznika.
 **/
		~SmartPointer();

/** 
 * @fn operator=
 * @brief Przeciazenie operatora =. Jesli obiekt na ktorym jest wykonywany i obiekt, ktory jest przyjmowany jako parametr sa tym samym obiektem - zwraca referencje do niego (*this).
 *   	  W przeciwnym wypadku dekrementuje obiektow na ktore wskazuje wskaznik w obiekcie, na ktorym ten operator jest wywolywany. Jesli po tej operacji licznik jest rowny 0, 
 *   	  dealokuje pamiec przeznaczona na przechowywanie przez niego obiektu i licznika. Nastepnie do atrybutow obiektu na ktorym jest ten operator wywolywany przypisywane sa
 *   	  atrybuty klasy przekazanej jako parametr, a licznik obiektow na ktore wskazuje sprytny wskaznik  zostaje zinkrementowany. Zwraca referencje do obiektu na ktorym jest wykonywany.
*	@param pointer Sprytny wskaznik, ktory jesli jest rozny od sprytmnego wskaznika na ktorym wywolujemy operator, zostanie do niego przypisany
*	@return Referencja do obiektu na ktorym jest wywolywany.
 **/
		SmartPointer & operator=(const SmartPointer & pointer);

/** 
 * @fn operator*
 * @brief Przeciazenie operatora *. Trywialna metoda, zwracajaca stala referencje do obiektu, ktory jest przechowywany w sprytnym wskazniku.
 * @return Stala referencja do obiektu, ktory jest przechowywany w sprytnym wskazniku.
 **/
		const TestClassA & operator *() const;

/** 
 * @fn operator->
 * @brief Przeciazenie operatora ->. Trywialna metoda, zwracajaca wskaznik do obiektu, ktory jest przechowywany w sprytnym wskazniku.
 * @return Wskaznik do obiektu, ktory jest przechowywany w sprytnym wskazniku.
 **/
		const TestClassA * operator->() const;

	private:
		TestClassA * _pointer;
		int *_count;
};