#include "teacher.h"

Teacher::Teacher(string n, int id):Person(n), departmentId(id) {
    cout<<"    luotiin Teacher olio"<<endl;
}

Teacher::~Teacher()
{
    cout<<"  Teacher olio tuhottiin"<<endl;
}

void Teacher::sayStatus()
{
    cout<<"Olen Teacher, nimi="<<this->getName()<<", osastoni id="<<departmentId<<endl;
}
