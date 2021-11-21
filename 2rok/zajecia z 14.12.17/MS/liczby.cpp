#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    int n;
    double zmienna;
    cout<<"Podaj ile liczb ma byc na liscie:";
    cin>>n;
    ofstream lista("lista.txt");
    if(!lista){//sprawdza czy zmienna poprawnie utworzona
        cout<<"Przykro mi nie udalo sie utworzyc pliku :("<<endl;
        return 1;
    }//endif
    for(int j=0;j<n;j++){
        cout<<"Podaj "<<j+1<<" liczbe:";
        cin>>zmienna;
        lista<<zmienna;
        lista<<endl;
    }
    double suma=0;
    ifstream liczby("lista.txt");
    if(!liczby){//sprawdza czy zmienna poprawnie odczytana
        cout<<"Przykro mi nie udalo sie odczytac pliku :("<<endl;
        return 1;
    }//endif
   while (!liczby.eof()){
        liczby>>zmienna;
        suma=suma+zmienna;
    }
    liczby.close();
    ofstream srednia("srednia.txt");
    if(!srednia){//sprawdza czy zmienna poprawnie utworzona
        cout<<"Przykro mi nie udalo sie utworzyc pliku :("<<endl;
        return 1;
    }//endif
    srednia<<(suma/n);
    srednia.close();
    return 0;
}
