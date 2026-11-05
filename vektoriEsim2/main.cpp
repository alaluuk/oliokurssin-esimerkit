#include <iostream>
#include "person.h"
#include <vector>
using namespace std;
/*
*Tutkitaan kuinka vektoriin voidaan lisätä olioita
*/
int main()
{
    //luodaan vektori Person luokan olioille
    vector<Person> personList;
    //luodaan yksi olio ja lisätään se
    //listaan push_back metodilla
    Person objPerson=Person("Teppo","Testi");
    personList.push_back(objPerson);

    //lisätään kaksi uutta oliota listaan
    //emplace_back metodilla
    //tähän pieni korjaus 5.11.2026
    personList.emplace_back("Liisa","Virta");
    personList.emplace_back("Ville","Joki");

    //kysytään käyttäjältä henkilön etunimi ja sukunimi
    //ja lisätään listaan
    string newfn;
    string newln;
    cout<<"Anna etunimi :";
    cin>>newfn;
    cout<<"Anna sukunimi :";
    cin>>newln;
    personList.emplace_back(newfn, newln);

    //sama toisella tavalla
    Person objPerson2;
    cout<<"Anna 2. etunimi :";
    cin>>newfn;
    cout<<"Anna 2. sukunimi :";
    cin>>newln;
    objPerson2.setFname(newfn);
    objPerson2.setLname(newln);
    personList.push_back(objPerson2);


    cout<<"Personlistan oliot"<<endl;
    //tulostetaan kaikkien listan olioiden data
    for(Person &objP: personList){
        objP.printData();
    }

    //tulostetaan ensimmäisen olion data
    cout<<"Eka olio: ";
    personList[0].printData();

    cout<<"Listan olioiden maara="<<personList.size()<<endl;

    return 0;
}
