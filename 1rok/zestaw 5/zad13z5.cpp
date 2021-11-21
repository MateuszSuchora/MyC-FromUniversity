#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Prosze podac dlugosci bokow trojkata"<<endl;
    cin>>a>>b>>c;
    if(a<b+c && b<c+a && c<a+c && a>0 && b>0){
            cout<<"To jest trojkat"<<endl;
            if(a==b && b==c)
                cout<<"Jest to trojkat rownoboczny"<<endl;
            else {
                if((a==b)||(b==c)||(c==a))
                    cout<<"Jest to trojkat rownoramienny"<<endl;
                if(((a*a)+(b*b)==(c*c)||((a*a)+(c*c)==(b*b))||((b*b)+(c*c)==(a*a))))
                    cout<<"Jest to trojakt prostokatny";

            }
            }
    else
        cout<<"To nie jest trojakt";
    return 0;
    }
