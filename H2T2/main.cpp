#include "henkilo.h"

#include <iostream>

using namespace std;

int main()
{
    Henkilo objHenkilo1;
    objHenkilo1.setNimi("Teppo Testi");
    objHenkilo1.setIka(34);
    Henkilo objHenkilo2;
    objHenkilo2.setNimi("Liisa Virtanen");
    objHenkilo2.setIka(25);
    //cout<<objHenkilo1.getNimi();
    objHenkilo1.tulostaTiedot();
    objHenkilo2.tulostaTiedot();

    Henkilo objHenkilo3("Aino Joki",42);
    objHenkilo3.tulostaTiedot();
    return 0;
}
