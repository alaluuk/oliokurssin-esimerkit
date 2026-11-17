#ifndef HENKILO_H
#define HENKILO_H
#include <iostream>
#include "osoite.h"

using namespace std;
class Henkilo
{
private:
    string nimi;
    Osoite osoite;
public:
    Henkilo();
    Henkilo(string, string, string, string);
    void tulostaTiedot() const;
};

#endif // HENKILO_H
