#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <time.h>
using namespace std;

void zTablicy(int t[],int n,ofstream& plik){
    int a;
    for(int i=0;i<n;i++){
        a=t[i];
        plik<<a;
        plik<<" ";

    }
}
void czytajPlik(ifstream& plik){
    while(!plik.eof()){
        string a;
        plik>>a;
        cout<<a;
    }
}
void losujtab(int tab[],int n){
    int a;
    for(int i=0;i<n;i++){
        a=rand()%50;
        tab[i]=a;
    }

}
void zPliku(int t[],int n, ifstream& plik){
    int i=0;
    int a;
    for(int i=0;i<n;i++){
        plik>>a;
        t[i]=a;
    }

}
void Przeczytaj_Tablice(int t[], int n){
	for (int i=0;i<n; i++)
		cout<<t[i]<<" ";

}

void QuickSort(int tab[], int p, int k){
    int i = p;
    int j = k;
    int x = tab[( p + k ) / 2 ];
    do
    {
        while(tab[i]<x){
            i++;
        }
        while(tab[j]>x){
            j--;
        }
        if(i<=j){
            swap( tab[ i ], tab[ j ] );
            i++;
            j--;
        }
    } while( i <= j );

    if( p < j ) QuickSort( tab, p, j );
    if( k > i ) QuickSort( tab, i, k );
}
int sequentialsearch(int a[],int x, int n){
    for(int i=0;i<n;i++){
        if(a[i]==x)
            return i;
    }
    return -1;
}





int seqschwithswitch(int a[],int x, int n){//probabilistyczne
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            if(i>0){
                swap(a[i],a[j]);
                return i;
            }
        }
        j++;
    }
    return -1;
}
int binarysearch(int a[], int x, int n){

    int k;
    int i=0;
    int j=n-1;
    int licznik=1;
    while(i<=j){
        k=(i+j)/2;
        if(a[k]<x)
            i=k+1;
        else if(a[k]>x)
            j=k-1;
        else{//a[k]=x;
            cout<<endl<<"(Licznik petli sortowania binarnego:"<<licznik<<')';
            return k;
        }
        licznik++;
    }
     cout<<endl<<"(Licznik petli sortowania binarnego:"<<licznik<<')';
    return -1;
}

/*int Hoare(int tab[], int p, int k, int sz){
    int i = p;
    int j = k;
    int x = tab[( p + k ) / 2 ];
    do
    {
        while(tab[i]<x){
            i++;
        }
        while(tab[j]>x){
            j--;
        }
        if(i<=j){
            swap( tab[ i ], tab[ j ] );
            i++;
            j--;
        }
    } while( i <= j );

    if( sz <= i )
        Hoare( tab, p, i, sz );
    if( sz > i )
        Hoare( tab, i+1, k, sz-i-1 );
    if(sz==i)
        return tab[i];
}
*/
int Hoare(int tab[], int n,int sz){
    QuickSort(tab,0,n);
    return tab[sz];
}

int main(){
    srand( time( NULL ) );
    int n,w,x;
    ofstream plik("p.txt");
    cout<<"Podaj wielkosc tablicy:";
    cin>>n;
    cout<<endl<<"Podaj szukany element:";
    cin>>x;
    int t[n];
    losujtab(t,n);
    zTablicy(t,n,plik);
    plik.close();
    ifstream plk("p.txt");
    zPliku(t,n,plk);
    Przeczytaj_Tablice(t,n);

    cout<<endl<<"Szukany element jest na "<<sequentialsearch(t,x,n)<<" miejscu w tablicy(sortowanie sekwencyjne)."<<endl;
    cin>>w;

    QuickSort(t,0,n-1);

    cout<<endl;
    Przeczytaj_Tablice(t,n);
    cout<<endl<<endl<<"szukany element jest na "<<binarysearch(t,x,n)<<" miejscu w tablicy(sortowanie binarne)."<<endl;
    w=1;
    cout<<endl<<"Podaj ilosc elementow nowej tablicy:";
    cin>>n;
    losujtab(t,n);
    while(w==1){//czasami zamienia losowo wybrane elementy tablicy???
            Przeczytaj_Tablice(t,n);
            cout<<endl<<"Podaj szukana liczbe:";
            cin>>x;
            cout<<endl<<"Szukana liczba jest na:"<<seqschwithswitch(t,x,n)<<" miejscu"<<endl;
            Przeczytaj_Tablice(t,n);
            cout<<endl<<"Jezeli chcesz szukac dalej wprowadz 1:";
            cin>>w;
    }
    w=1;
    cout<<endl<<"Podaj ilosc elementow nowej tablicy:";
    cin>>n;
    losujtab(t,n);
    while(w==1&&x!=0){
        Przeczytaj_Tablice(t,n);
        cout<<endl<<"Podaj szukana co do wielkosci wartosc(jezeli podasz 0 to zakonczysz dzialanie programu):";
        cin>>x;
        if(x>=n){
           cout<<endl<<"Zle podana wartosc, podaj szukana co do wielkosci wartosc:";
        cin>>x;
        }
        cout<<endl<<Hoare(t,n-1,x)<<endl;
    }


    return 0;
}

