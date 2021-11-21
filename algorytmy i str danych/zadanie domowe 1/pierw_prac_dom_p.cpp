#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <ctime>
#include <time.h>
using namespace std;
void QuickSort(int tab[][2], int p, int k){
    int i = p;
    int j = k;
    int x = tab[(p+k)/2][0];
    do
    {
        while(tab[i][0]<x){
            i++;
        }
        while(tab[j][0]>x){
            j--;
        }
        if(i<=j){
            swap(tab[i][0],tab[j][0]);
            swap(tab[i][1],tab[j][1]);
            i++;
            j--;
        }
    } while(i<= j);

    if(p<j)
        QuickSort(tab,p,j);
    if(k>i)
        QuickSort(tab,i,k);
}

void czytaj(int a[][2],int n){//funkcja testujaca
    for(int i=0;i<n;i++){
        cout<<endl<<a[i][0]<<' '<<a[i][1];
    }
}
int main(){
   int n;
   int w;//zmienna potrzebna do testowania
   cout<<"Podaj n:";
   cin>>n;
   while(n>100||n<=0){
    cout<<"Zly zakres:";
    cout<<"Podaj n:";
    cin>>n;
   }
   int t[n][2];
   int najmn[n][2];
   for(int i=0;i<n;i++){
        cout<<"Podaj "<<i+1<<" pare wartosci:";
        cin>>t[i][0];
        cin>>t[i][1];
        while(t[i][0]>1000||t[i][0]<0){
            cout<<"Zly zakres:";
            cout<<"Podaj ("<<i+1<<";1) element:";
            cin>>t[i][0];
        }
        while(t[i][1]>1000||t[i][1]<0){
            cout<<"Zly zakres:";
            cout<<"Podaj ("<<i+1<<";2) element:";
            cin>>t[i][1];
        }
   }
   /*cout<<endl<<"t:";
   czytaj(t,n);
   cin>>w;*/
   int a,b=1000;
   for(int j=0;j<n;j++){
        if(t[j][0]>t[j][1])
            swap(t[j][0],t[j][1]);
       // cout<<endl<<j+1<<" para liczb to:"<<t[j][0]<<';'<<t[j][1];
        a=abs(t[j][0]-t[j][1]);
        if(a<=b){
            b=a;
            najmn[j][0]=t[j][0];
            najmn[j][1]=t[j][1];
        }
        else{
            najmn[j][0]=0;
            najmn[j][1]=0;
        }

   }
   /* cout<<endl<<"t:";
    czytaj(t,n);
    cin>>w;
    cout<<endl<<"najmn:";
    czytaj(najmn,n);
    cin>>w;*/

   QuickSort(najmn,0,n-1);
   /*cout<<endl<<"najmn:";
   czytaj(najmn,n);
   cin>>w;
   */

   cout<<endl<<"Najmniejsza roznica w parach to:"<<b<<endl;
   cout<<"Te pary to:";
   for(int l=0;l<n;l++){
        if(najmn[l][0]!=0&&najmn[l][1]!=0&&najmn[l][1]-najmn[l][0]==b)
            cout<<endl<<najmn[l][0]<<';'<<najmn[l][1];
   }


    return 0;

}
