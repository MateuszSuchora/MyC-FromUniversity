#include <iostream>
using namespace std;
double znajdz_max(double t[], int rozm)
{
    double max=t[0];
    int indeks=0;
    for(int i=0; i<rozm; i++ )
    {
        if (max< t[i])
        {
            max=t[i];
            indeks=i;
        }
    }
    return max;
}
int main()
{

    int i,rozm;

    cout<<"Podaj rozmiar tablicy";
    cin>>rozm;
    double t[rozm];
    for (i=0; i<rozm; i++)
    {
        cout<<"Podaj "<<i+1<<" wyraz:";
        cin>>t[i];
    }
    cout<<"Wartosc maksymalnego wyrazu wynosi:"<<znajdz_max(t,rozm);

    return 0;
}
