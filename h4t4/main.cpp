#include <iostream>
#include "yritys.h"
#include <memory>
using namespace std;

int main()
{
    unique_ptr<Yritys> objYritys = make_unique<Yritys>("Power","Elektroniikka");
    objYritys->tulostaYrityksenTiedot();
    objYritys->tulostaYrityksenHenkilot();
    return 0;
}
