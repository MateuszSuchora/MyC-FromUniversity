#include <iostream>
#include <cmath>
using namespace std;
void przepisz_tab_wstecz(int rozm, double tab1[], double tab2[]){
    double t[rozm];
    int l=rozm-1;
    for(int i=0;i<rozm;i++){
        t[l]=tab1[i];
        l--;
    }
    for(int j=0;j<rozm;j++){
        tab2[j]=t[j];
        cout<<j+1<<" element 2 tablicy:"<<tab2[j]<<endl;
    }

}
int main(){
    int rozm;
    cout<<"Podaj rozmiar tablicy:";
    cin>>rozm;
    double tab1[rozm];
    double tab2[rozm];
    for(int i=0;i<rozm;i++){
        cout<<"Podaj "<<i+1<<" element tablicy:";
        cin>>tab1[i];
    }
    przepisz_tab_wstecz(rozm,tab1,tab2);
    return 0;
}
