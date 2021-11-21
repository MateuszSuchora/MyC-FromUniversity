#include <iostream>
using namespace std;
int main()
{
  double q,w,e,r,t,y,u,i,o;
  cin>>q>>w>>e>>r>>t>>y>>u>>i>>o;
  cout<<"["<<q<<" "<<w<<" "<<e<<"]"<<endl;
  cout<<"|"<<r<<" "<<t<<" "<<y<<"|"<<endl;
  cout<<"["<<u<<" "<<i<<" "<<o<<"]"<<endl;
  cout<<"Wyznacznik z tej macierzy wynosi:"<<q*t*o+r*i*e+w*y*u-(u*t*e+r*w*o+q*i*y);


    return 0;
}
