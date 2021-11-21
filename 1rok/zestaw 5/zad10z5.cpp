#include <iostream>
using namespace std;
int main(){
    float r;
    cout<<"Prosze podac promien okregu"<<endl;
    cin>>r;
    if(r>0){
        cout<<"Obwod="<<2*3.14*r<<endl<<"Pole="<<3.14*r*r;
    }
    else
        cout<<"to nie moze byc promien";
    return 0;
   }

