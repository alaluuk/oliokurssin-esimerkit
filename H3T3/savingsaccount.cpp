#include "savingsaccount.h"

SavingsAccount::SavingsAccount(string ac, double ir):Account(ac),interestRate(ir) {
}

void SavingsAccount::calculateInterest()
{
    double interest=balance*(interestRate/100);
    cout<<"Vuosikorko = "<<interest<<endl;
}

void SavingsAccount::setInterestRate(double newInterestRate)
{
    interestRate = newInterestRate;
}

void SavingsAccount::noObject()
{

}
