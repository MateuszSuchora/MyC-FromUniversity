#ifndef TROJMIANKWADRATOWY_H
#define TROJMIANKWADRATOWY_H


class Trojmiankwadratowy
{
    private:
        double a,b,c;
    public:
        Trojmiankwadratowy();
        ~Trojmiankwadratowy();
        Trojmiankwadratowy(double A, double B, double C);
        Trojmiankwadratowy(const Trojmiankwadratowy &Z);
        Trojmiankwadratowy& operator=(const Trojmiankwadratowy&Z);
        void Seta(double A);
        void Setb(double A);
        void Setc(double A);
        double Geta();
        double Getb();
        double Getc();
        void info();
        Trojmiankwadratowy operator +(Trojmiankwadratowy T);
        Trojmiankwadratowy operator -(Trojmiankwadratowy T);
        bool operator ==(Trojmiankwadratowy T);
        double zwrocp();
        double zwrocq();
        double delta();
        void ilepierwiastkow();
        bool wv1(double &Z);
        bool wv2(double &Z);

};

#endif // TROJMIANKWADRATOWY_H
