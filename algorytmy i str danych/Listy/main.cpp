#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    int n;
    Lista * l=new Lista();
    l->insertFront(1);
    l->insertFront(6);
    l->insertFront(3);
    l->insertFront(7);
    cout<<"Pierwsza:"<<l->getFirst();
    cout<<endl<< "Lista: ";
    l->printList();
    l->removeNode(1);
    cout<<endl<< "Lista: ";
    l->printList();
    cout<<endl<<"Czy pusta:"<<l->isEmpty()<<endl;
    cin>>n;
    if(l->searchPtr(n)!=0)
        cout<<"Szukana:"<<l->searchPtr(n)->getValue();
    else
        cout<<"Szukana:"<<0;
    l->insertOrder(0);
    l->insertOrder(8);
    l->insertOrder(4);
    l->insertOrder(5);
    l->insertOrder(1);
    l->insertOrder(0);
    l->insertOrder(9);
    l->insertOrder(6);
    cout<<endl<< "Lista: ";
    l->printList();

    return 0;
}
