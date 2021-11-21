//czas dzia³¹ tylko dla du¿ych tablic od 15 000
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <ctime>
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
        cout<<" "<<t[i];
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

void InsertSort (int a[], int n){

	int j, x;
	for (int i=1; i<n; i++){
			x=a[i];
			j=i;
			while(x<a[j-1] && j>0){
			a[j]=a[j-1];
			j=j-1;
			}
			a[j]=x;

	}

}
void SelectionSort(int a1[], int n){

	int mini;
	for(int i=0;i<n-1;i++){
		mini=i;
		for(int j=i+1;j<n;j++)
		if(a1[j]<a1[mini]) {
		mini=j;
		swap(a1[mini],a1[i]);
		}
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

int main(){
    int n,w;
    ofstream plik("p.txt");
    cout<<"Podaj wielkosc tablicy:";
    cin>>n;
    int t[n];
    losujtab(t,n);
    zTablicy(t,n,plik);
    plik.close();
    ifstream plk("p.txt");
    zPliku(t,n,plk);


    clock_t t1;                                                                          //sort Bubble start
    t1=clock();
    bubblesort(t,n);
    t1=clock()-t1;
	cout<<endl<<"czas dzialania algorytmu sortowania babelkowego to "<<t1<<endl;
	cin>>w;         //stop
    Przeczytaj_Tablice(t,n);
    cout<<endl;
    plk.close();
    cin>>w;
    cout<<endl;

    ifstream p2("p.txt");
    zPliku(t,n,p2);
    clock_t t2;                                                                        //sortowanie przez wybor start
	t2=clock();
    SelectionSort(t,n);
    t2=clock()-t2;
	cout<<endl<<"czas dzialania algorytmu sortowania przez wybor to "<<t2<<endl;         //stop
    cin>>w;
    Przeczytaj_Tablice(t,n);
    cout<<endl;
    p2.close();
    cin>>w;
    cout<<endl;

    ifstream p3("p.txt");
    zPliku(t,n,p3);
    clock_t t3;                                                                          //sort wstawianie start
	t3=clock();
    InsertSort(t,n);
    t3=clock()-t3;
	cout<<endl<<"czas dzialania algorytmu sortowania przez wstawianie to "<<t3<<endl;    //stop
    cin>>w;
    Przeczytaj_Tablice(t,n);
    cout<<endl;
    p3.close();
    cin>>w;
    cout<<endl;

    ifstream p4("p.txt");
    zPliku(t,n,p4);
    clock_t t4;                                                                          //Quicksort start
	t4=clock();
    QuickSort(t,0,n-1);
    t4=clock()-t4;
	cout<<endl<<"czas dzialania algorytmu sortowania przez podzial (szybkiego) "<<t4<<endl;          //stop
    cin>>w;
    Przeczytaj_Tablice(t,n);
    cout<<endl;
    p4.close();
    cin>>w;
    cout<<endl;

    ifstream p5("p.txt");
    zPliku(t,n,p5);
    clock_t t5;                                                                          //merge start
	t5=clock();
    mergeSort(t,0,n-1);
    t5=clock()-t5;
	cout<<endl<<"czas dzialania algorytmu sortowania przez scalanie "<<t5<<endl;
    cin>>w;
    Przeczytaj_Tablice(t,n);
    cout<<endl;
    p5.close();
    cin>>w;
    cout<<endl;

   /* for(int i=0;i<n;i++){
        cout<<" "<<t[i];
   }*/
    return 0;

}
