#include <iostream>
#include <cmath>
using namespace std;
void odwroc(int rozm, double tab[]){
    double t[rozm];
    int l=rozm-1;
    for(int i=0;i<rozm;i++){
        t[l]=tab[i];
        l--;
    }
    for(int j=0;j<rozm;j++){
        tab[j]=t[j];
        cout<<j+1<<" element tablicy:"<<tab[j]<<endl;
    }

}
int main(){
    int rozm;
    cout<<"Podaj rozmiar tablicy:";
    cin>>rozm;
    double tab[rozm];
    for(int i=0;i<rozm;i++){
        cout<<"Podaj "<<i+1<<" element tablicy:";
        cin>>tab[i];
    }
    odwroc(rozm,tab);
    return 0;
}
