#include <iostream>
#include <cmath>
using namespace std;
float pw(){
 cout<<"Podaj wspolrzedna";
 float a;
 cin>>a;
 return a;
 }
float dl(float xa, float ya, float xb, float yb){
 return (sqrt(pow((xa-xb),2)+(pow((ya-yb),2))));
 }
int main(){
    bool czypop=0;
    float x1,x2,x3,y1,y2,y3,a,b,c,O,P;
    while(!czypop){
        cout<<"Podaj wspolrzedne 3 punktow w kolejnosci najpierw x a pozniej y danego punktu"<<endl;
        x1=pw();
        y1=pw();
        x2=pw();
        y2=pw();
        x3=pw();
        y3=pw();
        a=dl(x1,y1,x2,y2);
        b=dl(x1,y1,x3,y3);
        c=dl(x2,y2,x3,y3);
        czypop=((a+b>c)&&(a+c>b)&&(b+c>a));
    }
    O=a+b+c;
    P=sqrt((O/2)*((O/2)-a)*((O/2)-b)*((O/2)-c));
    cout<<"Pole="<<P<<endl<<"Obwod="<<O;
    return 0;
   }
