#include "Kolejka.h"
#include <iostream>
using namespace std;
Kolejka::Kolejka(){
    tail=0;
    head=0;
}

Kolejka::~Kolejka(){}

void Kolejka:: attach(char el){
    if(head==0){
        Node *rob=new Node(el,0);
        head=rob;
        tail=rob;
    }
    else{
        Node *pop=tail;
        Node *rob=new Node(el,0);
        pop->setNext(rob);
        tail=rob;
    }

}
void Kolejka:: detach(){
    Node *rob=head;
    head=head->getNext();
    delete(rob);
}
char Kolejka:: frontt(){
     if(head!=0){
        return head->getValue();
     }
     else{
        //cout<<endl<<"Blad klejka pusta:";
        return 0;
     }
}
bool Kolejka:: isEmpty(){
    return head==0;
}
