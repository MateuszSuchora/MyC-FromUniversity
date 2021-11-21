#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node();
        Node(int el);
        Node(int el, Node * n);
        virtual ~Node();
        void setNext(Node * n);
        void setValue(int el);
        int getValue();
        Node* getNext();
    protected:

    private:
        int value;
        Node * next;
};

#endif // NODE_H
