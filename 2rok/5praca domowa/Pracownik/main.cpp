#include <iostream>
#include "Pracownik.h"
#include <string>
using namespace std;

int main()
{
    string i1,n1,s1,i2,n2,s2;
    char p1,p2;
    int r1,r2;
    double pl1,pl2;
    cout<<"Podaj imie, nazwisko, plec, rok urodzenia, stanowisko, place miesieczna 1 pracowinka:"<<endl;
    cin>>i1>>n1>>p1>>r1>>s1>>pl1;
    cout<<"Podaj imie, nazwisko, plec, rok urodzenia, stanowisko, place miesieczna 2 pracowinka:"<<endl;
    cin>>i2>>n2>>p2>>r2>>s2>>pl2;

    Pracownik P1(i1,n1,p1,r1,s1,pl1);
    P1.info();
    Pracownik P2(i2,n2,p2,r2,s2,pl2);
    P2.info();
    return 0;
}
