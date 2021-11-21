#include <iostream>
using namespace std;
int  pod_rozm()
{
    int rozm;
    cout<<"Podaj rozmiar tablicy:";
    cin>>rozm;

    return rozm;
}
void pod_tab(int t[], int rozm)
{
    for (int i=0; i<rozm; i++)
    {
        cout<<"Podaj "<<i+1<<" wyraz:";
        cin>>t[i];
    }

}
int pod_wartosc()
{
    int a;
    cout<<"Podaj wartosc, ktora chcesz zliczyc:";
    cin>>a;
return a;

}
int zlicz_elem( int a,int rozm, int t[])
{
     int j=0;

    for (int i=0; i<rozm ; i++)
    {
        if (a==t[i])
            j++;
    }
    return j;
}
void wyswietl(int j)
{
    cout<<"Ilosc elementów tablicy równej a= "<<j;

}
int main ()
{
    int a,f,b,c,d,e,j;

    f=pod_rozm();
    int t[f];
    pod_tab(t,f);
    a=pod_wartosc();
    d=zlicz_elem(a,f,t);
    wyswietl(d);

    return 0;
}
