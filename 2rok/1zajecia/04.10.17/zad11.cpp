#include <iostream>
#include <cmath>
using namespace std;
double f(double x){
    return (sqrt(abs(x))+(sin(x)/(1+x*x)));
}
int main(){
    double x;
    cin>>x;
    cout<<f(x);
    return 0;
}
