#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "account.h"

class CheckingAccount : public Account
{
private:
    double overdraftLimit;
public:
    CheckingAccount(string ac, double ol);
    virtual void withdraw(double wd) override;
    virtual void noObject() override;
    void setOverdraftLimit(double newOverdraftLimit);
};

#endif // CHECKINGACCOUNT_H
