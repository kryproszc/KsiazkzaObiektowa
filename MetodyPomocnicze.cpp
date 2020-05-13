#include "MetodyPomocnicze.h"
#include <sstream>

string MetodyPomocnicze::konwersja_String(int liczba) {
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}
