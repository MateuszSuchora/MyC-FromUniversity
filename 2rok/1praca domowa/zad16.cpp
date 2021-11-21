#include <iostream>
#include <cmath>
using namespace std;
int zlicz_rowne(int rozm, double t1[], double t2[]){
    int li=0;
    for(int i=0;i<rozm;i++){
        if(t1[i]==t2[i]){
            li++;
        }
    }
    return li;
}
int main(){
    int rozm;
    cout<<"Podaj rozmiar tablic:";
    cin>>rozm;
    double t1[rozm];
    double t2[rozm];
    for(int i=0;i<rozm;i++){
        cout<<"Podaj "<<i+1<<" element 1 tablicy:";
        cin>>t1[i];
    }
    for(int i=0;i<rozm;i++){
        cout<<"Podaj "<<i+1<<" element 2 tablicy:";
        cin>>t2[i];
    }
    cout<<"Ilosc elementow rownych w obu tablicach:"<<zlicz_rowne(rozm,t1,t2);
    return 0;
}
