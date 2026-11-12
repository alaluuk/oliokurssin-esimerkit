#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
using namespace std;

class Account
{
protected:
    string accountNumber;
    double balance=0;
public:
    Account(string);
    void deposit(double);
    virtual void withdraw(double);
    void displayInfo();
    //estetään olion luonti tästä luokasta
    virtual void noObject()=0;
};

#endif // ACCOUNT_H
