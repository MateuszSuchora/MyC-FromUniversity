#ifndef KREDYT_H
#define KREDYT_H
#include "Konto.h"


class Kredyt
{
    public:
        Kredyt();
        Kredyt(string i, string n,double s, double m,double k, int o);
        virtual ~Kredyt();
        Konto Getkonto() { return konto; }
        void Setkonto(Konto val) { konto = val; }
        double Getkwota_kredytu() { return kwota_kredytu; }
        void Setkwota_kredytu(double val) { kwota_kredytu = val; }
        int Getoprocentowanie() { return oprocentowanie; }
        void Setoprocentowanie(int val) { oprocentowanie = val; }
        double odsetki(int liczba_dni);
    protected:
    private:
        Konto konto;
        double kwota_kredytu;
        int oprocentowanie;
};

#endif // KREDYT_H
