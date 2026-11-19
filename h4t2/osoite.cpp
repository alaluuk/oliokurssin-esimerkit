#include "osoite.h"

string Osoite::getKatu() const
{
    return katu;
}

void Osoite::setKatu(const string &newKatu)
{
    katu = newKatu;
}

string Osoite::getPostinumero() const
{
    return postinumero;
}

void Osoite::setPostinumero(const string &newPostinumero)
{
    postinumero = newPostinumero;
}

string Osoite::getKaupunki() const
{
    return kaupunki;
}

void Osoite::setKaupunki(const string &newKaupunki)
{
    kaupunki = newKaupunki;
}

Osoite::Osoite() {}

Osoite::~Osoite()
{
    cout<<"Osoite olio tuhottiin"<<endl;
}

void Osoite::tulostaTiedot() const
{
    cout<<katu<<" "<<postinumero<<" "<<kaupunki<<endl;
}
