#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Wektor{
private:
    double x;
    double y;
    double z;
public:
    Wektor(){
        x=0;
        y=0;
        z=0;
    }
    Wektor(double xa, double ya, double za){
        x=xa;
        y=ya;
        z=za;
    }
    void wyswietl(){
        cout<<'('<<x<<','<<y<<','<<z<<')';
    }
    void Setx(double a){
        x=a;
    }
    void Sety(double a){
        y=a;
    }
    void Setz(double a){
        z=a;
    }
    double Getx(){
        return x;
    }
    double Gety(){
        return y;
    }
    double Getz(){
        return z;
    }
    Wektor dodawanie_wektorow(Wektor a);
    Wektor odejmowanie_wektorow(Wektor a);
    Wektor mnozenie_wektorowe_wektorow(Wektor b);
    Wektor mnozenie_przez_skalar( double b);
    void pobierz();
};
void Wektor::pobierz(){
    double a,b,c;
    cout<<"Podaj x, y, z do Wektora"<<endl;
    cin>>a>>b>>c;
    x=a;
    y=b;
    z=c;
}
Wektor Wektor::dodawanie_wektorow(Wektor a){
    Wektor c;
    c.x=a.x+x;
    c.y=a.y+y;
    c.z=a.z+z;
    return c;
}
Wektor Wektor::mnozenie_wektorowe_wektorow(Wektor b){
    Wektor c;
    c.x=y*z-z*b.y;//a2b3−a3b2
    c.y=z*b.x-x*b.z;//a3b1−a1b3
    c.z=x*b.y-y*b.x;//a1b2−a2b1
    return c;
}
Wektor Wektor::odejmowanie_wektorow(Wektor a){
    Wektor c;
    c.x=x-a.x;
    c.y=y-a.y;
    c.z=z-a.z;
    return c;
}
Wektor Wektor::mnozenie_przez_skalar(double b){
    Wektor c;
    c.x=x*b;
    c.y=y*b;
    c.z=z*b;
    return c;
}

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    Wektor W(a,b,c);
    W.wyswietl();
    cout<<endl;
    Wektor V;
    V.pobierz();
    V.wyswietl();
    cout<<endl;
    Wektor A=W.dodawanie_wektorow(V);
    A.wyswietl();
    cout<<endl;
    Wektor B=W.odejmowanie_wektorow(V);
    B.wyswietl();
    cout<<endl;
    Wektor C=W.mnozenie_wektorowe_wektorow(V);
    C.wyswietl();
    return 0;
}
