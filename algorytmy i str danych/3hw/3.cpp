#include<iostream>
#include<string>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class Node{
private:
    string value;
    string wystapienia;
    Node* left;
    Node* right;
    Node* father; //wskaŸnik do ojca, np przy usuwaniu



public:
    Node  (string v, string u, Node* l, Node* r, Node* f);
    string getValue();
    string getWystapienia();
    Node* getLeft();
    Node* getRight();
    Node* getFather();
    void setValue(string v);
    void setWystapienia(string v);
    void setLeft(Node* l);
    void setRight(Node* r);
    void setFather(Node* f);

};


Node :: Node   (string v, string u,  Node* l, Node* r, Node* f){
    value=v;
    wystapienia=u;
    left=l;
    right=r;
    father=f;
}
string Node :: getValue(){
    return value;
}
string Node :: getWystapienia(){
    return wystapienia;
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
void Node :: setValue(string v){
    value=v;
}
void Node :: setWystapienia(string v){
    wystapienia=v;
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
    void add_rec(Node* r, string el, string war);
    Node* search_rec(Node* r, string value);
    void LKP (Node *k);
   // bool czyjest(Node *x, string a);


public:
    BST();
    void add(string newValue, string newWar);
    bool removee(string value);
    Node* searchh (string value);
    void printLKP();
};


void BST::add_rec(Node* r, string el, string war){
    if(el==r->getValue()){
        string a;
        a=r->getWystapienia();
        a+=war;
        r->setWystapienia(a);
        return;
    }
    if(el>r->getValue()){
        if(r->getRight()!=NULL){
                add_rec(r->getRight(), el, war);
        }
        else{
            r->setRight(new Node(el, war,  NULL, NULL, r));
        }
    }
    else{
        if(r->getLeft()!=NULL){
                add_rec(r->getLeft(), el, war);
        }
        else{
            r->setLeft(new Node(el, war, NULL, NULL, r));
        }
    }

}
Node* BST::search_rec(Node* r, string value){
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
void BST::add(string newValue, string newWar){
    if(root==NULL){
        root= new Node(newValue, newWar, NULL, NULL, NULL);
    }
    else{
        add_rec(root, newValue, newWar);
    }

}

Node* BST::searchh (string value){
    if(root==NULL){
        return NULL;
    }
    else{
        search_rec(root, value);
    }
}
bool BST::removee(string value){
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
/*bool BST::czyjest(Node *x, string a){
    if(a>x->getValue()){
        czyjest(x->getRight(), a);
    }
    else if(a==x->getValue()){
            return 1;
    }
    else{
        czyjest(x->getLeft(), a);
    }
    return 0;
}
*/

 void BST::LKP (Node *k){
        if(k!=0){
            LKP(k->getLeft());
            cout<<k->getValue()<<" => "<<k->getWystapienia()<<endl;
            LKP(k->getRight());
        }
    }
void BST::printLKP( ){
    LKP(root);
}

void czytajPlik(ifstream& plik){
    while(!plik.eof()){
        string a;
        plik>>a;
        cout<<a;
    }
}
void zPliku(string t[], ifstream& plik){
    int n;
    plik>>n;
    string a;
    getline(plik,a);
    for(int i=0;i<n;i++){
        getline(plik,a);
        //plik>>a;
        t[i]=a;
    }

}


int main(){
    int n;
    ifstream plik("plik.txt");
    if( !plik.good() )
        cout << "Dostep do pliku zostal zabroniony!" << endl;
    plik>>n;
    plik.close();
    ifstream plk("plik.txt");
    if( !plk.good() )
        cout << "Dostep do pliku zostal zabroniony!" << endl;
    string t[n+1];
    zPliku(t,plk);
    string totree;
    string rob;
    BST * tree= new BST();
    string a;
    for(int i=0;i<n;i++){
        cout<<t[i]<<endl;
        rob=t[i];
        totree=" ";
        a=' ';
        a+=i+'0'+1;
        int licznik=0;
        for(int j=0;j<rob.length();j++){
            if(!isspace(rob[j])){
                totree += t[i][j];
            }
            else{
                    if(totree!=" "){
                    tree->add(totree, a);
                    totree=" ";
                    }

                }
        }

        tree->add(totree, a);
        totree=" ";
        // tree->printLKP();


    }
    tree->printLKP();


    plk.close();
return 0;
}



