#include <iostream>
#include<memory>
#include "employe.h"
#include "company.h"

using namespace std;

int main()
{
    shared_ptr<Employe> objE1=make_shared<Employe>("Teppo", "Testi");
    shared_ptr<Employe> objE2=make_shared<Employe>("Liisa", "Joki");
    shared_ptr<Employe> objE3=make_shared<Employe>("Aino", "Meri");

    Company *objC1=new Company("Gigantti");
    Company *objC2=new Company("Power");

    objC1->addEmploye(objE1);
    objC1->addEmploye(objE2);

    objC2->addEmploye(objE1);
    objC2->addEmploye(objE3);

    objC1->printEmployees();
    objC2->printEmployees();

    delete objC1;
    objC1=nullptr;

    //Tehtävässä ei suoriteta seuraavia, mutta ne tulisi olla
    //oikeassa sovelluksessa
    // delete objC2;
    // objC2=nullptr;

    return 0;
}
