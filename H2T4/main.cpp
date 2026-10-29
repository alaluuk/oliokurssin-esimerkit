#include <iostream>
#include "person.h"
#include <memory>
using namespace std;

int main()
{
    Person objPerson1("Teppo Testi",27);
    objPerson1.printData();

    Person *objPerson2=new Person("Liisa Joki",28);
    objPerson2->printData();
    //olio pitää muistaa tuhota
    delete objPerson2;
    objPerson2=nullptr;

    //smartpointterilla
    unique_ptr<Person> objPerson3 = make_unique<Person>("Ville Joki",33);
    objPerson3->printData();
    return 0;
}
