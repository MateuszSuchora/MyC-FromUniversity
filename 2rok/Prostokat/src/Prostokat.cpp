#include "Prostokat.h"

Prostokat::Prostokat(){}

Prostokat::~Prostokat(){}

Prostokat::Prostokat(double A, double B)
        {
            a=A;
            b=B;

        }

        void Prostokat::Seta(double A)
        {
            a=A;
        }

        void Prostokat::Setb(double B)
        {
            b=B;
        }

        double Prostokat::Geta()
        {
            return a;
        }

        double Prostokat::Getb()
        {
            return b;
        }

        void Prostokat::skaluj(double r)
        {
            a=a+a*r;
            b=b+b*r;
        }

        double Prostokat::pole()
        {
            return a*b;
        }

        double Prostokat::obwod()
        {
            return 2*a+2*b;
        }

        bool Prostokat::przystajacy(Prostokat P)
        {
            if((a==P.Geta()&&b==P.Getb())||(a==P.Getb()&&b==P.Geta()))
                return true;
            else
                return false;

        }
