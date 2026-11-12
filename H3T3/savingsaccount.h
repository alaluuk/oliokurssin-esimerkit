#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "account.h"

class SavingsAccount : public Account
{
private:
    double interestRate;
public:
    SavingsAccount(string ac, double ir);
    void calculateInterest();
    void setInterestRate(double newInterestRate);
    virtual void noObject() override;
};

#endif // SAVINGSACCOUNT_H
