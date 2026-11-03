#ifndef CAR_H
#define CAR_H
#include<iostream>
using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;
public:
    Car(string, string, int);
    string getMake() const;
    void setMake(string ma);
    string getModel() const;
    void setModel(const string &newModel);
    int getYear() const;
    void setYear(int newYear);
};

#endif // CAR_H
