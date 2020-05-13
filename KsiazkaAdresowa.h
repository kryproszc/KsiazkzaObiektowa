#ifndef KSIAZKAAKDRESOWA_H
#define KSIAZKAAKDRESOWA_H
#include <iostream>
#include <vector>
#include "Uzytkownik.h"

#include "UzytkownikMenager.h"
#include "AdresatMenager.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenager uzytkownikmenager;
    AdresatMenager adresatkmenager;

public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    char logowanie1();
    void DodajAdresatow1();
    void DodajaDRESATA();
void czytaKsiazke();
void WyswietlAdresatow();
    void wypisz();
};
#endif
