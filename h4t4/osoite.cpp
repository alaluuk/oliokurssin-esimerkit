#include "osoite.h"

void Osoite::setKatuosoite(const string &newKatuosoite)
{
    katuosoite = newKatuosoite;
}

void Osoite::setPostinumero(const string &newPostinumero)
{
    postinumero = newPostinumero;
}

void Osoite::setKaupunki(const string &newKaupunki)
{
    kaupunki = newKaupunki;
}

Osoite::Osoite()
{

}

Osoite::Osoite(const string &ka, const string &po, const string &kau):
    katuosoite(ka),postinumero(po),kaupunki(kau)
{}

void Osoite::tulostaOsoite()
{
    cout<<katuosoite<<" "<<postinumero<<" "<<kaupunki<<endl;
}
