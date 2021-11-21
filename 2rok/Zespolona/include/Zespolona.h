#include<string>
#ifndef ZESPOLONA_H
#define ZESPOLONA_H
using namespace std;

class Zespolona
{
    private:
        double a,b;
        string nazwa;
    public:

        Zespolona();
        Zespolona(double A, double B, string N);
        Zespolona(const Zespolona &Z);
        Zespolona& operator=(const Zespolona&Z);
        ~Zespolona();
        void Seta(double A);
        void Setb(double B);
        void Setnazwa(string N);
        double Geta();
        double Getb();
        string Getnazwa();
        void info();
        double modul();
        Zespolona operator +(Zespolona V);
        Zespolona operator -(Zespolona V);
        Zespolona operator *(Zespolona V);
        Zespolona operator /(Zespolona V);
        bool operator ==(Zespolona V);
};

#endif // ZESPOLONA_H
