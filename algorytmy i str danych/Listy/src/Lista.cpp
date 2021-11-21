#include "Lista.h"
#include <iostream>
using namespace std;
Lista::Lista()
{
    head=0;
}

Lista::~Lista()
{
    //dtor
}
void Lista:: insertFront(int el){
    Node *rob=new Node(el,head);
    head=rob;
}
bool Lista:: removeNode(int el){
    Node *rob=head;
    Node *pop=0;
    bool jest=false;
    while((rob!=0)&&(jest==false)){
        jest=rob->getValue()==el;
        if(jest==false){
            pop=rob;
            rob=rob->getNext();
        }
    }
    if(jest){//usowanie
        if(pop==0){//usow 1
            rob=head;
            head=head->getNext();
            delete(rob);
        }
        else{
            pop-> setNext(rob->getNext());
            delete(rob);
        }
        return true;
    }
    return false;
}
Node * Lista:: searchPtr(int el){
    Node *rob=head;
    Node *pop=0;
    bool jest=false;
    while((rob!=0)&&(jest==false)){
        jest=rob->getValue()==el;
        if(jest==false){
            pop=rob;
            rob=rob->getNext();
        }
    }
    if(jest){
        return rob;
    }

    return 0;
}
bool Lista:: isEmpty(){
    return head==0;
}
int Lista:: getFirst(){
    Node * rob=head;
    return rob->getValue();
}
void Lista:: printList(){
    Node *rob=head;
    while(rob!=0){
        cout<<rob->getValue()<<", ";
        rob=rob->getNext();
    }
}
void Lista:: insertOrder(int el){
    Node *rob=head;
    Node *pop=0;
    bool jest=rob->getValue()>el;
    if(jest&&pop==0){
        Node *rob=new Node(el,head);
        head=rob;
    }
    else {
            while((rob!=0)&&(!jest)){
                jest=rob->getValue()>el;
                if(!jest){
                    pop=rob;
                    rob=rob->getNext();

                }
            }
            if((rob==0)&&(!jest)){
                Node *rob=new Node(el,0);
                pop->setNext(rob);
            }
            else{
                Node *rob=new Node(el,pop->getNext());
                pop->setNext(rob);


            }
    }
}
