#ifndef UZYTKOWNIKMENAGER_H
#define UZYTKOWNIKMENAGER_H
#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include "MetodyPomocnicze.h"

#include <vector>

class UzytkownikMenager {
    vector <Uzytkownik> uzytkownicy;
    Uzytkownik podajDaneNowegoUzytkownika();

public:
      string ID;
     void ustawId(string noweId);
    void czytajUzytkownikowZPliku();
    void rejestracjaUzytkownika();
    string logowanie();
    void wypisz();
    string logowanieUzytkownika();
    string q();
    string zapisanie(string ID);

};
#endif
