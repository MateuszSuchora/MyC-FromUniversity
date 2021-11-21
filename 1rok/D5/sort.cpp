#include <iostream>
using namespace std;
int pobierzRozmiarTab(){
    int r;
    cout<<"Podaj rozmar tablicy ";
    cin>>r;
return r;
}
void pobierzWartoscTab(int n, float tab[]){
    for(int i=0; i<n; i++){
    cout<<"podaj "<<i+1<<" wyraz tablicy ";
    cin>>tab[i];
    }
}
void sortujBabelkowo(int n, float tab[]){
    float rob;
    for(int k=1; k<=n-1; k++){
        for(int i=0; i<n-k; i++){
            if (tab[i]>tab[i+1]){
            rob=tab[i];
            tab[i]=tab[i+1];
            tab[i+1]=rob;
        }
        }
    }
}
void wyswietlTab(int n, float tab[]){
    for(int i=0; i<n; i++)
    cout<<tab[i]<<' ';
}
int main(){
    int n=pobierzRozmiarTab();
    float tab[n];
    pobierzWartoscTab(n, tab);
    sortujBabelkowo(n,tab);
    wyswietlTab(n,tab);
return 0;
}
