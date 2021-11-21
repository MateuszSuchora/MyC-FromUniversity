#include <iostream>
using namespace std;
int main(){
    int alfa;
    cin>>alfa;
    cout<<"Dzielniki podanej liczby:";
    for(int i=1;i<=alfa;i++){
        if(alfa%i==0){
            cout<<i<<',';
        }
    }
    return 0;
}
