#include <iostream>
#include "coffeemaker.h"

using namespace std;

int main()
{
    CoffeeMaker objAutomaatti1(20.0,10.0);
    objAutomaatti1.showStatus();
    objAutomaatti1.showMaked();

    //objAutomaatti1.makeCoffee(); ei onnistunut, koska ei ole tarvikkeita
    //eikä automaatti ole ON tilassa

    cout<<"1.annos:********************"<<endl;

    //lisätään vettä
    objAutomaatti1.lisaaVetta(8.0);
    //lisätään papuja
    objAutomaatti1.lisaaPapuja(8.0);
    //asetetaan tilaan ON
    objAutomaatti1.start();
    //valmistetaan kahviannos
    objAutomaatti1.makeCoffee();

    //tarkistetaan tila ja tehdyt annokset
    objAutomaatti1.showStatus();
    objAutomaatti1.showMaked();

    cout<<"2.annosta:********************"<<endl;
    //valmistetaan 2.annosta ja tarkistetaan tila
    //objAutomaatti1.stop();
    objAutomaatti1.makeCoffee();
    objAutomaatti1.makeCoffee();

    objAutomaatti1.showStatus();
    objAutomaatti1.showMaked();
    return 0;
}
