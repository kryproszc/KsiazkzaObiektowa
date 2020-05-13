#ifndef ADRESATMENAGER_H
#define ADRESATMENAGER_H

#include <iostream>
#include <vector>
#include "UzytkownikMenager.h"
#include "PlikZUzytkownikami.h"
#include "PlikZAdresatami.h"

#include "Adresat.h"

#include <iostream>



using namespace std;

class AdresatMenager
{

public:
    vector <Adresat> adresaci;

string DodajeAdresatow(string ID);
void czytaKsiazke1(string ID);
void WyswietlWektor(int j);
void WczytajKsiazke();
Adresat PodajdaneAdresata(string ID);
};
#endif
