#ifndef KOLEJKA_H
#define KOLEJKA_H
#include "Node.h"

class Kolejka
{
    public:
        Kolejka();
        virtual ~Kolejka();
        void attach(int el);
        void detach();
        int frontt();
        bool isEmpty();
    protected:

    private:
        Node * head;
        Node * tail;
};

#endif // KOLEJKA_H
