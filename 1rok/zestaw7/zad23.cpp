#include <iostream>
using namespace std;
int main(){
int a,z;
cout<<"Podaj liczbe calkowita wieksza niz 2"<<endl;
cin>>a;
z=2*a-2;
if(a>2 && a<=60)
{
 for(int i=0;i<a;i++){
    cout<<'*';
    if(i!=0){
        cout.width(i);
        cout<<'*';
        if(i!=a-1){
            z=z-2;
            cout.width(z);
            cout<<'*';
        }

    }
    if(i==0){
       cout.width(z);
       cout<<'*';
    }
    else{
        cout.width(i);
        cout<<'*';
    }
    cout<<endl;
    }


}
else
    cout<<"Zle dane wejsciowe";
return 0;
}
