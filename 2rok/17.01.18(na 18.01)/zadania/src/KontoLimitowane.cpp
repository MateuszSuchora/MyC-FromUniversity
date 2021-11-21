#include "KontoLimitowane.h"
#include "Konto.h"
using namespace std;


KontoLimitowane::KontoLimitowane(){}
KontoLimitowane::~KontoLimitowane(){}
KontoLimitowane::KontoLimitowane (string i, string n,double s, double m,double l):Konto(i,n,s,m),limit(l){};
void KontoLimitowane::wyplac(double a){
    if(a<=Getlimit()){
        Setsaldo(Getsaldo()-a);
        cout<<"Platnosc zatwierdzona.";
    }
    else
        cout<<"Przekroczono limit.";
}
void KontoLimitowane::przelej(double a, KontoLimitowane K1){
        if(a<=Getlimit()){
        Setsaldo(Getsaldo()-a);
        cout<<"Platnosc zatwierdzona.";
        K1.Setsaldo(K1.Getsaldo()+a);
    }
    else
        cout<<"Przekroczono limit.";
}

