#include<iostream>
using namespace std;
int main(){
  int a;
  float b;
  char z;
  int *a1=&a;
  float*b1=&b;
  char*z1=&z;
  cin>>a>>b>>z;
  cout<<a<<"  "<<b<<"  "<<z<<"  "<<a1<<"  "<<b1<<"  "<<z1;
   cout<<a<<"  "<<b<<"  "<<z<<"  "<<&a<<"  "<<&b<<"  "<<&z;

}
