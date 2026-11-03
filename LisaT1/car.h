#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;
public:
    Car();
    Car(string ma, string mo, int y);
    void display();
};

#endif // CAR_H
