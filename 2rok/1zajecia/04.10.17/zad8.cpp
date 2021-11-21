#include <iostream>
using namespace std;
int main(){
    int n,a=3;
    cout<<"Podaj calkowita dodatnia";
    cin>>n;
    if(n<=0)
        cout<<"zle podana liczba";
    else{
        while(n>1){
            a=(3*a)-12;
            n--;
        }
        cout<<"an wyraz="<<a;
    }
    return 0;
}
