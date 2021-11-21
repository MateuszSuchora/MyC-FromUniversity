#include "Konto.h"

Konto::Konto(string i, string n,double s, double m):imie(i),nazwisko(n),saldo(s),max_debet(m){}
Konto::Konto(string i, string n):imie(i),nazwisko(n),saldo(0),max_debet(0){}
void Konto::ustaw_max_debet(double max_debet){
    this->max_debet=max_debet;
}
void Konto::wplac(double kwota){
    saldo=saldo+kwota;
}
bool Konto::wyplac(double kwota){
    if(kwota<=saldo-max_debet){
        saldo=saldo-kwota;
        return 1;
    }
    else
        return 0;
}
