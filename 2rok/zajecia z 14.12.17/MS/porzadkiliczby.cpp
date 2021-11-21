#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    double a;
    ifstream liczby("Liczby.txt");
    if(!liczby){//sprawdza czy zmienna poprawnie odczytana
        cout<<"Przykro mi nie udalo sie odczytac pliku :("<<endl;
        return 1;
    }//endif
    ofstream liczby2("Liczby2.txt");
    if(!liczby2){//sprawdza czy zmienna poprawnie odczytana
        cout<<"Przykro mi nie udalo sie wczytac pliku :("<<endl;
        return 1;
    }//endif
    while(!liczby.eof()){
        liczby>>a;
        liczby2<<a;
        liczby2<<endl;
    }
    liczby.close();
    liczby2.close();
    return 0;
}
