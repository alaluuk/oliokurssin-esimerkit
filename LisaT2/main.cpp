#include <iostream>
#include "car.h"
using namespace std;

int main()
{
    Car objCar=Car("Volvo", "X40",2022);
    cout<<objCar.getMake()<<","<<objCar.getModel()<<","<<objCar.getYear()<<endl;
    return 0;
}
