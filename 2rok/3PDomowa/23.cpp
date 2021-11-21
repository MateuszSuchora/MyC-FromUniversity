#include <iostream>
#include <string>
using namespace std;
class Towar{
    string Nazwa;
    int Ilosc;
    double Cena_netto;
public:
    void SetNazwa(string a){
        Nazwa=a;
    }
    void SetIlosc(int a){
        Ilosc=a;
    }
    void SetCena_netto(double a){
        Cena_netto=a;
    }
    string GetNazwa(){
        return Nazwa;
    }
    int GetIlosc(){
        return Ilosc;
    }
    double GetCena_netto(){
        return Cena_netto;
    }
    double Brutto(double a);
    double Ile_za_n(int n, double pod);
    bool Metodatowarow(int n);
};
double Towar::Brutto(double a){
    return (Cena_netto+(0.01*a*Cena_netto));
}
double Towar::Ile_za_n(int n, double pod){
    double zpod;
    zpod=0.01*pod*Cena_netto;
    return (Cena_netto + zpod)*n ;
}
bool Towar::Metodatowarow(int n){
    if(n>Ilosc){
        Ilosc=0;
        return 0;
    }
    else {
        Ilosc = Ilosc-n;
        return 0;
    }
}

