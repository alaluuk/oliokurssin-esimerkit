#include "henkilo.h"

Henkilo::Henkilo() {}

Henkilo::Henkilo(string n, string k, string p, string ka)
{
    nimi=n;
    objOsoite=make_unique<Osoite>();
    objOsoite->setKatu(k);
    objOsoite->setPostinumero(p);
    objOsoite->setKaupunki(ka);
}

void Henkilo::tulostaTiedot() const
{
    cout<<"Nimi="<<nimi<<", osoite=";
    objOsoite->tulostaTiedot();
}
