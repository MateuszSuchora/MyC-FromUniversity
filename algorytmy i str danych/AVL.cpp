#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

struct AVLNode
{
  AVLNode * up, * left, * right;
  int key, bf;
};

string cr,cl,cp;      // łańcuchy do znaków ramek

void printBT(string sp, string sn, AVLNode * v){
  string s;
  if(v)
  {
    s = sp;
    if(sn == cr) s[s.length() - 2] = ' ';
    printBT(s + cp, cr, v->right);
    s = s.substr(0,sp.length()-2);
    cout << s << sn << v->key << ":" << v->bf << endl;
    s = sp;
    if(sn == cl) s[s.length() - 2] = ' ';
    printBT(s + cp, cl, v->left);
  }
}


void DFSRelease(AVLNode * v) // usuniecie drzewa
{
  if(v)
  {
    DFSRelease(v->left);   // usuwamy lewe poddrzewo
    DFSRelease(v->right);  // usuwamy prawe poddrzewo
    delete v;              // usuwamy sam węzeł
  }
}

void RR(AVLNode * & root, AVLNode * A) // Rotacja RR
{
  AVLNode * B = A->right, * p = A->up;
  A->right = B->left;
  if(A->right) A->right->up = A;
  B->left = A;
  B->up = p;
  A->up = B;
  if(p){
    if(p->left == A) p->left = B; else p->right = B;
  }
  else
    root = B;
  if(B->bf == -1)
    A->bf = B->bf = 0;
  else{
    A->bf = -1; B->bf = 1;
  }
}

void LL(AVLNode * & root, AVLNode * A) // Rotacja LL
{
  AVLNode * B = A->left, * p = A->up;
  A->left = B->right;
  if(A->left)
    A->left->up = A;
  B->right = A;
  B->up = p;
  A->up = B;
  if(p){
    if(p->left == A)
        p->left = B;
    else
        p->right = B;
  }
  else
    root = B;
  if(B->bf == 1)
    A->bf = B->bf = 0;
  else{
    A->bf = 1; B->bf = -1;
  }
}
void RL(AVLNode * & root, AVLNode * A){// Rotacja RL
  AVLNode * B = A->right, * C = B->left, * p  = A->up;
  B->left = C->right;
  if(B->left)
        B->left->up = B;
  A->right = C->left;
  if(A->right)
        A->right->up = A;
  C->left = A;
  C->right = B;
  A->up = B->up = C;
  C->up = p;
  if(p){
    if(p->left == A)
        p->left = C;
    else p->right = C;
  }
  else
    root = C;
  if(C->bf == -1)
    A->bf =  1;
  else
    A->bf = 0;
  if(C->bf ==  1)
    B->bf = -1;
  else
    B->bf = 0;
  C->bf = 0;
}

void LR(AVLNode * & root, AVLNode * A){// Rotacja LR
  AVLNode * B = A->left, * C = B->right, * p = A->up;
  B->right = C->left;
  if(B->right)
    B->right->up = B;
  A->left = C->right;
  if(A->left)
    A->left->up = A;
  C->right = A;
  C->left = B;
  A->up = B->up = C;
  C->up = p;
  if(p){
    if(p->left == A)
        p->left = C;
    else
        p->right = C;
  }
  else
    root = C;

  if(C->bf ==  1)
    A->bf = -1;
  else
    A->bf = 0;
  if(C->bf == -1)
    B->bf =  1;
  else
    B->bf = 0;

  C->bf = 0;
}

// Wstawia nowy węzeł do drzewa AVL
// root - referencja korzenia
// k    - klucz nowego węzła
//---------------------------------
void insertAVL(AVLNode * & root, int k)
{
  AVLNode * w,* p,* r;
  bool t;

  w = new AVLNode;
  w->left = w->right = w->up = NULL;
  w->key  = k;
  w->bf  = 0;

  p = root;

  if(!p) root = w;
  else
  {
    while(true)
      if(k < p->key)
      {
        if(!p->left)
        {
          p->left = w;
          break;
        }
        p = p->left;
      }
      else
      {
        if(!p->right)
        {
          p->right = w;
          break;
        }
        p = p->right;
      }

    w->up = p;

    if(p->bf) p->bf = 0;
    else
    {
      if(p->left == w)
        p->bf = 1;
      else
        p->bf = -1;

      r = p->up;

      t = false;
      while(r)
      {
        if(r->bf)
        {
          t = true;
          break;
        };

        if(r->left == p) r->bf =  1;
        else             r->bf = -1;

        p = r;
        r = r->up;
      }

      if(t)
      {
        if(r->bf == 1)
        {
          if(r->right == p) r->bf = 0;
          else if(p->bf == -1) LR(root,r);
          else                 LL(root,r);
        }
        else
        {
          if(r->left == p) r->bf = 0;
          else if(p->bf == 1) RL(root,r);
          else                RR(root,r);
        }
      }
    }
  }
}

// Funkcja znajduje poprzednik węzła p
AVLNode * predAVL(AVLNode * p)
{
  AVLNode * r;

  if(p)
  {
    if(p->left)
    {
      p = p->left;
      while(p->right) p = p->right;
    }
    else
      do
      {
        r = p;
        p = p->up;
      } while(p && p->right != r);
  }
  return p;
}

// Funkcja szuka w drzewie AVL węzła o zadanym kluczu.
// Jeśli go znajdzie, zwraca jego wskazanie. Jeżeli nie,
// to zwraca wskazanie puste.
// Parametrami są:
// p - wskazanie korzenia drzewa AVL
// k - klucz poszukiwanego węzła
//----------------------------------------------------
AVLNode * findAVL(AVLNode * p, int k)
{
  while(p && p->key != k)
    p = (k < p->key) ? p->left: p->right;

  return p;
}

// Funkcja usuwa rekurencyjnie węzeł x
// root - referencja do zmiennej z adresem korzenia
// x - wskazanie usuwanego węzła
//-------------------------------------------------
AVLNode * removeAVL(AVLNode * & root, AVLNode * x)
{
  AVLNode  *t,*y,*z;
  bool nest;

  if(x->left && x->right)
  {
    y    = removeAVL(root,predAVL(x));
    nest = false;
  }
  else
  {
    if(x->left)
    {
      y = x->left; x->left = NULL;
    }
    else
    {
      y = x->right; x->right = NULL;
    }
    x->bf = 0;
    nest  = true;
  }

  if(y)
  {
    y->up    = x->up;
    y->left  = x->left;  if(y->left)  y->left->up  = y;
    y->right = x->right; if(y->right)  y->right->up = y;
    y->bf    = x->bf;
  }

  if(x->up)
  {
    if(x->up->left == x) x->up->left = y; else x->up->right = y;
  }
  else root = y;

  if(nest)
  {
    z = y;
    y = x->up;
    while(y)
    {
      if(!y->bf)
      {
        if(y->left == z)  y->bf = -1; else y->bf = 1;
        break;
      }
      else
      {
        if(((y->bf == 1) && (y->left == z)) || ((y->bf == -1) && (y->right == z)))
        {
          y->bf = 0;
          z = y; y = y->up;
        }
        else
        {
          if(y->left == z)  t = y->right; else t = y->left;
          if(!t->bf)
          {
            if(y->bf == 1) LL(root,y); else RR(root,y);
            break;
          }
          else if(y->bf == t->bf)
          {
            if(y->bf == 1) LL(root,y); else RR(root,y);
            z = t; y = t->up;
          }
          else
          {
            if(y->bf == 1) LR(root,y); else RL(root,y);
            z = y->up; y = z->up;
          }
        }
      }
    }
  }
  return x;
}

//**********************
//*** PROGRAM GŁÓWNY ***
//**********************

int main()
{
  int Tk[32];   // tablica kluczy węzłów
  int i,x,i1,i2;
  AVLNode * root = NULL;


  cr = cl = cp = "  ";
  cr[0] = 218; cr[1] = 196;
  cl[0] = 192; cl[1] = 196;
  cp[0] = 179;

  srand(time(NULL));

  for(i = 0; i < 32; i++)
    Tk[i] = i + 1;

  for(i = 0; i < 300; i++)
  {
    i1 = rand() % 32;
    i2 = rand() % 32;

    x = Tk[i1];
    Tk[i1] = Tk[i2];
    Tk[i2] = x;
  }

  for(i = 0; i < 32; i++)
  {
    cout << Tk[i] << " ";
    insertAVL(root,Tk[i]);
  }

  cout << endl << endl;

  printBT("","",root);

  cout << endl << endl;

  for(i = 0; i < 300; i++)
  {
    i1 = rand() % 32; i2 = rand() % 32;
    x = Tk[i1]; Tk[i1] = Tk[i2]; Tk[i2] = x;
  }

  for(i = 0; i < 15; i++)
  {
    cout << Tk[i] << " ";
    removeAVL(root,findAVL(root,Tk[i]));
  }

  cout << endl << endl;

  printBT("","",root);
  DFSRelease(root);

  return 0;
}
