#include <iostream>
#include "account.h"
#include "savingsaccount.h"
#include "checkingaccount.h"
using namespace std;

int main()
{
    SavingsAccount objSA("FI1234567",3.50);
    objSA.displayInfo();
    objSA.deposit(1500.00);
    objSA.displayInfo();
    objSA.withdraw(600);
    objSA.displayInfo();

    CheckingAccount objCA("FI987654",2000.00);
    objCA.displayInfo();
    objCA.withdraw(500);
    objCA.displayInfo();
    objCA.withdraw(1500);
    objCA.displayInfo();
    return 0;
}
