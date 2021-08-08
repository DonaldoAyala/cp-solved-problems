#include <bits/stdc++.h>
using namespace std;

class Element {
	string s;
	int o;
	Element(string s,int i) {
		this->s = s;
		this->o = i;
	}
	void setElement(string s, int i) {
		this->s = s;
		this->o = i;
	}
	string getString() {
		return s;
	}
	int getInt() {
		return o;
	}
	void increment() {
		o++;
	}
};

class prueba {
	vector<list<Element>> v;

	public:
		prueba(int n){
			v = vector<list<Element>>(n);
		}
		void insert(string s) {
			Element p(s,1);
			v.push_back(Element());
		}
		void increment(int pos) {
			v[pos].second++;
		}
		void printPos(int pos) {
			cout<<v[pos].first<<" : "<<v[pos].second<<endl;
		}
};

int main() {
	prueba p(10);
	p.insert("hola");
	p.increment(0);
	p.increment(0);
	p.printPos(0);
	return 0;
}