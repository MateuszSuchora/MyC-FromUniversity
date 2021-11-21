#include <iostream>
#include <cmath>
using namespace std;
int main(){
float a,b,c,p,P,O;
cout<<"Prosze podac dlugosci bokow trojkata"<<endl;
cin>>a>>b>>c;
if(a<b+c && b<c+a && c<a+c && a>0 && b>0){
    cout<<"To jest trojkat"<<endl;
    p=(a+b+c)/2;
    P=sqrt(p*(p-a)*(p-b)*(p-c));
    O=a+b+c;
    cout<<"Pole="<<P<<endl<<"Obwod="<<O;
}
 else
    cout<<"To nie moze byc trojkat";

return 0;
}
