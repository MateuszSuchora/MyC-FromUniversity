#include <iostream>
#include "Node.h"
#include "Stos.h"
#include "Kolejka.h"
#include <string>
#include <cmath>
using namespace std;
int priorytet( char op )
{
    if( op == '^' )
         return( 3 );
    else if( op == '*'|| op == '/'|| op == '%' )
         return( 2 );
    else if( op == '+' || op == '-' )
         return( 1 );
    else
         return( 0 );

}
Kolejka * KonwersjanaONP(string wprow){
    Kolejka * wyjscie;
    Stos * znaki;
    char c;
    int dl=wprow.length();
    for(int i=0;i<dl;i++){
        c=wprow[i];
        if(isdigit(c)||c==' '){
            wyjscie->attach(c);
            cout<<c;
        }
        if((c=='+')||(c=='-')||(c=='*')||(c=='/')||(c=='%')||(c=='^')){
            if(priorytet(znaki->top())<(priorytet(c))){
              znaki->push(c);
            }
            else{
                while(znaki->isEmpty()){
                    if(znaki->top()!='(')
                        wyjscie->attach(znaki->top());
                    znaki->pop();
                }
                znaki->push(c);
            }
        }
        if(c=='(')
            znaki->push(c);
        if(c==')'){
            while(znaki->isEmpty()){
                    if(znaki->top()!='(')
                        wyjscie->attach(znaki->top());
                    znaki->pop();
            }
        }
        if(i==dl-1){
            while(znaki->isEmpty()){
                    if(znaki->top()!='(')
                        wyjscie->attach(znaki->top());
                    znaki->pop();
            }

        }
    }
    return wyjscie;
}
int ONP(int dl, Kolejka *y){
    char c;
    int a, b;
    double x;
    Stos * s =new Stos;
    for(int i=0;i<dl;i++){
        c=y->frontt();
        if(isdigit(c)){
            s->push(c);
        }
        if((c=='+')||(c=='-')||(c=='*')||(c=='/')||(c=='%')||(c=='^')){
            a=s->top()-'0';
            s->pop();
            b=s->top()-'0';
            s->pop();
            if(c=='+')
                x=b+a;
            else if(c=='-')
                x=b-a;
            else if(c=='*')
                x=b*a;
            else if(c=='/')
                x=b/a;
            else if(c=='^')
                x=pow(b,a);
            else if(c=='%')
                x=b%a;
            s->push(x);

        }
        if(c=dl-1){
            return s->top();
        }

    }
    return x;
}
int main(){
    Stos * znaki= new Stos();
    string wprow;
    getline(cin,wprow);
    int dl=wprow.length();
   // cout<<dl<<" "<<wprow<<endl;
    Kolejka * k=KonwersjanaONP(wprow);
    cout<<ONP(dl,k);


}
