#include "UzytkownikMenager.h"
#include <sstream>
#include <windows.h>



void UzytkownikMenager::rejestracjaUzytkownika() {

    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    PlikZUzytkownikami plikzuzytkownikami;
    plikzuzytkownikami.DopiszDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}
Uzytkownik UzytkownikMenager::podajDaneNowegoUzytkownika() {
    Uzytkownik uzytkownik;
    string nazwa,haslo1,id_string;
    int id_int;
    cout<< "Podaj nazwe uzytkownika: ";
    cin>>nazwa;
    int i=0;

    while(i<uzytkownicy.size()) {
        if(uzytkownicy[i].pobierzLogin()==nazwa) {
            cout<<"Uzytkowniek o nazwie: "<<uzytkownicy[i].pobierzLogin()<<" juZ istnieje. Wpisz inna nazwe uzytkwnika: ";
            cin>>nazwa;
            i=0;
        } else {
            i++;
        }
    }
    cout<< "Podaj haslo: ";
    cin>>haslo1;

    if(uzytkownicy.size()==0) {
        id_int=1;
    } else
        id_int=uzytkownicy.size();
    MetodyPomocnicze a;
    id_string=a.konwersja_String(id_int);
    uzytkownik.ustawId(id_string);
    uzytkownik.ustawLogin(nazwa);
    uzytkownik.ustawHaslo(haslo1);
    return uzytkownik;
    cout<< "Konto zalozone!"<<endl;
    Sleep(1000);
}
void UzytkownikMenager::czytajUzytkownikowZPliku() {
    PlikZUzytkownikami plikzuzytkownikami;
    plikzuzytkownikami.czytaBazeUzytkownikow(uzytkownicy);
}

void UzytkownikMenager::ustawId(string noweId)
{

    ID=noweId;
}


string UzytkownikMenager::logowanieUzytkownika() {
 ID=logowanie();
}


string UzytkownikMenager::logowanie() {
    string nazwa;
    string haslo;
    int i=0;
    int d=0;
    cout<< "Podaj nazwe uzytkownika: ";
    cin>>nazwa;
    while(i<uzytkownicy.size()) {
            d++;
        if(uzytkownicy[i].pobierzLogin() == nazwa) {
            for(int q=0; q<3; q++) {
                cout<< "Podaj haslo. Pozostalo "<<3-q<< " prob"<<": ";
                cin>>haslo;
                if(uzytkownicy[i].pobierzHaslo()==haslo) {
                    return uzytkownicy[i].pobierzId();
                }
            }
             return "";
        }
        i++;
    }
    if(d==(uzytkownicy.size()))
    {
        return "";
    }
}

void UzytkownikMenager::wypisz() {
    for(int i=0; i<uzytkownicy.size()-1; i++) {
        cout<<uzytkownicy[i].pobierzId()<<"|";
        cout<<uzytkownicy[i].pobierzLogin()<<"|";
        cout<<uzytkownicy[i].pobierzHaslo()<<"|";
        cout<<endl;
    }
}

