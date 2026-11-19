#ifndef HENKILO_H
#define HENKILO_H
#include <iostream>
#include <memory>
#include "osoite.h"

using namespace std;

class Henkilo
{
    string enimi;
    string snimi;
    unique_ptr<Osoite> objOsoite;
public:
    Henkilo(const string &en, const string &sn, const string &ka, const string &po, const string &kau);
    void tulostaTiedot();
};

#endif // HENKILO_H
