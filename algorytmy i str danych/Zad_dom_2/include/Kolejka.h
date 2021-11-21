#ifndef KOLEJKA_H
#define KOLEJKA_H
#include "Node.h"

class Kolejka
{
    public:
        Kolejka();
        virtual ~Kolejka();
        void attach(char el);
        void detach();
        char frontt();
        bool isEmpty();
    protected:

    private:
        Node * head;
        Node * tail;
};

#endif // KOLEJKA_H
