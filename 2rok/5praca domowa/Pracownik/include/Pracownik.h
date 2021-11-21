#ifndef PRACOWNIK_H
#define PRACOWNIK_H

#include <Osoba.h>


class Pracownik : public Osoba
{
    public:
        Pracownik();
        Pracownik(string i, string n, char p, int r, string s,double pl);
        virtual ~Pracownik();
        string Getstanowisko() { return stanowisko; }
        void Setstanowisko(string val) { stanowisko = val; }
        double Getplaca_mies() { return placa_mies; }
        void Setplaca_mies(double val) { placa_mies = val; }
        double placa_roczna();
        void info();
    private:
        string stanowisko;
        double placa_mies;
};

#endif // PRACOWNIK_H
