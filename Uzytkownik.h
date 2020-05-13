#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H
#include <iostream>

using namespace std;

class Uzytkownik
{
    string id ;
    string login;
    string haslo;

public:
    void ustawId(string noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string nowehaslo);
    string pobierzId();
    string pobierzLogin();
    string pobierzHaslo();

};
#endif // UZYTKOWNIK_H
