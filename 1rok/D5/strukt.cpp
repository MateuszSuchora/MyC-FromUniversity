#include <iostream>
using namespace std;
struct ulamek{
    int licznik;
    int mianownik;

};
int NWD(int n, int m){
    int rob;
    while(n>0){
        rob=n-m;
        m=n;
        n=rob;
    }
    return m;
}
void ulamek_z_calkowitej(ulamek &ulamek1, int a){
    ulamek1.licznik=a;
    ulamek1.mianownik=1;
}
void wyswietl(ulamek ulamek1){
     cout<<ulamek1.licznik<<'/'<<ulamek1.mianownik;
}
ulamek ulamek_z_pary( double a, double b){
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
double double_z_ulamka(ulamek ulamek1){
    double a=ulamek1.licznik,b=ulamek1.mianownik;
    double zulam=a/b;
    return zulam;
}
void pobierzul(ulamek &ulamek1){
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
ulamek ilocz(ulamek ulamek1, ulamek ulamek2){
    ulamek ulamek3;
    ulamek3.licznik=ulamek1.licznik*ulamek2.licznik;
    ulamek3.mianownik=ulamek1.mianownik*ulamek2.mianownik;
    return ulamek3;
}
ulamek ilor(ulamek ulamek1, ulamek ulamek2){
    ulamek ulamek3;
    ulamek3.licznik=ulamek1.licznik*ulamek2.mianownik;
    ulamek3.mianownik=ulamek1.mianownik*ulamek2.licznik;
    return ulamek3;
}
ulamek sumaulamkow(ulamek ulamek1, ulamek ulamek2){
    ulamek ulamek3;
    ulamek3.licznik=(ulamek1.licznik*ulamek2.mianownik)+(ulamek1.mianownik*ulamek1.licznik);
    ulamek3.mianownik=ulamek1.mianownik*ulamek1.mianownik;
    return ulamek3;
}
ulamek roznica(ulamek ulamek1, ulamek ulamek2){
    ulamek ulamek3;
    ulamek3.licznik=(ulamek1.licznik*ulamek2.mianownik)-(ulamek1.mianownik*ulamek1.licznik);
    ulamek3.mianownik=ulamek1.mianownik*ulamek1.mianownik;
    return ulamek3;
}
ulamek skoc(ulamek ulamek1){
    ulamek ulamek3;
    int a=NWD(ulamek1.licznik,ulamek1.mianownik);
    ulamek3.licznik=ulamek1.licznik/a;
    ulamek3.mianownik=ulamek1.mianownik/a;
}
int main(){
    int n;
    ulamek ulamek1;
    cout<<"Podaj licznik:";
    cin>>n;
    ulamek_z_calkowitej(ulamek1, n);
    wyswietl(ulamek1);
    cout<<endl;
    ulamek ulamek2;
    int b,c;
    cout<<"Podaj licznik i mianownik:";
    cin>>b>>c;
    ulamek2=ulamek_z_pary( b, c);
    wyswietl(ulamek2);
    cout<<endl<<double_z_ulamka(ulamek2)<<endl;
    pobierzul(ulamek1);
    wyswietl(ulamek1);
    cout<<endl;
    ul_przeciwny(ulamek1);
    cout<<"ulamek przeciwny:";
    wyswietl(ulamek1);
    cout<<endl;
    ul_odwrotny(ulamek1);
    cout<<"ulamek odwrotny:";
    wyswietl(ulamek1);
    cout<<endl;
    pobierzul(ulamek1);
    cout<<"Ulamek 1:";
    ulamek1=skoc(ulamek1);
    wyswietl(ulamek1);
    cout<<endl;
    pobierzul(ulamek2);
    cout<<"Ulamek 2:";
    wyswietl(ulamek2);
    cout<<endl;
    ulamek ulamekiloczyn;
    ulamekiloczyn=ilocz(ulamek1,ulamek2);
    cout<<"iloczyn ulamkow:";
    wyswietl(ulamekiloczyn);
    cout<<endl;
    ulamek ulamekiloraz;
    ulamekiloraz=ilor(ulamek1,ulamek2);
    cout<<"iloraz ulamkow:";
    wyswietl(ulamekiloraz);
    cout<<endl;
    ulamek suma;
    suma=sumaulamkow(ulamek1,ulamek2);
    cout<<"suma ulamkow:";
    wyswietl(suma);
    cout<<endl;
    ulamek roz;
    roz=roznica(ulamek1,ulamek2);
    cout<<"Roznicia ulamkow:";
    wyswietl(roz);
    cout<<endl;
    return 0;
    ulamek1=skoc(ulamek1);
    wyswietl(ulamek1);
}
