#include "henkilo.h"

string Henkilo::getNimi() const
{
    return nimi;
}

void Henkilo::setNimi(const string &newNimi)
{
    nimi = newNimi;
}

int Henkilo::getIka() const
{
    return ika;
}

void Henkilo::setIka(int newIka)
{
    ika = newIka;
}

void Henkilo::tulostaTiedot()
{
    cout<<"Nimi = "<<nimi<<" ja ika="<<ika<<endl;
}

Henkilo::Henkilo() {}

Henkilo::Henkilo(string n, int i)
{
    nimi=n;
    //voidaan kirjoittaa myös muodossa
    //this->nimi=n
    //mutta this ei ole tarpeen, kun paramerin nimi on eri
    //kuin luokan muuttuja
    ika=i;
}
