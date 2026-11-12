#include "person.h"

string Person::getName() const
{
    return name;
}

void Person::sayStatus()
{
    cout<<"Olen person nimeni="<<name<<endl;
}

Person::Person(string n):name(n) {
}
