#include "employe.h"

Employe::Employe() {}

Employe::Employe(const string &f, const string &l):fname(f), lname(l)
{

}

Employe::~Employe()
{
    cout<<fname<<lname<<" tuhottiin"<<endl;
}

void Employe::printEmploye()
{
    cout<<fname<<" "<<lname<<endl;
}
