#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Osoba{
private:
    string imie, nazwisko;
    char plec;
    int rok_ur;
public:
    Osoba(){};
    Osoba(string i, string n, char p, int r){
        imie=i;
        nazwisko=n;
        plec=p;
        rok_ur=r;
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
    void Setrok_ur(int r){
        rok_ur=r;
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
    int Getrok_ur(){
        return rok_ur;
    }
};
void Osoba::pobierz(){
    cout<<"Podaj imie:";
    cin>>imie;
    cout<<"Podaj nazwisko:";
    cin>>nazwisko;
    cout<<"Podaj plec:";
    cin>>plec;
    cout<<"Podaj rok urodzenia:";
    cin>>rok_ur;
}
void Osoba::wyswietl(){
    cout<<imie<<' '<<nazwisko<<" plec:"<<plec<<" rok urodzenia:"<<rok_ur;
}
int Osoba::wiek(int r){
    return r-rok_ur;
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
