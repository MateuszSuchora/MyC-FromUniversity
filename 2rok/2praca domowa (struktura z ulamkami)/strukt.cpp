#include <iostream>
#include <cmath>
using namespace std;
struct ulamek{
    int licznik;
    int mianownik;

};
void pobierz_ul(ulamek &ulamek1){
    int a,b;
    cout<<"Podaj licznik:";
    cin>>a;
    cout<<"Podaj mianownik:";
    cin>>b;
    if((a<0&&b<0)||(a>0&&b<0)){
        ulamek1.licznik=-a;
       ulamek1.mianownik=-b;
    }
    else {
       ulamek1.licznik=a;
       ulamek1.mianownik=b;
    }
}
void wyswietl_ul(ulamek ulamek1){
     cout<<ulamek1.licznik<<'/'<<ulamek1.mianownik;
}
void ulamek_z_calkowitej(ulamek &ulamek1, int a){
    ulamek1.licznik=a;
    ulamek1.mianownik=1;
}
ulamek ulamek_z_pary( int a, int b){
    ulamek ulamek1;

    if((a<0&&b<0)||(a>0&&b<0)){
        ulamek1.licznik=-a;
       ulamek1.mianownik=-b;
    }
    else {
       ulamek1.licznik=a;
       ulamek1.mianownik=b;
    }

    return ulamek1;

}
ulamek skroc_ul(ulamek ulamek1){
    ulamek ulamek2;
    int a,b;
    a=abs(ulamek1.licznik);
    b=abs(ulamek1.mianownik);
    while(a != b)
    if(a < b) b -= a;
    else a -= b;
    ulamek2.licznik=(ulamek1.licznik)/a;
    ulamek2.mianownik=(ulamek1.mianownik)/a;
    return ulamek2;

}
double double_z_ulamka(ulamek ulamek1){
    double a=ulamek1.licznik,b=ulamek1.mianownik;
    double c=a/b;
    return c;
}
void ul_przeciwny(ulamek &ulamek1){
    ulamek1.licznik=-(ulamek1.licznik);
}
void ul_odwrotny(ulamek &ulamek1){
    int a,b;
    a=ulamek1.licznik;
    b=ulamek1.mianownik;
    if(a<0){
        ulamek1.licznik=-b;
       ulamek1.mianownik=-a;
    }
    else {
       ulamek1.licznik=b;
       ulamek1.mianownik=a;
    }
}
ulamek iloczyn_ul(ulamek ulamek1, ulamek ulamek2){
    ulamek ulamek3;
    ulamek3.licznik=ulamek1.licznik*ulamek2.licznik;
    ulamek3.mianownik=ulamek1.mianownik*ulamek2.mianownik;
    return ulamek3;
}
ulamek iloraz_ul(ulamek ulamek1, ulamek ulamek2){
    ulamek ulamek3;
    ulamek3.licznik=ulamek1.licznik*ulamek2.mianownik;
    ulamek3.mianownik=ulamek1.mianownik*ulamek2.licznik;
    return ulamek3;
}
ulamek suma_ul(ulamek ulamek1, ulamek ulamek2){
    ulamek ulamek3;
    ulamek3.licznik=(ulamek1.licznik*ulamek2.mianownik)+(ulamek1.mianownik*ulamek2.licznik);
    ulamek3.mianownik=ulamek1.mianownik*ulamek2.mianownik;
    return ulamek3;
}
ulamek roznica_ul(ulamek ulamek1, ulamek ulamek2){
    ulamek ulamek3;
    ulamek3.licznik=(ulamek1.licznik*ulamek2.mianownik)-(ulamek1.mianownik*ulamek2.licznik);
    ulamek3.mianownik=ulamek1.mianownik*ulamek2.mianownik;
    return ulamek3;
}
int main(){
    int a,b,c;
    ulamek ulamek1,ulamek2,ulamek3;
    pobierz_ul(ulamek1);
    ulamek1=skroc_ul(ulamek1);
    wyswietl_ul(ulamek1);
    cout<<endl<<"Podaj liczbe do ulamka z calkowitej:";
    cin>>a;
    ulamek_z_calkowitej(ulamek2,a);
    wyswietl_ul(ulamek2);
    cout<<endl<<"Podaj 2 liczby do ulamka z pary:";
    cin>>b>>c;
    ulamek3=ulamek_z_pary(b,c);
    ulamek3=skroc_ul(ulamek3);
    wyswietl_ul(ulamek3);
    cout<<endl<<"Ulamek przeciwny do poprzedniego:";
    ul_przeciwny(ulamek3);
    wyswietl_ul(ulamek3);
    cout<<endl<<"Ulamek odwrotny do poprzedniego:";
    ul_odwrotny(ulamek3);
    wyswietl_ul(ulamek3);
    cout<<endl<<"Pierwszy ulamek do dzialan"<<endl;
    pobierz_ul(ulamek1);
    cout<<endl<<"Drugi ulamek do dzialan"<<endl;
    pobierz_ul(ulamek2);
    cout<<"Dzialania:";
    ulamek3=suma_ul(ulamek1,ulamek2);
    cout<<endl<<"Suma:";
    ulamek3=skroc_ul(ulamek3);
    wyswietl_ul(ulamek3);
    ulamek3=roznica_ul(ulamek1,ulamek2);
    cout<<endl<<"Roznica:";
    ulamek3=skroc_ul(ulamek3);
    wyswietl_ul(ulamek3);
    ulamek3=iloczyn_ul(ulamek1,ulamek2);
    cout<<endl<<"Iloczyn:";
    ulamek3=skroc_ul(ulamek3);
    wyswietl_ul(ulamek3);
    ulamek3=iloraz_ul(ulamek1,ulamek2);
    cout<<endl<<"Iloraz:";
    ulamek3=skroc_ul(ulamek3);
    wyswietl_ul(ulamek3);


    return 0;
}
