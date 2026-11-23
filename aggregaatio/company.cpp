#include "company.h"

Company::Company() {}

Company::Company(const string &c):companyName(c)
{

}

Company::~Company()
{
    cout<<companyName<<" tuhottiin"<<endl;
}

void Company::addEmploye(shared_ptr<Employe> objE)
{
    employeesList.push_back(objE);
}

void Company::printEmployees()
{
    int n=1;
    cout<<"******************************"<<endl;
    cout<<"Yritys="<<companyName<<endl;
    for(shared_ptr<Employe> obj: employeesList){
        cout<<" "<<n<<".";
        obj->printEmploye();
        n++;
    }
    cout<<"******************************"<<endl;
}
