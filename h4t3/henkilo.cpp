#include "henkilo.h"


Henkilo::Henkilo(string e, string s):enimi(e),snimi(s)
{
    cout<<"luotiin henkilo "<<e<<" "<<s<<endl;
}

void Henkilo::tulostaTiedot()
{
    cout<<enimi<<" "<<snimi<<endl;
}
