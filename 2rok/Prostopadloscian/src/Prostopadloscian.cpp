#include "Prostopadloscian.h"
#include "Prostokat.h"

Prostopadloscian::Prostopadloscian(){}
Prostopadloscian::~Prostopadloscian(){}
Prostopadloscian::Prostopadloscian(double a, double b, double c)
{
    Podst=Prostokat(a,b);
    SB1=Prostokat(a,c);
    SB2=Prostokat(b,c);
}

void Prostopadloscian::SetPodst(Prostokat A)
{
    Podst=A;
}

void Prostopadloscian::SetSB1(Prostokat A)
{
    SB1=A;
}

void Prostopadloscian::SetSB2(Prostokat A)
{
    SB2=A;
}

Prostokat Prostopadloscian::GetPodst()
{
    return Podst;
}

Prostokat Prostopadloscian::GetSB1()
{
    return SB1;
}

Prostokat Prostopadloscian::GetSB2()
{
    return SB2;
}

void Prostopadloscian::skaluj(double r)
{
    Podst.skaluj(r);
    SB1.skaluj(r);
    SB2.skaluj(r);
}

double Prostopadloscian::pole()
{
    return Podst.pole()+SB1.pole()+SB2.pole();
}

double Prostopadloscian::objetosc()
{
    return Podst.pole()*SB1.Getb();
}

bool Prostopadloscian::przystajacy(Prostopadloscian p)
{
    if((Podst.przystajacy(p.GetPodst())&&(SB1.przystajacy(p.GetSB1())&&(SB2.przystajacy(p.GetSB2()))))
       ||(Podst.przystajacy(p.GetPodst())&&(SB1.przystajacy(p.GetSB2())&&(SB2.przystajacy(p.GetSB1()))))
       ||(Podst.przystajacy(p.GetSB1())&&(SB1.przystajacy(p.GetPodst())&&(SB2.przystajacy(p.GetSB2()))))
       ||(Podst.przystajacy(p.GetSB1())&&(SB1.przystajacy(p.GetSB2())&&(SB2.przystajacy(p.GetPodst()))))
       ||(Podst.przystajacy(p.GetSB2())&&(SB1.przystajacy(p.GetSB1())&&(SB2.przystajacy(p.GetPodst()))))
       ||(Podst.przystajacy(p.GetSB2())&&(SB1.przystajacy(p.GetPodst())&&(SB2.przystajacy(p.GetSB1()))))
       )
           return true;
    else
            return false;

}
