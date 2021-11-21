#include <iostream>
using namespace std;
int main(){
 int a=1,b=1,c=1,d=1,m,e;
 cout<<"Podaj liczbe calkowita"<<endl;
 cin>>m;
 e=m;
 if(m>=4){
     cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" e="<<4<<endl;
     for(int i=4;i<=m;i++) {
          d++;
          if((a*a)+(b*b)+(c*c)+(d*d)==e)
            cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" e="<<e<<endl;
     }
    a=1;
    b=1;
    c=1;
    d=1;
     for(int j=4;j<=m;j++){
        d++;
        c++;
        if((a*a)+(b*b)+(c*c)+(d*d)==e)
            cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" e="<<e<<endl;

     }
    a=1;
    b=1;
    c=1;
    d=1;
     for(int k=4;k<=m;k++){
        d++;
        c++;
        b++;
        if((a*a)+(b*b)+(c*c)+(d*d)==e)
            cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" e="<<e<<endl;
     }
    a=1;
    b=1;
    c=1;
    d=1;
     for(int l=4;l<=m;l++){
        d++;
        c++;
        b++;
        a++;
        if((a*a)+(b*b)+(c*c)+(d*d)==e)
            cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" e="<<e<<endl;
     }
 }
 else
    cout<<"z³e dane wejsciowe";
 return 0;
}
