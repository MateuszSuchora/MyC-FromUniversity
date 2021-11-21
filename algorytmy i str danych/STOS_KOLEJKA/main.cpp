#include <iostream>
#include "Node.h"
#include "Stos.h"
#include "Kolejka.h"
using namespace std;
Kolejka * sortKolejka(Kolejka * K){
    int a=1;
    int z;
    int o=0;
    bool pierwsza=true;
    Kolejka * k1= new Kolejka();
    Kolejka * k2= new Kolejka();
    while(a==1){
        while(!(K->isEmpty())){
            z=K->frontt();
            K->detach();
            if(z<o){
                pierwsza=!pierwsza;
                }
            if(pierwsza){
                k1->attach(z);
                o=z;
            }
            else{
                k2->attach(z);
                o=z;

            }
        }

        if(k2->isEmpty()){
            a=0;
        }
        while(!(k1->isEmpty()||k2->isEmpty())){
            if((k1->frontt())<(k2->frontt())){
                z=k1->frontt();
                k1->detach();
                K->attach(z);

            }
            else{
                z=k2->frontt();
                k2->detach();
                K->attach(z);
            }


        }
        while(!(k1->isEmpty())){
            z=k1->frontt();
                k1->detach();
                K->attach(z);
        }
        while(!(k2->isEmpty())){
                z=k2->frontt();
                k2->detach();
                K->attach(z);
        }

        o=0;
        pierwsza=true;

    }
    return K;
}

int main()
{
    Stos * s = new Stos();
    s->push(2);
    s->push(4);
    cout<<s->top()<<", ";
    s->pop();
    cout<<s->top();
    s->pop();

    Kolejka * k= new Kolejka();
    k->attach(1);
    k->attach(2);
    k->attach(3);
    cout<<endl;
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    cout<<endl<<endl;
    k->attach(5);
    k->attach(7);
    k->attach(1);
    k->attach(10);
    k->attach(3);
    k->attach(2);
    k->attach(11);
    k->attach(8);
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();

    k->attach(5);
    k->attach(7);
    k->attach(1);
    k->attach(10);
    k->attach(3);
    k->attach(2);
    k->attach(11);
    k->attach(8);
    cout<<endl<<"Teraz sortujemy"<<endl;
    k=sortKolejka(k);
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();
    cout<<k->frontt()<<", ";
    k->detach();




    return 0;
}
