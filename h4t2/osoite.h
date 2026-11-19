#ifndef OSOITE_H
#define OSOITE_H
#include <iostream>

using namespace std;

class Osoite
{
private:
    string katu;
    string postinumero;
    string kaupunki;
public:
    Osoite();
    ~Osoite();
    void tulostaTiedot() const;
    string getKatu() const;
    void setKatu(const string &newKatu);
    string getPostinumero() const;
    void setPostinumero(const string &newPostinumero);
    string getKaupunki() const;
    void setKaupunki(const string &newKaupunki);
};

#endif // OSOITE_H
