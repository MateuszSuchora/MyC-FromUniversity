#include <iostream>
#include<string>
#include "Zespolona.h"

using namespace std;

int main()
{
    double a,b;
    cout<<"Podaj a i b zespolonej"<<endl;
    cin>>a>>b;
    Zespolona A(1,2,"AA");
    Zespolona B(a,b,"BB");
    Zespolona N;
    A.info();
    cout<<endl;
    B.info();
    cout<<endl;
    N.info();
    cout<<endl;
    cout<<A.modul()<<endl<<B.modul();
    N=A+B;
    cout<<endl;
    N.info();
    N=A-B;
    cout<<endl;
    N.info();
    N=A*B;
    cout<<endl;
    N.info();
    N=A/B;
    cout<<endl;
    N.info();
    cout<<endl;
    if(A==B)
        cout<<"Sa rowne";
    else
        cout<<"Nie sa rowne";
    cout<<endl;
    Zespolona Z(B);
    Z.info();


    return 0;
}
