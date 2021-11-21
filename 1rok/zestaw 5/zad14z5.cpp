#include <iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Prosze podac wspolczynnik a ,a nastepnie b"<<endl;
    cin>>a>>b;
    if(a<0){
        if(b>0)
           cout<<"Przechodzi przez 1,2,4 cwiartke";
        if(b==0)
           cout<<"Przechodzi przez 2,4 cwiartke";
        if(b<0)
           cout<<"Przechodzi przez 2,3,4 cwiartke";
    }
    if(a==0){
        if(b>0)
           cout<<"Przechodzi przez 1,2 cwiartke";
        if(b==0)
           cout<<"Przechodzi przez os OX";
        if(b<0)
           cout<<"Przechodzi przez 3,4 cwiartke";
    }
    if(a>0){
        if(b>0)
           cout<<"Przechodzi przez 1,2,3 cwiartke";
        if(b==0)
           cout<<"Przechodzi przez 1,3 cwiartke";
        if(b<0)
           cout<<"Przechodzi przez 1,3,4";
    }
 return 0;
}
