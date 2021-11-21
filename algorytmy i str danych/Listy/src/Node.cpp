#include "Node.h"

Node::Node()
{
    value=0;
    next=0;
}

Node::~Node()
{
    //dtor
}
Node:: Node(int el){
    value=el;
    next=0;
}
Node:: Node(int el, Node * n){
    value= el;
    next= n;

}
void Node:: setNext(Node * n){
    next=n;
}
void Node:: setValue(int el){
    value=el;
}
int Node:: getValue(){
    return value;
}
Node* Node:: getNext(){
    return next;
}
