#include <iostream>

using namespace std;
/*
 * Esimerkki havainnollistaa try catch rakenteen tarvetta.
 * Sovellus kyselee lukuja, kunnes annetaan luku 999
 * Sovellus lukee käyttäjän syötteen merkkijonona ja muuttaa
 * sen kokonaisluvuksi. Sovellus tulostaa annetun luvun
 * kaksinkertaisena.
 * Merkkijonon muunnos kokonaisluvuksi tehdää tässä stoi-funktiolla
 * */
int main()
{
    int number=1;
    string word;
    // tällä versiolla sovellus kaatuu, jos annetaan vahingossa merkkejä
    // tai liian iso luku
    // while (number != 999){
    //     cout<<"Anna kokonaisluku: ";
    //     cin>>word;
    //     number=stoi(word);
    //     cout<<"Kaksinkertaisena luku="<<2*number<<endl;
    // }

    while(number != 999){
        cout<<"Anna kokonaisluku : ";
        cin>>word;
        try {
            number=stoi(word);
            cout<<"Kaksinkertaisena luku="<<2*number<<endl;
        } catch (out_of_range &e) {
            cout<<"Jokin meni vikaan"<<endl;
        }
    }
    return 0;
}
