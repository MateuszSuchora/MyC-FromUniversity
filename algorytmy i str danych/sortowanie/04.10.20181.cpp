#include <iostream>
#include  <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <time.h>
using namespace std;

void zTablicy(int t[],int n,ofstream& plik){
    for(int i=0;i<n;i++){
        int a;
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
void bubblesort(int t[],int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(t[j]<t[j-1]){
                    swap(t[j],t[j-1]);
            }
        }
    }
}
void insertSort(int tab[], int n){
    for(int i=1; i<n; i++){
        int x=tab[i];
        int j=i;
        while((x<tab[j-1])&&(j>0)){
            tab[j]=tab[j-1];
            j=j-1;
        }
        tab[j]=x;
    }
}
void selectionSort(int t[], int n){
    int minn;
    for(int i=0; i<n-1; i++){
        minn=i;
        for(int j=i+1; j<n; j++){
            if(t[j]<t[minn]){
                minn=j;
            }
        }
        swap(t[minn], t[i]);
    }
}
void quickSort(int tab[], int left, int right){
    int i = left;
    int j = right;
    int x = tab[( left + right ) / 2 ];
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

    if( left < j ) quickSort( tab, left, j );
    if( right > i ) quickSort( tab, i, right );
}
void Merge(int tab[], int pocz, int sr, int kon){
    int i, j, q;
    int a[kon+1];
    for (i=pocz; i<=kon; i++){
        a[i]=tab[i];
    }
    i=pocz;
    j=sr+1;
    q=pocz;
    while(i<=sr && j<=kon){
        if(a[i]<a[j]){
            tab[q]=a[i];
            q++;
            i++;
        }
        else{
            tab[q]=a[j];
            q++;
            j++;
        }
    }
    while(i<=sr){
        tab[q]=a[i];
        q++;
        i++;
    }
    while(j<=kon){
        tab[q]=a[j];
        q++;
        j++;
    }
}
void mergeSort(int tab[], int pocz, int kon){
    int sr;
    if(pocz<kon){
        sr=(pocz+kon)/2;
        mergeSort(tab, pocz, sr);
        mergeSort(tab, sr+1, kon);
        Merge(tab, pocz, sr, kon);
    }
}
int main(){
    int n;
    int o;
    ofstream plik("p.txt");
    ofstream plik2("p2.txt");
    cout<<"Podaj wielkosc tablicy:";
    cin>>n;
    int t[n];
    int t2[n];
    int t3[n];
    int t4[n];
    int t5[n];
    losujtab(t,n);
    zTablicy(t,n,plik);
    plik.close();
    ifstream plk("p.txt");
    ifstream plk2("p.txt");
    ifstream plk3("p.txt");
    ifstream plk4("p.txt");
    ifstream plk5("p.txt");
    zPliku(t,n,plk);
    plk.close();
    cout<<endl;
    zPliku(t2,n,plk2);
    plk2.close();
    cout<<endl;
    zPliku(t3,n,plk3);
    plk3.close();
    cout<<endl;
    zPliku(t4,n,plk4);
    plk4.close();
    cout<<endl;
    zPliku(t5,n,plk5);
    cout<<endl;

    clock_t b;

    for(int i=0; i<n; i++){
        cout<<" "<<t[i];
    }
    cout<<endl<<" -tablica nieposortowana"<<endl<<endl;
    cin>>o;
    b=clock();
    bubblesort(t,n);
    b=clock()-b;
    cout<<endl<<b<<"-czas sortowania babelkowego"<<endl<<endl;
    cin>>o;
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<" "<<t[i];
    }
    cout<<endl<<" - tablica posortowana, sortowanie b¹belkowe"<<endl<<endl;
    cin>>o;

    for(int i=0; i<n; i++){
        cout<<" "<<t2[i];
    }
    cout<<endl<<" -tablica nieposortowana"<<endl<<endl;
    cin>>o;
    b=clock();
    insertSort(t2,n);
    b=clock()-b;
    cout<<endl<<b<<"-czas sortowania przez wstawianie"<<endl<<endl;
    cin>>o;
    for(int i=0; i<n; i++){
        cout<<" "<<t2[i];
    }
    cout<<endl<<" -tablica posortowana, sortowanie przez wstawianie"<<endl<<endl;
    cin>>o;

    for(int i=0; i<n; i++){
        cout<<" "<<t3[i];
    }
    cout<<endl<<" -tablica nieposortowana"<<endl<<endl;
    cin>>o;
    b=clock();
    selectionSort(t3, n);
    b=clock()-b;
    cout<<endl<<b<<"-czas sortowania przez wybor"<<endl;
    cin>>o;
    for(int i=0; i<n; i++){
        cout<<" "<<t3[i];
    }
    cout<<endl<<" -tablica posortowana, sortowanie przez wybor"<<endl<<endl;
    cin>>o;

    for(int i=0; i<n; i++){
        cout<<" "<<t4[i];
    }
    cout<<endl<<" -tablica nieposortowana"<<endl<<endl;
    cin>>o;
    b=clock();
    quickSort(t4, 0, n-1);
    b=clock()-b;
    cout<<endl<<b<<"-czas sortowania szybkiego"<<endl<<endl;
    cin>>o;
    for(int i=0; i<n; i++){
        cout<<" "<<t4[i];
    }
    cout<<endl<<" -tablica posortowana, sortowanie szybkie"<<endl<<endl;
    cin>>o;

    for(int i=0; i<n; i++){
        cout<<" "<<t5[i];
    }
    cout<<endl<<" -tablica nieposortowana"<<endl<<endl;
    cin>>o;
    b=clock();
    mergeSort(t5, 0, n-1);
    b=clock()-b;
    cout<<endl<<b<<"-czas sortowania przez scalanie"<<endl<<endl;
    cin>>o;
    for(int i=0; i<n; i++){
        cout<<" "<<t5[i];
    }
    cout<<" -tablica posortowana, sortowanie przez scalanie"<<endl;
    cout<<endl;
  //  cout<<endl;
  //  zTablicy(t,n,pk);
  //  pk.close();
  //  ifstream p("p.txt");
  //  zPliku(t,n,p);
    //for(int i=0;i<n;i++){
     //   cout<<"Podaj "<<i+1<<" wyraz tablicy";
      //  cin>>t[i];
    //}

   // zPliku(t,n, plik);
    //plik.close();



    return 0;
}
