#include <iostream>
using namespace std;
void wypelnij(int rozm, double ilosc[], string a){ //funkcja wypelniajaca tablice
    ilosc[0]=rozm; //Przyjmuje ze wartosc tablicy od 0 rowna sie ilosci elementow
    for(int i=1;i<=rozm;i++){
        cout<<"Podaj "<<a<<" dla "<<i<<" towaru:";
        cin>>ilosc[i];
    }

}
double wartosc_towaru(double ilosc[], double cena[], double wartosc[], int rozm){
    wartosc[0]=rozm;
    double wartow=0;//wartow jest zmienna zliczajaca wartosc towaru
    for(int i=1;i<=rozm;i++){
        wartosc[i]=cena[i]*ilosc[i];
        wartow=wartow+wartosc[i];
    }
    return wartow;
}
double suma_przez_iloczyn(double t[], int rozm){//2 funkcja z zadania
    double suma=0, iloczyn=1,sumapilocz=0;
    for(int i=0;i<rozm;i++){
            suma=suma+t[i];
            iloczyn=iloczyn*t[i];
    }
    if(iloczyn==0){
        cout<<"Iloczyn = 0 i sumy przez iloczyn nie mozna obliczyc";
    }
    else{
        sumapilocz=suma/iloczyn;
    }
    return sumapilocz;
}
void wypelnij2(int rozm, double t[]){ //wypelnienie tablicy do 2  funkcji, bo ma inaczej wyswietlane polecenia
    for(int i=0;i<rozm;i++){
        cout<<"Podaj wartosc "<<i+1<<" elementu:";
        cin>>t[i];
    }
}
void ciag(double a[], int rozm){//wypelnienie tablicy a[] w funkcji 3
    for(int i=0;i<rozm;i++){
        cout<<"Podaj a_"<<i+1<<" wyraz ciagu:";
        cin>>a[i];
    }

}
void ciag_na_szereg(double a[], int rozm){//3 funkcja
    for(int i=0;i<rozm;i++){
        a[i]=(a[i])*(i+2);
    }
}
int main(){
    cout<<"Testowanie 1 funkcji"<<endl;
    string c="ilosc", b="cena";
    int rozm;
    double wartow;
    cout<<"Podaj ilosc towarow:";
    cin>>rozm;
    double ilosc[rozm+1];
    double cena[rozm+1];
    wypelnij(rozm,ilosc, c);
    wypelnij(rozm,cena, b);
    double wartosc[rozm+1];
    wartow=wartosc_towaru(ilosc,cena,wartosc,rozm);
    for(int i=1;i<=rozm;i++){
        cout<<"Wartosc towaru "<<i<<" wynosi:"<<wartosc[i]<<endl;
    }
    cout<<"Wartosc towarow="<<wartow<<endl;
    cout<<"Testowanie 2 funkcji"<<endl<<"Podaj ile elementow ma tablica ktora zwraca sume wszystkich elementow tablicy podzielona przez ich iloczyn:";
    cin>>rozm;
    double t[rozm];
    wypelnij2(rozm, t);
    cout<<"Suma przez iloczyn elementow tablicy jest rowna:"<<suma_przez_iloczyn(t,rozm);
    cout<<endl<<"Testowanie 3 funkcji"<<endl<<"Podaj ile elementow ma miec tablica ktorej kolejne elementy tablicy oznaczaja wyrazy ciagu z 3 funkcji zadania:";
    cin>>rozm;
    double a[rozm];
    ciag(a,rozm);
    ciag_na_szereg(a,rozm);
    for(int i=1;i<=rozm;i++){
        cout<<"S_"<<i<<" wyrazu wynosi:"<<a[i-1]<<endl;
    }

   return 0;
}
