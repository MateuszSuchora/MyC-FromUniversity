#include <iostream>
#include <cmath>
using namespace std;
int suma(int alfa){
    alfa=abs(alfa);
    int sum=0,n;
    while(alfa>0){
        n=alfa%10;
        sum=sum+n;
        alfa=(alfa-n)/10;
    }
        return sum;
}
int main(){
    int alfa,x;
    cin>>alfa;
    cout<<suma(alfa);
    x=suma(alfa);
    while(x>10){
       x=suma(x);
       cout<<endl<<x;
    }
   return 0;
}
