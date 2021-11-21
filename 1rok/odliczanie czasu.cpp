#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cout<<"podaj ile sekund ma trwac odliczanie"<<endl;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        Sleep(1000);
        system("cls");
        cout << i << endl;

    }
    system("cls");
    cout <<"czas minal!";
    return 0;
}
