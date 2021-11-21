#include "Zespolona.h"
#include<string>
#include<cmath>
#include<iostream>
using namespace std;
Zespolona::Zespolona()
{
    a=0;
    b=0;
    nazwa="NN";
}

Zespolona::~Zespolona(){}
Zespolona::Zespolona(double A, double B, string N):a(A),b(B),nazwa(N){}
Zespolona::Zespolona( const Zespolona &Z){
    a=Z.a;
    b=Z.b;
    nazwa=Z.nazwa;
}
Zespolona& Zespolona:: operator=(const Zespolona&Z)
{
    a=Z.a;
    b=Z.b;
    nazwa=Z.nazwa;
}

    void Zespolona::Seta(double A)
    {
        a=A;
    }

    void Zespolona::Setb(double B)
    {
        b=B;
    }

    void Zespolona::Setnazwa(string N)
    {
        nazwa=N;
    }

    double Zespolona::Geta()
    {
        return a;
    }

    double Zespolona::Getb()
    {
        return b;
    }

    string Zespolona::Getnazwa()
    {
        return nazwa;
    }

    void Zespolona::info()
    {
        cout<<"["<<a<<','<<b<<"i]";
    }

    double Zespolona::modul()
    {
        return sqrt(a*a+b*b);
    }

    Zespolona Zespolona::operator+(Zespolona V)
    {
        Zespolona Z;
        Z.a=a+V.a;
        Z.b=b+V.b;
        return Z;

    }

    Zespolona Zespolona::operator-(Zespolona V)
    {
        Zespolona Z;
        Z.a=a-V.a;
        Z.b=b-V.b;
        return Z;
    }

    Zespolona Zespolona::operator*(Zespolona V)
    {
        Zespolona Z;
        Z.a=(a*V.b-b*V.b);
        Z.b=(b*V.a+a*V.b);
        return Z;
    }

    Zespolona Zespolona::operator/(Zespolona V)
    {
        Zespolona Z;
        Z.a=(a*V.a+b*V.b)/(V.a*V.a+V.b*V.b);
        Z.b=(b*V.a-a*V.b)/(V.a*V.a+V.b*V.b);
        return Z;
    }

   bool Zespolona::operator==(Zespolona V)
    {
        if(a==V.a&&b==V.b)
            return true;
        else
            return false;
    }
