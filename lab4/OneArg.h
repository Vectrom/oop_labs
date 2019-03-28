#pragma once

//Klasa bazowa (podstawowa) dla klas przedstawiajacych operacje logiczne eednoargumentowe (NOT). 
//Dzieki takiej hierarchi klas mozemy wywolywac na nich wirtualna metode zwracajaca rezultat operacji 
//Dzieki temu latwo uzyskac rezultat dowolnej operacji przekazanej jako parametr do funkcji statycznej w klasie Logical

class OneArg {
	public:
		virtual const bool result(const bool& arg) const = 0;
		virtual ~OneArg() = default;
};