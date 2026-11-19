#ifndef OSOITE_H
#define OSOITE_H
#include <iostream>

using namespace std;
class Osoite
{
private:
    string katuosoite;
    string postinumero;
    string kaupunki;
public:
    Osoite();
    Osoite(const string &ka, const string &po, const string &kau );
    void tulostaOsoite();
    void setKatuosoite(const string &newKatuosoite);
    void setPostinumero(const string &newPostinumero);
    void setKaupunki(const string &newKaupunki);
};

#endif // OSOITE_H
