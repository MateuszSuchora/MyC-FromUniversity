#ifndef OSOBA_H
#define OSOBA_H
#include <string>
using namespace std;

class Osoba{
private:
    string imie, nazwisko;
    char plec;
    int rok_ur;
public:
    Osoba(){};
    Osoba(string i, string n, char p, int r);
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

#endif // OSOBA_H
