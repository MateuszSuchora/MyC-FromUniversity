#ifndef PROSTOKAT_H
#define PROSTOKAT_H


class Prostokat
{
    private:
        double a, b;
    public:
        Prostokat();
        ~Prostokat();
        Prostokat(double A, double B);
        void Seta(double A);
        void Setb(double B);
        double Geta();
        double Getb();
        void skaluj(double r);
        double pole();
        double obwod();
        bool przystajacy(Prostokat P);
};

#endif // PROSTOKAT_H
