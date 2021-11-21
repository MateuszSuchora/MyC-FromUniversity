#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //Przygotowal Mateusz Suchora
float n,s=0,u=0,d=0,l=0,i=1;
cout<<"Jest to program, ktory pobierze od uzytkownika ciag liczb rzeczywistych roznych od zera."<<endl;
cout<<"Program policzy liczbe wszystkich wyrazow oraz liczbe wyrazow dodatnich i ujemnych."<<endl;
cout<<"Program policzy takze sume ujemnych wyrazow ciagu i iloczyn wyrazow dodatnich."<<endl;
cout<<"Jezeli uzytkownik poda liczbe 0, to oznacza koniec danych."<<endl;
cout<<"Podaj pierwsza liczbe"<<endl;
cin>>n;
while(n!=0){
        if(n<0){
           u=u+1;
           s=s+n;
        }
        else{
            i=i*n;
            d=d+1;
        }
       cout<<"Podaj kolejna liczbe"<<endl;
       cin>>n;
       l=l+1;
}
if(d==0){
    i=0;
}
cout<<"Ilosc podanych liczb:"<<l<<", w tym"<<endl;
cout<<"dodatnich:"<<d<<","<<endl;
cout<<"ujemnych :"<<u<<"."<<endl;
cout<<"Suma liczb ujemnych:"<<s<<"."<<endl;
cout<<"Iloczyn liczb dodatnich:"<<i<<"."<<endl;
return 0;
}

