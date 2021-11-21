#include <iostream>
#include "Prostokat.h"
using namespace std;

int main()
{
    int a,b,c,d;
    cout << "Podaj dlugosci 2 prostokatow" << endl;
    cin>>a>>b>>c>>d;
    Prostokat P1(a,b);
    Prostokat P2(c,d);
    if(P1.przystajacy(P2))
        cout<<"Sa przystajace"<<endl;
    else
        cout<<"Nie sa przystajace"<<endl;
    cout<<"Suma ich pol:"<<P1.pole()+P2.pole()<<endl<<"Suma ich obwodow:"<<P1.obwod()+P2.obwod()<<endl;
    return 0;
}
