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
        //cout<<a;
        if(isalpha(a)){
            licznik++;
        }
        while(isalpha(a)){//przechodzenie do nastepnego slowa
           zad1.get(a);
           //cout<<a; // uzywane do sprawdzenia
           }

          // cout<<endl; to samo sprawdzenie
    }
    cout<<licznik;
    return 0;
}
