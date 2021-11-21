#include <iostream>
using namespace std;
int main(){
    int alfa,silnia=1;
    cin>>alfa;
    for(int i=1;i<=alfa;i++){
        silnia=silnia*i;
    }
    cout<<"silnia="<<silnia;
    return 0;
}
