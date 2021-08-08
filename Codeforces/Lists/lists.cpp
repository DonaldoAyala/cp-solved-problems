#include <bits/stdc++.h>
using namespace std;


void insertLeft(list<int>::iterator it,int data,list<int> &l){
	l.insert(it,data);
}
void insertRight(list<int>::iterator it,int data,list<int> &l){
	auto aux = it;
	aux++;
	l.insert(aux,data);
}

void seeList(list<int>::iterator it,list<int> list){
	for(auto i=list.begin();i!=list.end();i++){
		cout<<*i<<" ";
		cout<<endl<<*it<<endl;
	}
}

int main(){
	list<int> l;
	int n,p;cin>>n>>p;
	int x;
	list<int>::iterator it=l.begin();
	while(n--){
		cin>>x;
		l.push_back(x);
		if(p--) it++;
	}
	int q;cin>>q;
	string s;
	while(q--){
		cin>>s;
		if(s=="moveLeft"){
			if(it != l.begin())
				it--;
		}else if(s=="moveRight"){
			auto aux = it;
			aux++;
			if(aux != l.end())
				it++;
		}else if(s=="insertRight"){
			cin>>x;
			insertRight(it,x,l);
		}else if(s=="insertLeft"){
			cin>>x;
			insertLeft(it,x,l);
		}else if(s=="print"){
			cout<<*it<<endl;
		}
	}
	return 0;
}
