#include <iostream>
#include "KsiazkaAdresowa.h"
#include <fstream>
#include <sstream>

#include "windows.h"

using namespace std;

KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikmenager.czytajUzytkownikowZPliku();
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikmenager.rejestracjaUzytkownika();
}

char KsiazkaAdresowa::logowanie1(){
    char ktoremenu;
    uzytkownikmenager.logowanieUzytkownika();
    if(uzytkownikmenager.ID=="") {
                    cout<< "Login lub haslo niepoprawne. Sprobuj raz jeszcze.";
                    cout<<endl;
                    Sleep(3000);
                    return ktoremenu='1';
                } else if(uzytkownikmenager.ID!="") {
                   return ktoremenu='2';
                }
}

void KsiazkaAdresowa::DodajAdresatow1()
{
    adresatkmenager.DodajeAdresatow(uzytkownikmenager.ID);
}

void KsiazkaAdresowa::czytaKsiazke()
{

adresatkmenager.czytaKsiazke1(uzytkownikmenager.ID);
}

void KsiazkaAdresowa::wypisz()
{
    uzytkownikmenager.wypisz();
}

void KsiazkaAdresowa::WyswietlAdresatow()
{
    adresatkmenager.WczytajKsiazke();
}

