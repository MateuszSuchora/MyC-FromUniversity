#include<iostream>
#include<string>
#include <vector>
using namespace std;
class Node{
private:
    int value;
    Node* left;
    Node* right;
    Node* father; //wskaŸnik do ojca, np przy usuwaniu


public:
    Node  (int v, Node* l, Node* r, Node* f);
    int getValue();
    Node* getLeft();
    Node* getRight();
    Node* getFather();
    void setValue(int v);
    void setLeft(Node* l);
    void setRight(Node* r);
    void setFather(Node* f);

};


Node :: Node   (int v, Node* l, Node* r, Node* f){
    value=v;
    left=l;
    right=r;
    father=f;
}
int Node :: getValue(){
    return value;
}
Node* Node :: getLeft(){
    return left;
}
Node* Node :: getRight(){
    return right;
}
Node* Node :: getFather(){
    return father;
}
void Node :: setValue(int v){
    value=v;
}
void Node :: setLeft(Node* l){
    left=l;
}
void Node :: setRight(Node* r){
    right=r;
}
void Node :: setFather(Node* f){
    father=f;
}


class Nodee
{
public:
    Nodee(Node* el);
    virtual ~Nodee();
    Node* getValue() const;
    Nodee* getNext();
    void setNext(Nodee* el);
protected:

private:
    Nodee * next;
    Node* value;
};


Nodee::Nodee(Node* el)
{
    value = el;
    next = NULL;
}

Nodee::~Nodee()
{
}

Node* Nodee::getValue() const
{
    return value;
}


Nodee* Nodee::getNext()
{
    return next;
}

void Nodee::setNext(Nodee* el)
{
    next=el;
}


///////////////////////////
/////KOLEJKA//////////////
/////////////////////////

class Kolejka
{

public:
    Kolejka();
    ~Kolejka();
    void push(Node* el);
    bool isEmpty();
    void pop();
    Node* top();
    void show();

private:
    Nodee* head;
    Nodee* tail;

};

Kolejka::Kolejka()
{
    head= NULL;
    tail=NULL;
}

Kolejka::~Kolejka()
{

}

void Kolejka::push(Node* el)
{
    if(!isEmpty())
    {
        tail->setNext(new Nodee(el));
        tail=tail->getNext();
    }
    else
    {
        head=tail=new Nodee(el);
    }



}

bool Kolejka::isEmpty()
{
    return head==NULL;
}

void Kolejka::pop()
{
    if(!isEmpty())
    {
        Nodee* rob=head;
        head=head->getNext();
        delete rob;
    }

}

Node* Kolejka::top()
{
    return head->getValue();
}


void Kolejka::show()
{
    Nodee* tmp = head;
    while(tmp)
    {
        cout << tmp->getValue() << " ";
        tmp = tmp->getNext();
    }
    cout << endl;
}

class BST{
private:
    Node* root;
    void add_rec(Node* r, int el);
    Node* search_rec(Node* r, int value);
    void LKP (Node *k);
    void PKL (Node *k);
    void KLP (Node *k);
    void KPL (Node *k);
    void LPK (Node *k);
    void PLK (Node *k);
    void LKPdotabicy (Node *k, int tab[], int &a);
    void LKPnowe (Node *k, int st);




public:
    BST();
    void add(int newValue);
    bool removee(int value);
    Node* searchh (int value);
    string toString();
    void printLKP();
    void printPKL();
    void printKLP();
    void printKPL();
    void printLPK();
    void printLPKdotablicy(int tab[], int a);
    void printPLK();
    void printWszerz();
    void printLKPnowe();
    void wywazanierek(int tab[], int a, int b);
};

void BST::add_rec(Node* r, int el){
    if(el>r->getValue()){
        if(r->getRight()!=NULL){
                add_rec(r->getRight(), el);
        }
        else{
            r->setRight(new Node(el, NULL, NULL, r));
        }
    }
    else{
        if(r->getLeft()!=NULL){
                add_rec(r->getLeft(), el);
        }
        else{
            r->setLeft(new Node(el, NULL, NULL, r));
        }
    }

}

Node* BST::search_rec(Node* r, int value){
    if(value>r->getValue()){
        search_rec(r->getRight(), value);
    }
    else if(value==r->getValue()){
            return r;
    }
    else{
        search_rec(r->getLeft(), value);
    }
}


BST::BST(){
    root=NULL;
}
void BST::add(int newValue){
    if(root==NULL){
        root= new Node(newValue, NULL, NULL, NULL);
    }
    else{
        add_rec(root, newValue);
    }

}

Node* BST::searchh (int value){
    if(root==NULL){
        return NULL;
    }
    else{
        search_rec(root, value);
    }
}
bool BST::removee(int value){
    Node* rob=searchh(value);
    if(rob->getLeft()==NULL && rob->getRight()==NULL){
        if(rob->getFather()->getRight()==rob){
            rob->getFather()->setRight(NULL);
        }
        else{ //rob musu byc na lewo
            rob->getFather()->setLeft(NULL);
        }
        delete rob;
        rob=NULL;
    }
    else if(rob->getLeft()!=NULL && rob->getRight()==NULL){ //jes tylko lewy potomek
        if(rob->getFather()->getRight()==rob){
            rob->getFather()->setRight(rob->getLeft());
        }
        else{ //rob musu byc na lewo
            rob->getFather()->setLeft(rob->getLeft());
        }
        delete rob;
        rob=NULL;

    }
    else if(rob->getLeft()==NULL && rob->getRight()!=NULL){ //jes tylko prawy potomek
        if(rob->getFather()->getRight()==rob){
            rob->getFather()->setRight(rob->getRight());
        }
        else{ //rob musu byc na lewo
            rob->getFather()->setLeft(rob->getRight());
        }
        delete rob;
        rob=NULL;

    }
    else{ //jest dwoch synow
        Node * cos=rob->getLeft();
        bool test=false;
        while(cos->getRight()!=NULL){
            test=true;
            cos=cos->getRight();
        }
        rob->setValue(cos->getValue());
        if(test)
            cos->getFather()->setRight(cos->getLeft());
        else
            rob->setLeft(cos->getLeft());
        delete cos;
        cos=NULL;

    }


}
string BST::toString(){



}

 void BST::LKP (Node *k){
        if(k!=0){
            LKP(k->getLeft());
            cout<<k->getValue()<<", ";
            LKP(k->getRight());
        }
    }

 void BST::LKPnowe (Node *k, int st){
        if(k!=0){
            st++;
            LKPnowe(k->getLeft(), st);
            st--;
            for(int i=0; i<st; i++){
                cout<<" ";
            }
            cout<<k->getValue()<<endl;
            st++;
            LKPnowe(k->getRight(),st);
        }
    }
void BST::LKPdotabicy(Node *k, int tab[], int &a){
        if(k!=0){
            LKPdotabicy(k->getLeft(), tab, a);
            tab[a]=k->getValue();
            a++;
            LKPdotabicy(k->getRight(), tab, a);
        }
    }

void BST::wywazanierek(int tab[], int a, int b){
    if(a<b){
        int x = ( a + b ) / 2;
        add(tab[x]);
        wywazanierek(tab, a, x);
        x++;
        wywazanierek(tab, x, b);
    }

}

void BST::PKL (Node *k){
        if(k!=0){
            PKL(k->getRight());
            cout<<k->getValue()<<", ";
            PKL(k->getLeft());
        }
    }
    void BST::KLP (Node *k){
        if(k!=0){
            cout<<k->getValue()<<", ";
            KLP(k->getLeft());
            KLP(k->getRight());
        }

    }
    void BST::KPL (Node *k){}
    void BST::LPK (Node *k){}
    void BST::PLK (Node *k){}

void BST::printLKP( ){
    LKP(root);
}
void BST::printPKL(){
    PKL(root);
}
void BST::printKLP(){
    KLP(root);
}
void BST::printKPL(){
    KPL(root);
}
void BST::printLPK(){
    LPK(root);
}
void BST::printPLK(){
    PLK(root);
}

void BST::printWszerz(){
    Kolejka *kol = new Kolejka();
    kol->push(root);
    while(!kol->isEmpty()){
        cout<<kol->top()->getValue();
        if(kol->top()->getLeft()!=NULL){
            kol->push(kol->top()->getLeft());
        }
        if(kol->top()->getRight()!=NULL){
            kol->push(kol->top()->getRight());
        }
        kol->pop();
    }

}

void BST::printLPKdotablicy(int tab[], int a){
    LKPdotabicy(root, tab, a);
}
void BST::printLKPnowe( ){
    int st=0;
    LKPnowe(root, st);
}




int main(){

    BST *drzewo = new BST();
    drzewo->add(30);
    drzewo->add(20);
    drzewo->add(40);
    drzewo->add(15);
    drzewo->add(25);
    drzewo->add(50);
    drzewo->add(10);
    drzewo->add(17);
    drzewo->add(26);
    drzewo->add(45);
    drzewo->add(55);
    /*drzewo->printLKP();
    cout<<endl;
    drzewo->printPKL();
    cout<<endl;
    drzewo->printKLP();
    cout<<endl;
    drzewo->printWszerz();
    cout<<endl;
    cout<<endl;
    drzewo->removee(10);
    drzewo->printLKP();
    cout<<endl;
    drzewo->removee(25);
    drzewo->printLKP();
    cout<<endl;
    drzewo->removee(50);
    drzewo->printLKP();
    cout<<endl;
    drzewo->removee(20);
    drzewo->printLKP();
    cout<<endl; */

    BST *drzewo1 = new BST();
    drzewo1->add(1);
    drzewo1->add(2);
    drzewo1->add(3);
    drzewo1->add(4);
    drzewo1->add(5);
    drzewo1->add(6);
    drzewo1->add(7);
    drzewo1->add(8);
    drzewo1->add(9);
    drzewo1->printLKPnowe();
    int a=9;
    int tab[a];
    drzewo1->printLPKdotablicy(tab, 0);
    for(int i=0; i<a; i++){
        cout<<tab[i]<<", ";
    }
    cout<<endl;
    BST *drzewo2 = new BST();
    drzewo2->wywazanierek(tab, 0, a-1);
    drzewo2->printLKPnowe();



return 0;
}



