#include "Stos.h"

Stos::Stos(){}

Stos::~Stos(){}

void Stos:: push(int el){
    Node *rob=new Node(el,peak);
    peak=rob;
}
void Stos:: pop(){
    Node *rob=peak;
    peak=peak->getNext();
    delete(rob);
}
int Stos:: top(){
    Node * rob=peak;
    return rob->getValue();
}
bool Stos:: isEmpty(){
    return peak==0;
}
