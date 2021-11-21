#include <iostream>
#include <cmath>
using namespace std;
double g(double x){
   double w;
   if(x>0){
    w=((sqrt(abs(x)))+((sin(x)))/1+x*x);
   }
   else{
    if(x<-1){
        w=0;
    }
    else{
        w=((-1)*sqrt(abs((sqrt(abs(x)))+((sin(x)))/1+(x*x))));
    }
   }



}
int main(){
    double a,b;
    cin>>a;
    b=g(a);
    cout<<b;



    return 0;
   }
