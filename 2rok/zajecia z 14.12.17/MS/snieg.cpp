#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    double a,h;
    string sciezka;
    cout<<"Podaj sciezke:"<<endl;
    cin>>sciezka;
    ifstream rownoleglobok(sciezka);
    if(!rownoleglobok){//sprawdza czy zmienna poprawnie utworzona
        cout<<"Przykro mi nie udalo sie odczytac pliku :("<<endl;
        return 1;
    }//endif
    rownoleglobok>>a;
    rownoleglobok>>h;
    //rownoleglobok<<a*h; nie dziala bo mamy ifstream a nie ofstream
    rownoleglobok.close();
    cout<<"Pole="<<a*h;
    return 0;
}
