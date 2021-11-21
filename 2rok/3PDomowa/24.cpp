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
    double Ile_za_n(int n, double p);
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
        return 0;
    }
    else {
        Ilosc = Ilosc-n;
        return 1;
    }
}
int main(){
    string N;
    cout<<"Podaj nazwe towaru:";
    cin>>N;
    int I,iletow;
    cout<<endl<<"Podaj Ilosc towaru:";
    cin>>I;
    double C,pod;
    cout<<endl<<"Podaj Cene netto towaru:";
    cin>>C;
    Towar T1;
    T1.SetNazwa(N);
    T1.SetIlosc(I);
    T1.SetCena_netto(C);
    cout<<endl<<"Ile Towaru chcesz kupic? :";
    cin>>iletow;
    cout<<endl<<"Jaki jest podatek? :";
    cin>>pod;
    if(T1.Metodatowarow(iletow))
        cout<<endl<<"Do zaplaty:"<<T1.Ile_za_n(iletow, pod);
    else
        cout<<"Niema tyle towaru w magazynie";
    return 0;
}
