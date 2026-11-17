#include "henkilo.h"

Henkilo::Henkilo() {}

Henkilo::Henkilo(string n, string k, string p, string ka)
{
    nimi=n;
    osoite.setKatu(k);
    osoite.setPostinumero(p);
    osoite.setKaupunki(ka);
}

void Henkilo::tulostaTiedot() const
{
    cout<<"Nimi="<<nimi<<", osoite=";
    osoite.tulostaTiedot();
}
