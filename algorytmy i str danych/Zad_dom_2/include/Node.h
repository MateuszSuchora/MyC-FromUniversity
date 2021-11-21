#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node();
        Node(char el);
        Node(char el, Node * n);
        virtual ~Node();
        void setNext(Node * n);
        void setValue(char el);
        char getValue();
        Node* getNext();
    protected:

    private:
        char value;
        Node * next;

};

#endif // NODE_H
