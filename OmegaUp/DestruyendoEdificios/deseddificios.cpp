#include <bits/stdc++.h>
#define ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
	int t;cin>>t;
	int x;
	vector<int> v;
	while(t--){
		cin>>x;
		v.push_back(x);
	}
	v.push_back(0);
	stack<pair<int,int>> pila;
	long long areamax = 0;
	for ( int i=0 ; i < v.size() ; i++ ) {
		if ( pila.empty() || pila.top().first < v[i] ) {
			pila.push(make_pair(v[i],i));
		} else if ( pila.top().first > v[i] ) {
			while ( !pila.empty() && pila.top().first > v[i] ) {
				long long aux = pila.top().first * (i - pila.top().second);
				if ( aux > areamax ) areamax = aux;
				pila.pop();
			}
		}
	}
	cout<<areamax<<endl;
	return 0;
}
