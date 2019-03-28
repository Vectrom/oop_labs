#pragma once
/** 
 * @class TestClassA
 * @brief Trywialna klasa, przechowujaca jedynie swoja nazwe.
 **/
class TestClassA {
	public:

/** 
 * @fn TestClassA
 * @brief Kontruktor klasy. String przekazany jako parametr zapisuje jako atrybut klasy i wypisuje informacje o konstrukcji elementu.
 * @param name Nazwa klasy, ktora bedzie przechowywana jako atrybut
 **/
		TestClassA(const std::string& name);

/** 
 * @fn ~TestClassA
 * @brief Destruktor klasy. Wypisuje informacje o usunieciu elementu.
 **/
		~TestClassA();

/** 
 * @fn name
 * @brief Trywialna metoda, zwracajaca nazwe obiektu przechowywana jako atrybut.
 * @return Zwraca nazwe klasy przechowywana jako atrybut.
 **/
		const std::string name() const;
		
	private:
		const std::string _name;
};