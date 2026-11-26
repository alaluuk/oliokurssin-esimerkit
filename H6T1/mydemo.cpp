#include "mydemo.h"

MyDemo::MyDemo(QObject *parent)
    : QObject{parent}
{
    //1.erillinen slot-funktio
    //connect(this, &MyDemo::mySignal, this, &MyDemo::mySlot);

    //2.korvataan slot lambda funktiolla
    //nyt siis metodi mySlot voitaisiin poistaa

    connect(this, &MyDemo::mySignal, this,[](string na){
        cout<<"Terve "<<na<<endl;
    });
}

void MyDemo::askName()
{
    string name;
    cout<<"Anna nimesi"<<endl;
    cin>>name;
    emit mySignal(name);
}

void MyDemo::mySlot(string na)
{
    cout<<"Terve "<<na<<endl;
}
