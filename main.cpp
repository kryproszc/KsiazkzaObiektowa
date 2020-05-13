#include <iostream>
#include "KsiazkaAdresowa.h"
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

using namespace std;

int main() {
    KsiazkaAdresowa ksiazkaAdresowa;
    UzytkownikMenager a;
    AdresatMenager adresatkmenager;

    char wybor;
    char ktoremenu='1';
    while(true) {
        if(ktoremenu=='1') {
            system("cls");
            cout<<"Ksiazka adresowa"<<endl;
            cout<<"-------------------"<<endl;
            cout<<"1. Rejestracja"<<endl;
            cout<<"2. Logowanie"<<endl;
            cout<<"3. Koniec"<<endl;
            cin>>wybor;
            if(wybor=='1') {
                ksiazkaAdresowa.rejestracjaUzytkownika();

            } else if(wybor=='2') {
                system("cls");
                ktoremenu= ksiazkaAdresowa.logowanie1();
                ksiazkaAdresowa.czytaKsiazke();

            }
        }
        if(ktoremenu=='2') {

            system("cls");
            cout<< "1.Dodaj adresata "<<endl;
            cout<< "2.Wyswietl wszystkich adresatow"<<endl;
            cout<< "3.Wyszukaj po nazwisku "<<endl;
            cout<< "4.Wyszukaj po imieniu "<<endl;
            cout<< "5.Edytuj adresata "<<endl;
            cout<< "6.Usun adresata"<<endl;
            cout<< "7.Zmien haslo"<<endl;
            cout<< "9.Wyloguj sie"<<endl;
            char wyborpozalogowaniu;
            cin>>wyborpozalogowaniu;
            if(wyborpozalogowaniu=='1') {
                system("cls");
                ksiazkaAdresowa.DodajAdresatow1();
                Sleep(3000);
                getchar();
            } else if(wyborpozalogowaniu=='2') {
                system("cls");
                ksiazkaAdresowa.WyswietlAdresatow();
                Sleep(3000);
                getchar();
            }

            else if(wyborpozalogowaniu=='9') {
                ktoremenu='1';
            }
        }

    }
    return 0;
}
