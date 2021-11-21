#ifndef KONTO_H
#define KONTO_H


#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Konto{
private:
    string imie, nazwisko;
    double saldo, max_debet;
public:
    Konto(){}
    Konto(string i, string n,double s, double m);
    Konto(string i, string n);
    void Setimie(string i){
        imie=i;
    }
    void Setnazwisko(string n){
        nazwisko=n;
    }
    void Setsaldo(int a){
        saldo=a;
    }
    void Satmax_debet(int a){
        max_debet=a;
    }
     string Getimie(){
        return imie;
    }
    string Getnazwisko(){
        return nazwisko;
    }
    double Getsaldo(){
        return saldo;
    }
    double Getmax_debet(){
        return max_debet;
    }
    void ustaw_max_debet(double max_debet);
    void wplac(double kwota);
    bool wyplac(double kwota);
};

#endif // KONTO_H
