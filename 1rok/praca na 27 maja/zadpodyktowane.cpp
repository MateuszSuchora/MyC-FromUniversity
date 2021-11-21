#include <iostream>
#include <cmath>
using namespace std;
void pobzespR(float &a, float &b){
  cout<<"podaj czesc rzeczywista liczby zespolonej:";
  cin>>a;
  cout<<"Podaj czesc urojona";
  cin>>b;
}
void wyswietlzesp(float a, float b){
  if(a!=0){
     cout<<a;
  }
  if(b>0){
    cout<<'+'<<b<<'i'<<endl;
  }
  else{
    if(b<0){
        cout<<b<<'i';
    }
    else{
        if(a==0){
            cout<<0;
        }
    }
  }
}
float modul(float a,float b){
  return sqrt(a*a+b*b);
}
float zwiekszop(float &a, float p){
   a=a+a*(p/2);
   return a;
   }
float zmniejszop(float &a, float p){
  a=a-a*(p/2);
  return a;
}
int main(){
  float a,b;
  pobzespR(a,b);
  wyswietlzesp(a,b);
  float m;
  m=modul(a,b);
  cout<<"modul="<<m;
  cout<<"Podaj p"<<endl;
  float p;
  cin>>p;
  zwiekszop(a,p);
  zmniejszop(b,p);
  wyswietlzesp(a,b);
  m=modul(a,b);
  cout<<"modul="<<m<<endl;
  return 0;
}
