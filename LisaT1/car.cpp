#include "car.h"

Car::Car() {}

Car::Car(string ma, string mo, int y){
    make=ma;
    model=mo;
    year=y;
}

void Car::display(){
    cout<<"Auton merkki="<<make<<endl;
    cout<<"Auton malli="<<model<<endl;
    cout<<"Auton vuosimalli="<<year<<endl;
    cout<<"*****************"<<endl;
}
