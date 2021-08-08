#include <bits/stdc++.h>
using namespace std;

class Nodo{
    public:
        Nodo *sig;
        int dato;
        Nodo(int x){
            sig == NULL;
            dato = x;
        }
};
class Pila{
    public:
        Nodo *tope;
        void push(int x){
            Nodo *aux = new Nodo(x);
            if(tope==NULL){
                tope = aux;
                return;
            }
            aux->sig = tope;
            tope = aux;
        }
        int top(){
            return tope->dato;
        }
        int getMax(){
            int max=top();
            Nodo *aux = tope;
            while(aux != NULL){
                if(aux->dato > max) max = aux->dato;
                aux = aux->sig;
            }
            return max;
        }
        void pop(){
            if(tope != NULL)
            tope = tope->sig;
        }
        Pila(){
            tope = NULL;
        }
};

int main() {
    int t;cin>>t;
    int x;
    Pila *p = new Pila();
    vector<int> ans;
    while(t--){
        cin>>x;
        switch(x){
            case 1:
                cin>>x;
                p->push(x);
            break;
            case 2:
                p->pop();
            break;
            case 3:
                ans.push_back(p->getMax());
            break;
        }
    }
    for(auto x:ans)
        cout<<x<<endl;
    return 0;
}

