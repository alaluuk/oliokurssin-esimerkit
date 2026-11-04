#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> luvutVektori;
    int luku=1;
    while(luku != 99){
        cout<<"Anna luku (lopeta antamalla 99)"<<endl;
        cin>>luku;
        //lisätään annettu luku vektoriin
        luvutVektori.push_back(luku);
    }
    cout << "Vektorissa on luvut:" << endl;
    for(int vluku: luvutVektori){
        //vluku luetaan vektorista yksi kerrallaan
        if(vluku != 99)
            cout<<vluku <<" ";
    }
    cout<<endl;
    return 0;
}
