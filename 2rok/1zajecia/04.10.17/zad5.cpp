#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long int alfa,il=1,n;
    cin>>alfa;
    alfa=abs(alfa);
    while(alfa>0){
        n=alfa%10;
        if(n>0){
          il=il*n;
          }
        alfa=(alfa-n)/10;
    }
    cout<<"Iloczyn cyfr="<<il;
   return 0;
}
