#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c,de,d;
    cin>>a>>b>>c;
    de=b*b-(4*a*c);
    d=sqrt(de);
    if(de>0){
        cout<<"x1="<<(-b-d)/(2*a)<<endl<<"x2="<<(-b+d)/(2*a);
    }
    else
        if(de==0){
           cout<<"x1="<<(-b/2*a);
    }
    else
        cout<<"Brak rozwiazan";
    return 0;
}
