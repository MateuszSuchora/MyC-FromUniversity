#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long int alfa,x,sum,n;
    cin>>alfa;
    alfa=abs(alfa);
    sum=0;
    while(alfa>0){
        n=alfa%10;
        sum=sum+n;
        alfa=(alfa-n)/10;
            }
    cout<<"Suma cyfr="<<sum;
   return 0;
}
