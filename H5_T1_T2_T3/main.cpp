#include <iostream>

using namespace std;
void asetaNollaksi(int *luku);
void kasvata(int &luku);
int tuplaa(int luku);

int main()
{
    //Tehtävä1
    int x=42;
    int *pointerX; //luodaan pointteri, jolla voi osoittaa kokonaislukumuuttujaan
    pointerX= &x; //pointter osoittaa muuttujaan x
    cout<<"Muuttujan x arvo = "<<x<<endl;
    cout<<"Muuttujan x arvo = "<<*pointerX<<endl;
    cout<<"Muuttujan x osoite = "<<pointerX<<endl;

    //Tehtävä2
    asetaNollaksi(&x);
    cout<<"Muuttujan x arvo = "<<x<<endl;

    //Tehtävä3
    kasvata(x);
    cout<<"Muuttujan x arvo = "<<x<<endl;

    //palautusarvolla
    x = tuplaa(x);
    cout<<"Muuttujan x arvo = "<<x<<endl;
    return 0;
}

//Tehtävä2
void asetaNollaksi(int *luku){
    *luku=0;
}

//Tehtävä3
void kasvata(int &luku){
    luku++;
}

//palautusarvolla
int tuplaa(int luku){
    return 2*luku;
}