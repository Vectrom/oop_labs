#pragma once
#include "Urzadzenie.h"
/**
* @class Papierozerne
* @brief Klasa reprezentujaca papierozerne urzadzenie biurowe. Dziedziczenie po Urzadzeniu pozwoli na wykorzystanie w klasach pochodnych
*        metody wirtualnej informujacej o rodzaju urzadzenia.
**/
class Papierozerne : public virtual Urzadzenie {};