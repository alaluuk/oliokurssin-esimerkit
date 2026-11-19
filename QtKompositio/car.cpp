#include "car.h"

Car::Car(const QString &b, const QString &m, QObject *parent)
    : QObject{parent}
{
    brand=b;
    model=m;
    objEngine=new Engine("Diesel",this);

    //koska tämä Car-olio (this) asetetaan
    //Engine-olion parentiksi
    //se tuhoaa Engine-olion, kun itse tuhoutuu
}

void Car::printCarData()
{
    qDebug()<<brand<<" "<<model<<" ";
    objEngine->showEngine();
}
