#include <iostream>
#include <string>
#include "Osoba.h"
#include "Student.h"

using namespace std;

int main()
{
    string i1,na1,nr1,i2,na2,nr2;
    char p1,p2,ts2;
    int ru1,ru2,rs2;
    cout<<"Podaj Imie, nazwisko, plec, rok urodzenia, nr indeksu 1 studenta"<<endl;
    cin>>i1>>na1>>p1>>ru1>>nr1;
    cout<<"Podaj Imie, nazwisko, plec, rok urodzenia, nr indeksu, rok studiow i typ studiow 2 studenta"<<endl;
    cin>>i2>>na2>>p2>>ru2>>nr2>>rs2>>ts2;
    Student S1(i1,na1,p1,ru1,nr1);
    S1.info();
    cout<<endl;
    Student S2(i2,na2,p2,ru2,nr2,rs2,ts2);
    S2.info();
    cout<<endl;
    if(S1.zalicz_rok())
    S1.info();
    cout<<endl;

    if(S2.zalicz_rok())
    S2.info();


    return 0;
}
