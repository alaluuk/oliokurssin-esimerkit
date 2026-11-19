#include <iostream>
#include "henkilo.h"
using namespace std;

int main()
{
    Henkilo objHenkilo("Teppo Testi","Isokatu 4","90100","Oulu");
    objHenkilo.tulostaTiedot();

    Henkilo *objHenkilo2=new Henkilo("Mauno Mainio","Isokatu 2","90100","Oulu");
    objHenkilo2->tulostaTiedot();
    delete objHenkilo2;
    objHenkilo2=nullptr;
    return 0;
}
