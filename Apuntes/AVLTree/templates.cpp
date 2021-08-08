#include <bits/stdc++.h>
using namespace std;

//typedef int TIPO;
template<class TIPO>
class Node {
	public:
		TIPO dato;
		Node *derecha;
		Node *izquierda;
		Node(TIPO _dato): dato(dato), derecha(nullptr), izquierda(nullptr) {}
};

template<class TIPO>
class AVL {
	public:
	Node<TIPO> *root;
	AVL(): root(nullptr){}
};

int main(){
	AVL<int> arbol;
	AVL<float> arbolf;

	return 0;
}
