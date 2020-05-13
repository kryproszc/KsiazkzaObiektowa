#include "Uzytkownik.h"

using namespace std;

void Uzytkownik::ustawId(string noweId)
{
    id=noweId;
}
void  Uzytkownik::ustawLogin(string nowyLogin)
{
    login=nowyLogin;
}
void  Uzytkownik::ustawHaslo(string nowehaslo)
{
    haslo=nowehaslo;
}

string  Uzytkownik::pobierzId()
{
    return id;
}
string  Uzytkownik::pobierzLogin()
{
    return login;
}
string  Uzytkownik::pobierzHaslo()
{
    return haslo;
}
