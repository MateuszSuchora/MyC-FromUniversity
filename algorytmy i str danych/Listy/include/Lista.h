#ifndef LISTA_H
#define LISTA_H
#include "Node.h"


class Lista
{
    public:
        Lista();
        virtual ~Lista();
        void insertFront(int el);
        void insertOrder(int el);
        bool removeNode(int el);
        Node * searchPtr(int el);
        bool isEmpty();
        int getFirst();
        void printList();

    protected:

    private:
        Node* head;
};

#endif // LISTA_H
