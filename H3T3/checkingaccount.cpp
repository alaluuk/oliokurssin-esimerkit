#include "checkingaccount.h"

void CheckingAccount::setOverdraftLimit(double newOverdraftLimit)
{
    overdraftLimit = newOverdraftLimit;
}

CheckingAccount::CheckingAccount(string ac, double ol):Account(ac), overdraftLimit(ol) {}

void CheckingAccount::withdraw(double wd)
{
    if(balance+overdraftLimit >= wd){
        balance-=wd;
    }
    else {
        cout<<"Saldo ja luottoraja ei riita"<<endl;
    }
}

void CheckingAccount::noObject()
{

}
