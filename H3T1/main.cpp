#include <iostream>
#include "henkilo.h"
#include "opiskelija.h"
using namespace std;

int main()
{
    Henkilo objH("Ville Virta",45);
    Opiskelija objOp;
    objOp.setNimi("Alli Meri");
    objOp.setIka(22);
    objOp.setOpiskelijanumero("T501");

    objH.tulostaTiedot();
    objOp.tulostaTiedot();

    Opiskelija objOp2("Aimo Joki",33,"A777");
    objOp2.tulostaTiedot();

    return 0;
}
