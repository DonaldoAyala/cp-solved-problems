#include<bits/stdc++.h>
using namespace std;

template<class TIPO > 
class Node {
  public:
  TIPO dato;
  int altura;
  int balance; // altura izquierda - altura derecha
  
  Node<TIPO> *derecha;
  Node<TIPO> *izquierda;

  Node(TIPO _dato): dato(_dato), derecha(nullptr), izquierda(nullptr),
    balance(0), altura(0) {}

  void
  update(void) {
    int alturaIzquierda  = 0;
    int alturaDerecha = 0;

    if(izquierda != NULL) alturaIzquierda = izquierda->altura;
    if(derecha != NULL)   alturaDerecha   = derecha->altura;

    balance =   alturaIzquierda - alturaDerecha;
    altura = max(alturaIzquierda, alturaDerecha) + 1;
  }

  Node<TIPO> * rotarIzquierda(void) {
      Node<TIPO> * nuevaRaiz = derecha;
      Node<TIPO>* hijoMovible = NULL;
      if(derecha != NULL){
        hijoMovible = derecha->izquierda;
      }
      derecha->izquierda = this;
      derecha = hijoMovible;

      derecha->update();
      update();
      
      return nuevaRaiz;     
  }
  Node<TIPO> * rotarDerecha(void) {
      Node<TIPO> * nuevaRaiz = izquierda;
      Node<TIPO> * hijoMovible = NULL;
      if(izquierda != NULL){
	hijoMovible = izquierda->derecha;
      }
      izquierda->derecha = this;
      izquierda = hijoMovible;

      izquierda->update();
      update();
      
      return nuevaRaiz;     
  }
  
};

template<class TIPO> 
class AVL {
  public:
  Node<TIPO> *raiz;

  AVL(): raiz(nullptr) {} 
  
  // BST
  // regresa: la nueva raíz.
  Node<TIPO>* insertRecursivo( Node<TIPO> *raiz,  Node<TIPO> * nuevo ) {
       if(raiz == nullptr) {
          return nuevo;
       }
       
       // BST  
       if( nuevo->dato  < raiz->dato )  {
         raiz->izquierda = insertRecursivo( raiz->izquierda, nuevo);
       } else {
         raiz->derecha = insertRecursivo( raiz->derecha, nuevo);
       }

       // update
       raiz->update();

       // revisar balance
        if( raiz->balance > 1) { // necesito rotar a la derecha
         return raiz->rotarDerecha();
        } else if(raiz->balance < -1) { // rotar a la izquierda
         return raiz->rotarIzquierda();
        }
      

       return raiz;
  }

  void insert(TIPO dato) {
     Node<TIPO> *nuevo = new Node<TIPO>( dato );

     if(raiz==nullptr) {
       raiz = nuevo;
       return;
     }
   
     raiz = insertRecursivo( raiz, nuevo);
  }

};

int main() {
 AVL<int> arbol;

 for(int i = 0; i < 4; i++) {
   arbol.insert(i);
 }
 
 return 0;
}
