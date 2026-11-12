#include "student.h"

Student::Student(string n, int id):Person(n),studentId(id) {
    cout<<"  luotiin Student olio"<<endl;
}

Student::~Student()
{
cout<<"  Student olio tuhottiin"<<endl;
}

void Student::sayStatus()
{
    cout<<"Olen Student nimi="<<this->getName()<<" studentId="<<studentId<<endl;
}
