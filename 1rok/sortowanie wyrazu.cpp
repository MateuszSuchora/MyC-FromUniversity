#include <iostream>
using namespace std;
string sort_string (string s, int n)
{
     for (int j=0; j<n;j++)
    for(int i=0; i<n-1;i++) if(s[i]>s[i+1]) swap (s[i], s[i+1] );
    return s;
}
int main()

{
    string s;
    int n;
    cin >> s;
    n=s.size();

    cout<<"posortowany string:" <<sort_string(s, n);
    return 0;
}
