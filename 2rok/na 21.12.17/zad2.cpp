#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    int licznik=0;
    char a;
    ifstream zad1("text.txt");
    if(!zad1){//sprawdza czy zmienna poprawnie odczytana
        cout<<"Przykro mi nie udalo sie odczytac pliku :("<<endl;
        return 1;
    }//endif

    while(!zad1.eof()){
        zad1.get(a);
        if(!zad1.eof())//bez tego na koncu pisany byl 2 razy ostatni znak
            cout<<a;
        if(isalpha(a))//liczenie wielkosci wiersza
            licznik++;
        if(isspace(a)&&a!=' '){//wyswietlanie pokolei wierszy
            cout<<"(Wielkosc tego wiersza="<<licznik<<')';
            licznik=0;
            cout<<endl;
        }
    }
    cout<<endl<<"(Wielkosc tego wiersza="<<licznik<<')';//dla ostatniego wiersza


    return 0;
}
