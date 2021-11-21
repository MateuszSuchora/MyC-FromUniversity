#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void funkcja(int ilerzutow,int ilescian){
    int wynik,i;
    int tab[ilerzutow];//tablica z losowymi wynikami
    cout<<"Wylosowano:";
    srand(time(0));
    for(i=0;i<ilerzutow;i++){
        tab[i]=(rand()%ilescian)+1;
        cout<<tab[i]<<' ';
    }
    cout<<endl;
    int maks=tab[0];
   for(i=1;i<ilerzutow;i++){
    if(maks<tab[i]){
        maks=tab[i];
    }
   }
     int minim=tab[0];
   for(i=1;i<ilerzutow;i++){
    if(minim>tab[i]){
        minim=tab[i];
    }
   }
   wynik=maks-minim;
    cout<<"Wynik="<<wynik;

}
int main(){
    int ilerzutow,ilescian;
    cout<<"Podaj ile rzutow ma byc wykonane:";
    cin>>ilerzutow;
    cout<<"Podaj ile scian ma kostka:";
    cin>>ilescian;
    funkcja(ilerzutow,ilescian);

return 0;
}
