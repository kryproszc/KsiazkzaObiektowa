#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include "Uzytkownik.h"
#include <fstream>
#include <vector>
class PlikZUzytkownikami
{

public:
    void DopiszDoPliku(Uzytkownik uzytkownik);
    void czytaBazeUzytkownikow(vector <Uzytkownik> &uzytkownicy);
};
#endif
