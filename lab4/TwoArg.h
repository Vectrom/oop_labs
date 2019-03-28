#pragma once

//Klasa bazowa (podstawowa) dla klas przedstawiajacych operacje logiczne dwuargumentowe (AND, OR). 
//Dzieki takiej hierarchi klas mozemy wywolywac na nich wirtualna metode zwracajaca rezultat operacji
//Dzieki temu latwo uzyskac rezultat dowolnej operacji przekazanej jako parametr do funkcji statycznej w klasie Logical

class TwoArg {
	public:
		virtual const bool result(const bool& arg1, const bool& arg2) const = 0;
		virtual ~TwoArg() = default;
};