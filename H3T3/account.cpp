#include "account.h"

Account::Account(string ac):accountNumber(ac) {}

void Account::deposit(double de)
{
    balance+=de;//balanceen lisätään de
}

void Account::withdraw(double wi)
{
    if(balance>=wi){
        balance-=wi;
    }
    cout<<"Tililla ei tarpeeksi rahaa"<<endl;
}

void Account::displayInfo()
{
    cout<<"Tilinunero="<<accountNumber<<" saldo="<<balance<<endl;
}
