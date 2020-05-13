
#include "AdresatMenager.h"
#include <iostream>
#include <vector>

using namespace std;


string AdresatMenager::DodajeAdresatow(string ID)
{
Adresat adresat=PodajdaneAdresata(ID);
adresaci.push_back(adresat);

PlikZAdresatami a;
a.DodajeAdresatow(adresat);

}

Adresat AdresatMenager::PodajdaneAdresata(string idZalogowanegoUzytkownika) {
    Adresat adresat;
    string id="1";
    string imie="",nazwisko="",nr_tel="",email="",adres="";
    cout<< "Podaj imie: ";
    cin.sync();
    getline(cin,imie);
    cout<< "Podaj nazwisko: ";
    getline(cin,nazwisko);
    cout<< "Podaj numer telefonu: ";
    getline(cin,nr_tel);
    cout<< "Podaj email: ";
    cin.sync();
    getline(cin,email);
    cout<< "Podaj adres: ";
    cin.sync();
    getline(cin,adres);
    adresat.id=id;
    adresat.idZalogowanegoUzytkownika=idZalogowanegoUzytkownika;
    adresat.imie=imie;
    adresat.nazwisko=nazwisko;
    adresat.nr_tel=nr_tel;
    adresat.email=id;
    adresat.adres=adres;
    return adresat;

}
void AdresatMenager::czytaKsiazke1(string ID)
{
    UzytkownikMenager uzytkownik;
PlikZAdresatami a;
a.OdczytKsiazki(adresaci,ID);
}

void AdresatMenager::WyswietlWektor(int j) {
    cout<<adresaci[j].id<<endl;
    cout<<adresaci[j].idZalogowanegoUzytkownika<<endl;
    cout<<adresaci[j].imie<<endl;
    cout<< adresaci[j].nazwisko<<endl;
    cout<< adresaci[j].nr_tel<<endl;
    cout<< adresaci[j].email<<endl;
    cout<< adresaci[j].adres<<endl;
    cout<<endl;
}

void AdresatMenager::WczytajKsiazke() {
    int i=0;
    for(int j=0; j<adresaci.size()-1; j++) {
        WyswietlWektor(j);
        i++;
    }
    if(i==0) {
        cout<< "Brak uzytkownikow w ksiazce."<<endl;
    }
}



