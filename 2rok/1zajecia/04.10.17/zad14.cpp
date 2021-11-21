#include <iostream>
using namespace std;
int main(){
   int suma=0;
   short t[10]={1,2,3,4,5,6,7,8,9,10};
   for(int i=0;i<10;i++){
      cout<<t[i]<<' ';
      suma=suma+t[i];
   }
   cout<<endl<<"suma="<<suma;
   return 0;
}
