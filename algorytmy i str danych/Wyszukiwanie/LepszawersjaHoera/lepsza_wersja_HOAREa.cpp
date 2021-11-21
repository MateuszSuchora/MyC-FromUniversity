#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <time.h>
using namespace std;

void mergee(int a[],int pocz,int sr,int kon){
    int i,j,q;
    int t[kon];
    for(i=pocz;i<=kon;i++)
        t[i]=a[i];
    i=pocz;
    j=sr+1;
    q=pocz;
    while(i<=sr && j<=kon){
        if(t[i]<t[j]){
            a[q]=t[i];
            q++;
            i++;
        }
        else{
            a[q]=t[j];
            q++;
            j++;
        }
    }
    while(i<=sr){
        a[q]=t[i];
        q++;
        i++;
    }
    while(j<kon){
        a[q]=t[j];
        q++;
        j++;
    }
}
void mergeSort(int a[],int pocz,int kon){
    int sr;
    if(pocz<kon){
        sr=(pocz+kon)/2;
        mergeSort(a,pocz,sr);
        mergeSort(a,sr+1,kon);
        mergee(a,pocz,sr,kon);
    }
}

void losujtab(int tab[],int n){
    int a;
    for(int i=0;i<n;i++){
        a=rand()%50;
        tab[i]=a;
    }

}

void Przeczytaj_Tablice(int t[], int n){
	for (int i=0;i<n; i++)
		cout<<t[i]<<" ";

}
int magic5(int A[],int n, int k){
    int infty=2000000000;
    if (n<10){
        mergeSort(A,0,n-1);
        return A[k];
   }
   else{
       /* Gs = chunk_split(S, P);//podziel na grupki rozmiaru 3
        Ms = array();
        foreach(Gs as G){
        sort(G);
        Ms[]=(G[(P+1)/2]);//zbierz œrodki grupek do tablicy Ms
        }
        M=k_th_element(Ms, count(Ms)/2);//znajdŸ medianê œrodków
        L=R=array();
        foreach(S as e){
            if(e<M){
            L[]=e;//male na lewo
        }else{
            R[]=e;//duze na prawo
        }
        }
        if(count(L)<k){//szukaj w lewym
            return k_th_element(R,k-count(L));
        }else{//szukaj w prawym
            return k_th_element(L,k);
        }
    */}

}


int main(){
    int n,w,x;

    w=1;
    cout<<endl<<"Podaj ilosc elementow tablicy:";
    cin>>n;
    int t[n];
    losujtab(t,n);
    while(w==1&&x!=0){
        Przeczytaj_Tablice(t,n);
        cout<<endl<<"Podaj szukana co do wielkosci wartosc(0 konczy dzialanie programu):";
        cin>>x;
        if(x>n){
           cout<<endl<<"Zle podana wartosc, podaj szukana co do wielkosci wartosc:";
        cin>>x;
        }
        cout<<endl<<magic5(t,0,x)<<endl;
    }


    return 0;
}
