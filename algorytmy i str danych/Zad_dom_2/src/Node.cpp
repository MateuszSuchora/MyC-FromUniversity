#include "Node.h"

Node::Node()
{
    value=' ';
    next=0;
}

Node::~Node()
{
    //dtor
}
Node:: Node(char el){
    value=el;
    next=0;
}
Node:: Node(char el, Node * n){
    value= el;
    next= n;

}
void Node:: setNext(Node * n){
    next=n;
}
void Node:: setValue(char el){
    value=el;
}
char Node:: getValue(){
    return value;
}
Node* Node:: getNext(){
    return next;
}
