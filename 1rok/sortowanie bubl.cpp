#include <iostream>
using namespace std;

void BubbleSort(int T[], int n)
{
    for(int j=0;j<n;j++)
    for(int i=0; i<n; i++) if(T[i]>T[i+1]) swap(T[i], T[i+1]);
}

int main()
{
    int n;
    int * T;
    cin >> n;
    T = new int[n];
    for(int i=0; i<n; i++) cin >> T[i];

    BubbleSort(T, n);



    for(int i=0; i<n; i++) cout << T[i] << " ";
    delete [] T;
    return 0;
}
