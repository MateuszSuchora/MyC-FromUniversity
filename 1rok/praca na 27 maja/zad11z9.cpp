#include <iostream>
using namespace std;
float suma(int n,int m, float f){
    float s=0,il=1;
    int i,j;
  for(i=n;i<=m;i++){
    for(j=i;j<=i*i;j++){
        il=(f/(j*i))*il;
    }
    s=s+il;

  }
  return s;
}
int main(){
    int n,m;
    float f;
   cout<<"Podaj n, m, f do wzoru podanego w zadaniu";
   cin>>n>>m>>f;
   cout<<"Ta suma wynosi:"<<suma(n,m,f);
   return 0;
}
