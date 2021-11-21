#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int n;
    cout<<"podaj ile sekund ma trwac odliczanie"<<endl;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        Sleep(1000);
        cout << i << endl;

    }
    cout <<"czas minal!";
    return 0;
}
