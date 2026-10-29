#ifndef HENKILO_H
#define HENKILO_H
#include<iostream>
using namespace std;

class Henkilo
{
private:
    string nimi;
    int ika;

public:
    //Henkilo luokan konstruktori on funktio Henkilo()
    //Sillä ei ole koskaan palautusarvon määrittelyä
    //luokalla voi olla useita konstruktoreita (funktion ylikuormittaminen)
    Henkilo();
    Henkilo(string, int);

    string getNimi() const;
    void setNimi(const string &newNimi);
    int getIka() const;
    void setIka(int newIka);
    void tulostaTiedot();
};

#endif // HENKILO_H
