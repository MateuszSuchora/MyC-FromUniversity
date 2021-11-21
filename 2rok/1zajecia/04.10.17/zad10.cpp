#include <iostream>
using namespace std;
int main(){
    int n,m,sum=0,il=1;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            sum=sum+(i/j);
        }
        il=il*(sum+2);
    }
    cout<<"Wynik="<<il;
    return 0;
}
