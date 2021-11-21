#include "Kredyt.h"
#include "Konto.h"

Kredyt::Kredyt(){}
Kredyt::~Kredyt(){}
Kredyt::Kredyt(string i, string n,double s, double m,double k, int o):konto(Konto(i,n,s,m)),kwota_kredytu(k),oprocentowanie(0){}
double Kredyt::odsetki(int liczba_dni){
    return (kwota_kredytu*oprocentowanie*liczba_dni)/36000;
}
