#include <iostream>
#include <cmath>
using namespace std;
int zlicz_max(int rozm, double t[]){
    double maxi=t[0];
    int l=0;
    for(int i=1;i<rozm;i++){
        if(t[i]>maxi){
            maxi=t[i];
        }
    }
    for(int j=0;j<rozm;j++){
        if(t[j]==maxi){
            l++;
        }
    }
    return l;
}
int main(){
    int rozm;
    cout<<"Podaj rozmiar tablicy:";
    cin>>rozm;
    double t[rozm];
    for(int i=0;i<rozm;i++){
        cout<<"Podaj "<<i+1<<" element tablicy:";
        cin>>t[i];
    }
    int l=zlicz_max(rozm, t);
    cout<<"Ilosc maksymalnego elementu tablicy:"<<l;
    return 0;
}
