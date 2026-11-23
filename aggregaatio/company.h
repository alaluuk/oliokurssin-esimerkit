#ifndef COMPANY_H
#define COMPANY_H
#include <iostream>
#include "employe.h"
#include<vector>
#include<memory>

using namespace std;

class Company
{
private:
    string companyName;
    vector<shared_ptr<Employe>> employeesList;
public:
    Company();
    Company(const string &c);
    ~Company();
    void addEmploye(shared_ptr<Employe> objE);
    void printEmployees();
};

#endif // COMPANY_H
