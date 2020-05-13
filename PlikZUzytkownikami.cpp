#include "PlikZUzytkownikami.h"

void PlikZUzytkownikami::DopiszDoPliku(Uzytkownik uzytkownik)
{
    fstream plik;
    plik.open("Uzytkownicy.txt",ios::out|ios::app);
    if (plik.good() == false) {
        plik.open("Uzytkownicy.txt",std::ios::out);
    }
    plik<<uzytkownik.pobierzId()<<"|"<<uzytkownik.pobierzLogin()<<"|"<<uzytkownik.pobierzHaslo()<<"|"<<endl;
    plik.close();
}


void  PlikZUzytkownikami::czytaBazeUzytkownikow(vector <Uzytkownik> &uzytkownicy) {
    Uzytkownik uzytk;
    string id,login,haslo;
    fstream plik;
    plik.open("Uzytkownicy.txt",ios::in);
    do {
        getline(plik,id,'|');
        getline(plik,login,'|');
        getline(plik,haslo,'|');

        uzytk.ustawId(id);
        uzytk.ustawHaslo(haslo);
        uzytk.ustawLogin(login);

        uzytkownicy.push_back(uzytk);
    } while(getline(plik,id));
    plik.close();
}

