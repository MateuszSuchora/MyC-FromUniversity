#include <iostream>
#include <cmath>
using namespace std;
long c_n(long n, long p){
  long a,i;
  a=p;
  for(i=1;i<=n;i++){
    if(a%2==0){
       a=a/2;
    }
    else{
        a=3*a+1;
    }
  }
  return a;
}
int main(){
  long n,p,cn;
  cout<<"Podaj ktory wyraz ciagu ma byc obliczony, a nastepnie ile ma sie rownac pierwszy wyraz ciagu"<<endl;
  cin>>n;
  cin>>p;
  if(n>0){
      cn=c_n(n,p);
      cout<<"Dla podanego n="<<n<<" nty wyraz ciagu="<<cn;
  }
  else {
    cout<<"zle podany wyraz ciagu";
  }
  return 0;
}
