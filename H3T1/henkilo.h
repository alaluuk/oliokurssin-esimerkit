#ifndef HENKILO_H
#define HENKILO_H
#include<iostream>
using namespace std;

class Henkilo
{
private:
    string nimi;
    int ika;
protected:
    //string nimi; (testi)
public:
    Henkilo();
    Henkilo(string n, int i);
    string getNimi() const;
    void setNimi(const string &newNimi);
    int getIka() const;
    void setIka(int newIka);
    //tulostatiedot halutaan ylikirjoittaa
    //perivässä luokassa, joten merkataan
    //se virtuaalikseksi
    virtual void tulostaTiedot();
};

#endif // HENKILO_H
