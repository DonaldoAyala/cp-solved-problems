#include <bits/stdc++.h>
using namespace std;
class Nodo {
public:
	pair<string,int> p;
	Nodo *sig;
	void assignContent(pair<string,int> p) {
		this->p = p;
	}
	pair<string,int> getContent() {
		return p;
	}
	void assignNextNode(Nodo* sig) {
		this->sig = sig;
	}
	Nodo* getNextNode() {
		return sig;
	}
};
class Lista{
	private:
		int longitud;
		Nodo *primero;
		Nodo *ultimo;
	public:
		Lista() {
			longitud = 0;
			primero = NULL;
			ultimo = NULL;
		}
		void insert(pair<string,int> p){
			Nodo *auxiliar=new Nodo();
			auxiliar->assignContent(p);
			if(longitud==0){
				primero=auxiliar;
				ultimo=auxiliar;
				longitud++;
				return;
			}
			ultimo->assignNextNode(auxiliar);
			ultimo=auxiliar;
			longitud++;
		}
		pair<string,int> obtenerPosicion(int posicion){
			Nodo *auxiliar=new Nodo();
			int i=0;
			auxiliar=primero;
			while(i<posicion){
				auxiliar=auxiliar->getNextNode();
				i++;
			}
			return auxiliar->getContent();
		}
		int obtenerLongitud(){
			return longitud;
		}
};

int main () {
	Lista l;
	l.insert(make_pair("hola",3));
	cout<<l.obtenerLongitud()<<endl;
	cout<<l.obtenerPosicion(0).first<<" : "<<l.obtenerPosicion(0).second<<endl;
	return 0;
}