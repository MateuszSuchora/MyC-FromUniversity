#ifndef KONTOLIMITOWANE_H
#define KONTOLIMITOWANE_H

#include <Konto.h>


class KontoLimitowane : public Konto
{
    public:
        KontoLimitowane();
        KontoLimitowane (string i, string n,double s, double m,double l);
        virtual ~KontoLimitowane();
        double Getlimit() { return limit; }
        void Setlimit(double val) { limit = val; }
        void wyplac(double a);
        void przelej(double a,KontoLimitowane K1);
    private:
        double limit;
        void zmien_limit(double val) { Setlimit(val); }
};

#endif // KONTOLIMITOWANE_H
