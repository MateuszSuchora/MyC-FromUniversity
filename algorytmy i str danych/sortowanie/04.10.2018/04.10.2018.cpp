#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <ctime>
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
        cout<<" "<<t[i];
    }

}
void bubblesort(int t[],int n){
    clock_t t1;
	t1=clock();
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(t[j]<t[j-1]){
                    swap(t[j],t[j-1]);
            }
        }
    }
    t1=clock()-t1;
	cout<<endl<<"czas dzialania algorytmu sortowania babelkowego to "<<t<<endl;
}

void InsertSort (int a[], int n){
	clock_t t1;
	t1=clock();

	int j, x;
	for (int i=0; i<n; i++){
			x=a[i];
			j=i;
			while(x<a[j-1] && j>0){
			a[j]=a[j-1];
			j=j-1;
			}
			a[j]=x;

	}
	t1=clock()-t1;
	cout<<"czas dzialania algorytmu sortowania przez wstawianie to "<<t1<<endl;

}
void SelectionSort(int a1[], int n){
	clock_t t1;
	t1=clock();

	int min;
	for(int i=0;i<n;i++){
		min=i;
		for(int j=i+1;j<n;j++)
		if(a1[j]<a1[min]) {
		min=j;
		swap(a1[min],a1[i]);
		}
	}
	t1=clock()-t1;
	cout<<"czas dzialania algorytmu sortowania przez wybor to "<<t1<<endl;
}
void Przeczytaj_Tablice(int t[], int n){
	for (int i=0;i<n; i++)
		cout<<t[i]<<" ";

}
int main(){
    srand (time(NULL));
    int n;
    ofstream plik("p.txt");
    cout<<"Podaj wielkosc tablicy:";
    cin>>n;
    int t[n];
    losujtab(t,n);
    zTablicy(t,n,plik);
    plik.close();
    ifstream plk("p.txt");
    zPliku(t,n,plk);
    plik.close();
    ofstream pk("p.txt");
    bubblesort(t,n);
    SelectionSort(t,n);
    InsertSort(t,n);
    cout<<endl;
    Przeczytaj_Tablice(t,n);
   // for(int i=0;i<n;i++){
   //     cout<<" "<<t[i];
   // }
    return 0;
}
