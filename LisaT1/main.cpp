#include <iostream>
#include "car.h"
#include <memory>
using namespace std;

int main()
{
    //luodaan olio pinoon
    Car objCar1("Audi","A6",2012);
    objCar1.display();

    //luodaan olio kekoon raakapointterilla
    Car *objCar2=new Car("Toyota","Yaris",2025);
    objCar2->display();
    //tällätavalla luotu olio on tuhottava
    delete objCar2;
    objCar2=nullptr;

    //luodaan olio kekoon smartpointterilla
    unique_ptr<Car> objCar3=make_unique<Car>("Volvo","X40",2023);
    objCar3->display();

    return 0;
}
