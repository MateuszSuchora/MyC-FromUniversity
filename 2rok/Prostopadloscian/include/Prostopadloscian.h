#include "Prostokat.h"
#ifndef PROSTOPADLOSCIAN_H
#define PROSTOPADLOSCIAN_H


class Prostopadloscian
{
private:
    Prostokat Podst;
    Prostokat SB1;//sciana boczna 1
    Prostokat SB2;//sciana boczna 2

public:

        Prostopadloscian();
        ~Prostopadloscian();
        Prostopadloscian(double a, double b, double c);
        void SetPodst(Prostokat A);
        void SetSB1(Prostokat A);
        void SetSB2(Prostokat A);
        Prostokat GetPodst();
        Prostokat GetSB1();
        Prostokat GetSB2();
        void skaluj(double r);
        double pole();
        double objetosc();
        bool przystajacy(Prostopadloscian p);
};


#endif // PROSTOPADLOSCIAN_H
