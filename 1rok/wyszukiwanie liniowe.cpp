#include <iostream>

#include <iostream>
using namespace std;
int main()
{
    int n,k,i;
    int * T;
    cin >> n;
    T = new int[n];

    for(int i=0; i<n; i++) cin >> T[i];

    cin>>k;

    for(i=0; i<n; i++) if(T[i]==k) break;

    if(i<n) cout << "k na pozycji:"<< i+1 <<endl;
        else cout << " k nie wystepuje"<<endl;

    delete [] T;
}

