#include "yritys.h"


Yritys::Yritys() {}

Yritys::Yritys(const string &ni, const string &to)
{
    nimi=ni;
    toimiala=to;
    henkiloLista.emplace_back(make_unique<Henkilo>("Viljo","Virtanen"));
    henkiloLista.emplace_back(make_unique<Henkilo>("Aino","Jokinen"));
    henkiloLista.emplace_back(make_unique<Henkilo>("Liisa","Meri"));
}

void Yritys::tulostaYrityksenTiedot()
{
    cout<<nimi<<" toimiala:"<<toimiala<<endl;
}

void Yritys::tulostaYrityksenHenkilot()
{
    cout<<"Henkilot:"<<endl;
    // for (const unique_ptr<Henkilo> &obj: henkiloLista){
    //     obj->tulostaTiedot();
    // }
    //auto sanalla
    for(auto &objA: henkiloLista){
        objA->tulostaTiedot();
    }
}
