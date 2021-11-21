#ifndef STOS_H
#define STOS_H
#include "Node.h"

class Stos
{
    public:
        Stos();
        virtual ~Stos();
        void push(char el);
        void pop();
        char top();
        bool isEmpty();


    protected:

    private:
        Node * peak;
};

#endif // STOS_H
