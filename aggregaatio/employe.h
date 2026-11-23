#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <iostream>

using namespace std;

class Employe
{
private:
    string fname;
    string lname;
public:
    Employe();
    Employe(const string &f, const string &l);
    ~Employe();
    void printEmploye();
};

#endif // EMPLOYE_H
