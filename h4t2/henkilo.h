#ifndef HENKILO_H
#define HENKILO_H
#include <iostream>
#include "osoite.h"
#include <memory>

using namespace std;
class Henkilo
{
private:
    string nimi;
    unique_ptr<Osoite> objOsoite;
public:
    Henkilo();
    Henkilo(string, string, string, string);
    void tulostaTiedot() const;
};

#endif // HENKILO_H
