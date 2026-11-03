#include "car.h"

Car::Car(string ma, string mo, int y) {
    make=ma;
    model=mo;
    year=y;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYear() const
{
    return year;
}

void Car::setYear(int newYear)
{
    year = newYear;
}

string Car::getMake() const{
    return make;
}

void Car::setMake(string ma){
    make=ma;
}


