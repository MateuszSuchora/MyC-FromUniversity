#ifndef STUDENT_H
#define STUDENT_H

#include <Osoba.h>


class Student : public Osoba
{
    public:
        Student();
        Student (string i, string n, char p, int r, string nr);
        Student (string i, string n, char p, int r, string nr, int rs, char t);
        virtual ~Student();
        string Getnr_albumu() { return nr_albumu; }
        void Setnr_albumu(string val) { nr_albumu = val; }
        int Getrok_studiow() { return rok_studiow; }
        void Setrok_studiow(int val) { rok_studiow = val; }
        char Gettyp_studiow() { return typ_studiow; }
        void Settyp_studiow(char val) { typ_studiow = val; }
        void info();
        bool zalicz_rok();

    private:
        string nr_albumu;
        int rok_studiow;
        char typ_studiow;
};

#endif // STUDENT_H
