#include "Trojmiankwadratowy.h"
#include <iostream>
using namespace std;

Trojmiankwadratowy::Trojmiankwadratowy()
{
    a=0;
    b=0;
    c=0;
}

Trojmiankwadratowy::~Trojmiankwadratowy(){}
  Trojmiankwadratowy::Trojmiankwadratowy(double A, double B, double C)
    {
        a=A;
        b=B;
        c=C;
    }

    Trojmiankwadratowy::Trojmiankwadratowy(const Trojmiankwadratowy& Z)
    {
        a=Z.a;
        b=Z.b;
        c=Z.c;
    }

    Trojmiankwadratowy& Trojmiankwadratowy::operator=(const Trojmiankwadratowy& Z)
    {
        a=Z.a;
        b=Z.b;
        c=Z.c;
    }

    void Trojmiankwadratowy::Seta(double A)
    {
        a=A;
    }

    void Trojmiankwadratowy::Setb(double A)
    {
        b=A;
    }

    void Trojmiankwadratowy::Setc(double A)
    {
        c=A;
    }

    double Trojmiankwadratowy::Geta()
    {
        return a;
    }

    double Trojmiankwadratowy::Getb()
    {
        return b;
    }

    double Trojmiankwadratowy::Getc()
    {
        return c;
    }

    void Trojmiankwadratowy::info()
    {
        if(b<0&&c<0)
            cout<<a<<"x^2"<<b<<'x'<<c;
        else{
            if(b>=0&&c<0)
                cout<<a<<"x^2+"<<b<<'x'<<c;
            else
                cout<<a<<"x^2+"<<b<<"x+"<<c;
        }


    }

    Trojmiankwadratowy Trojmiankwadratowy::operator+(Trojmiankwadratowy T)
    {
        Trojmiankwadratowy A;
        A.a=a+T.a;
        A.b=b+T.b;
        A.c=c+T.c;
        return A;
    }

    Trojmiankwadratowy Trojmiankwadratowy::operator-(Trojmiankwadratowy T)
    {
        Trojmiankwadratowy A;
        A.a=a-T.a;
        A.b=b-T.b;
        A.c=c-T.c;
        return A;
    }

    bool Trojmiankwadratowy::operator==(Trojmiankwadratowy T)
    {
        if(a==T.a&&b==T.b&&c==T.c)
            return true;
        else
            return false;
    }

    double Trojmiankwadratowy::zwrocp()
    {
        return -b/(2*a);
    }

    double Trojmiankwadratowy::zwrocq()
    {
        return (b*b-4*a*c)/4*a;
    }

    double Trojmiankwadratowy::delta()
    {
        return b*b-4*a*c;
    }

    void Trojmiankwadratowy::ilepierwiastkow()
    {
        if((b*b-4*a*c)>0)
            cout<<"Rownanie ma dwa pierwiastki";
        else {
            if((b*b-4*a*c)==0)
                cout<<"Rownanie ma jeden pierwiastek";
            else
                cout<<"Rownanie nie ma pierwastkow";
        }
    }

    bool Trojmiankwadratowy::wv1(double& Z)
    {
        if((b*b-4*a*c)>0){
            Z=c/a;
            return 1;
        }
        else
            return 0;
    }

    bool Trojmiankwadratowy::wv2(double& Z)
    {
        if((b*b-4*a*c)>0){
            Z=-b/a;
            return 1;
        }
        else
            return 0;
    }
