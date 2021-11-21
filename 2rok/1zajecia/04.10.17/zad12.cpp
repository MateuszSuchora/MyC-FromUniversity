#include <iostream>
#include <cmath>
using namespace std;
double g(double x){
    double gx;
    if(x>0){
        gx=sqrt(abs(x))+(sin(x)/(1+x*x));
    }
    else{
      if(x>=-1){
       gx=(-(pow(1/3,abs(sqrt(abs(x))+(sin(x)/(1+x*x))))));
    }
      else{
            gx=0;
      }
    }
    return gx;

}
int main(){
    double x;
    cin>>x;
    cout<<g(x);
    return 0;
}
