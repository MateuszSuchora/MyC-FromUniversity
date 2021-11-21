#include "Pracownik.h"
#include <iostream>
using namespace std;
Pracownik::Pracownik(string i, string n, char p, int r, string s,double pl):Osoba(i,n,p,r),stanowisko(s),placa_mies(pl){}
Pracownik::Pracownik(){}
Pracownik::~Pracownik(){}
double Pracownik::placa_roczna(){
    return 12*placa_mies;
}
void Pracownik::info(){
    Osoba::info();
    cout<<" pracuje na stanowisku "<<Getstanowisko()<<" i osiaga roczny dochod ="<<placa_roczna()<<endl;
}
