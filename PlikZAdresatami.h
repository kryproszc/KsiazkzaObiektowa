#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include "Adresat.h"
#include <fstream>
#include <vector>z
class PlikZAdresatami
{

public:
    void DodajeAdresatow(Adresat adresat);
   // vector <Adresat> adresaci;
void OdczytKsiazki(vector <Adresat> &adresaci,string dana);
};
#endif
