#include <iostream>
#include <string>
#include <cmath>
using namespace std;class Konto{
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
    void Satsaldo(int a){
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
    bool korzysta_z_debetu();
    double w_saldo();
    bool przelej(double kwota,Konto konto);
};
Konto::Konto(string i, string n,double s, double m){
    imie=i;
    nazwisko=n;
    saldo=s;
    max_debet=m;
}
Konto::Konto(string i, string n){
    imie=i;
    nazwisko=n;
    saldo=0;
    max_debet=0;
}
void Konto::ustaw_max_debet(double max_debet){
    this->max_debet=max_debet;
}
void Konto::wplac(double kwota){
    saldo=saldo+kwota;
}
bool Konto::wyplac(double kwota){
    if(kwota<=saldo-max_debet){
        saldo=saldo-kwota;
        return true;
    }
    else
        return false;
}
bool Konto::korzysta_z_debetu(){
    if(saldo<0)
        return true;
    else
        return false;
}
double Konto::w_saldo(){
    return saldo;
}
bool Konto::przelej(double kwota,Konto konto){
    if(kwota<=saldo-max_debet){
        saldo=saldo-kwota;
        konto.saldo=konto.saldo+kwota;
        return true;
    }
    else
        return false;

}

