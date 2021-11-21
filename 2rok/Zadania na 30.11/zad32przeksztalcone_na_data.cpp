#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Data{
private:
    int dzien, miesiac, rok;
public:
    Data(){};
    Data(int d,int m,int r){
        dzien=d;
        miesiac=m;
        rok=r;
    }
    void Setdzien(int d){
        dzien=d;
    }
    void Setmiesiac(int m){
        miesiac=m;
    }
    void Setrok(int r){
        rok=r;
    }
    int Getdzien(){
        return dzien;
    }
    int Getmiesiac(){
        return miesiac;
    }
    int Getrok(){
        return rok;
    }
    void wyswietl();
};
void Data::wyswietl(){
    cout<<dzien<<'-'<<miesiac<<'-'<<rok;
}
class Osoba{
private:
    string imie, nazwisko;
    char plec;
    Data data_ur;
public:
    Osoba(){};
    Osoba(string i, string n, char p,int d,int m, int r){
        imie=i;
        nazwisko=n;
        plec=p;
        data_ur=Data(d,m,r);
    }
    Osoba(string i, string n, char p,Data d){
        imie=i;
        nazwisko=n;
        plec=p;
        data_ur=d;
    }
    ~Osoba(){};
    void pobierz();
    void wyswietl();
    int wiek(int r);
    void info();
    void Setimie(string i){
        imie=i;
    }
    void Setnazwisko(string n){
        nazwisko=n;
    }
    void Setplec(char p){
        plec=p;
    }
    void Setrok_ur(Data d){
        data_ur=d;
    }
    string Getimie(){
        return imie;
    }
    string Getnazwisko(){
        return nazwisko;
    }
    char Getplec(){
        return plec;
    }
    Data Getdata_ur(){
        return data_ur;
    }
};
void Osoba::pobierz(){
    int d,m ,r;
    cout<<"Podaj imie:";
    cin>>imie;
    cout<<"Podaj nazwisko:";
    cin>>nazwisko;
    cout<<"Podaj plec:";
    cin>>plec;
    cout<<"Podaj date urodzenia:";
    cin>>d>>m>>r;
    data_ur=Data(d,m,r);
}
void Osoba::wyswietl(){
    cout<<imie<<' '<<nazwisko<<" plec:"<<plec<<" data urodzenia:";
    data_ur.wyswietl();
}
int Osoba::wiek(int r){
    return r-data_ur.Getrok();
}
void Osoba::info(){
    if(plec=='k')
        cout<<"Pani "<<imie<<' '<<nazwisko;
    else
        cout<<"Pan "<<imie<<' '<<nazwisko;
}
int main(){
    cout<<"Osoba 1"<<endl;
    int a,b;
    Osoba O1;
    O1.pobierz();
    a=O1.wiek(2017);
    cout<<endl<<"Osoba 2:"<<endl;
    Osoba O2;
    O2.pobierz();
    b=O2.wiek(2017);
    if(a>b){
        O1.info();
        cout<<" jest starszy/a i ma "<<O1.wiek(2017)<<" lat";
    }
    else{
        O2.info();
        cout<<"jest starszy/a i ma "<<O2.wiek(2017)<<" lat";
    }
    return 0;
}
