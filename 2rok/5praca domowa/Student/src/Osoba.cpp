#include "Osoba.h"
#include <iostream>
#include<string>
using namespace std;
Osoba::Osoba(string i, string n, char p, int r):imie(i),nazwisko(n),plec(p),rok_ur(r){}
void Osoba::pobierz(){
    cout<<"Podaj imie:";
    cin>>imie;
    cout<<"Podaj nazwisko:";
    cin>>nazwisko;
    cout<<"Podaj plec:";
    cin>>plec;
    cout<<"Podaj rok urodzenia:";
    cin>>rok_ur;
}
void Osoba::wyswietl(){
    cout<<imie<<' '<<nazwisko<<" plec:"<<plec<<" rok urodzenia:"<<rok_ur;
}
int Osoba::wiek(int r){
    return r-rok_ur;
}
void Osoba::info(){
    if(plec=='k')
        cout<<"Pani "<<imie<<' '<<nazwisko;
    else
        cout<<"Pan "<<imie<<' '<<nazwisko;
}
