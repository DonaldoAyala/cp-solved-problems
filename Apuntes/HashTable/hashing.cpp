#include <bits/stdc++.h>
using namespace std;

class Element {
public:
	string s;
	int o;
	Element(){}
	Element(string s, int o) {
		this->s;
		this->o;
	}
	string getString() {
		return s;
	}
	int getOcurrences() {
		return o;
	}
	void increment() {
		o++;
	}
};

class Node {
public:
	Element p;
	Node *sig;
	Node() {
		sig = NULL;
	}
	void assignContent(Element p) {
		this->p = p;
	}
	Element* getContent() {
		return &p;
	}
	void assignNextNode(Node* sig) {
		this->sig = sig;
	}
	Node* getNextNode() {
		return sig;
	}
};
class List{
	private:
		int length;
		Node *f;
		Node *l;
	public:
		List() {
			length = 0;
			f = NULL;
			l = NULL;
		}
		void insert(Element p){
			Node *aux=new Node();
			aux->assignContent(p);
			if(length==0){
				f=aux;
				l=aux;
				length++;
				return;
			}
			l->assignNextNode(aux);
			l=aux;
			length++;
		}
		Element* getPosition(int pos){
			Node *aux=new Node();
			int i=0;
			aux=f;
			while(i<pos){
				aux=aux->getNextNode();
				i++;
			}
			return aux->getContent();
		}
		int getLength(){
			return length;
		}
};

class hash_table {
		int seed;
		vector<List> v;
		int maxn;
	public:
		hash_table(int _maxn) {
			maxn = _maxn;
			v = vector<List>(_maxn);
			seed = 23;
		}
		unsigned int hash(string s) {
			unsigned long long ans = 0;
			int l = s.size();
			for( int i = 0 ; i < l ; i++ ) {
				ans += pow(23,(l - i - 1))*(s[i]);
			}
			ans = ans%maxn;
			return ans;
		}
		void insert(string s) {
			int pos = hash(s);
			Element p(s,1);
			if(v[pos].getLength() == 0) {
				v[pos].insert(p);
			} else {
				bool isinlist = false;
				for(int i=0;i<v[pos].getLength();i++) {
					if(v[pos].getPosition(i)->getString() == s) {
						v[pos].getPosition(i)->increment();
						isinlist = true;
						break;
					}
				}
				if(!isinlist) {
					v[pos].insert(p);
				}
			}
		}
		int getOcurrences(string s) {
			int pos = hash(s);
			for(int i=0;i<v[pos].getLength();i++) {
				if(v[pos].getPosition(i)->getString() == s) return v[pos].getPosition(i)->getOcurrences();
			}
			return 0;
		}
};

int main() {
	hash_table ht(10);
	int t; cin>>t;
	vector<string> v(t);
	for(int i=0; i<t;i++) {
		cin>>v[i];
		ht.insert(v[i]);
	}
	cout<<"Ocurrencias"<<endl;
	for(int i=0; i<t;i++) {
		cout<<v[i]<<" : "<<ht.getOcurrences(v[i])<<endl;
	}
	return 0;
}