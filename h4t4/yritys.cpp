#include "yritys.h"


Yritys::Yritys() {}

Yritys::Yritys(const string &ni, const string &to)
{
    nimi=ni;
    toimiala=to;
    henkiloLista.emplace_back(make_unique<Henkilo>("Viljo","Virtanen","Mannerheimintie 2","00100","Helsinki"));
    henkiloLista.emplace_back(make_unique<Henkilo>("Aino","Jokinen", "Hallituskatu 4", "20100","Tampere"));
    henkiloLista.emplace_back(make_unique<Henkilo>("Liisa","Meri","Linnankatu 1","90150","Oulu"));
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
