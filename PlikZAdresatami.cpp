#include "PlikZAdresatami.h"

#include <iostream>
#include <fstream>
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

void PlikZAdresatami::DodajeAdresatow(Adresat adresat) {

    fstream plik;
    plik.open("osoby.txt",ios::out|ios::app);
    if (plik.good() == false) {
        plik.open("osoby.txt",std::ios::out);
    }
    plik<<adresat.id<<"|"<<adresat.idZalogowanegoUzytkownika<<"|"<<adresat.imie<<"|"<<adresat.nazwisko<<"|"<<adresat.nr_tel<<"|"<<adresat.email<<"|"<<adresat.adres<<"|"<<endl;
    plik.close();
    cout<< "Poprawnie dodano nowa osoby do ksiazki adresowej.";
}

void  PlikZAdresatami::OdczytKsiazki(vector <Adresat> &adresaci,string dana) {
    int id_Uzytkownika_int=0;
    int id_zalogowanego_Uzytkownika=1;
    string id_Uzytkownika="";
    Adresat osoby;
    fstream plik;
    plik.open("osoby.txt",ios::in);
    do {
        getline(plik,osoby.id,'|');
        getline(plik,osoby.idZalogowanegoUzytkownika,'|');
        getline(plik,osoby.imie,'|');
        getline(plik,osoby.nazwisko,'|');
        getline(plik,osoby.nr_tel,'|');
        getline(plik,osoby.email,'|');
        getline(plik,osoby.adres,'|');
        // adresaci.push_back(osoby);

        if(osoby.idZalogowanegoUzytkownika==dana) {
            adresaci.push_back(osoby);
        }


    //vector <Adresat> adresaci;

    if(osoby.id!="") {
        id_Uzytkownika=osoby.id;
        id_Uzytkownika_int=atoi(id_Uzytkownika.c_str());
        id_zalogowanego_Uzytkownika=id_Uzytkownika_int+1;
    }
}
while(getline(plik,osoby.id));
plik.close();


}
