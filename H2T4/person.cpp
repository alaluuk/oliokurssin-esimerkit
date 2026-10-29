#include "person.h"

int Person::getAge() const
{
    return age;
}

void Person::setAge(int newAge)
{
    age = newAge;
}

string Person::getName() const
{
    return name;
}

void Person::setName(const string &newName)
{
    name = newName;
}

Person::~Person()
{
    cout<<"Olio tuhottiin"<<endl;
}

void Person::printData()
{
    cout<<"nimi="<<name<<" ika="<<age<<endl;
}

Person::Person() {}

Person::Person(string n, int a)
{
    name=n;
    age=a;
}
