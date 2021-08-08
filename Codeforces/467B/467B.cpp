#include <bits/stdc++.h>
using namespace std;

int noSetBits(int n){
	int c=0;
	while(n) c++, n &= n-1;
	return c;
}

int main() {
	int n,m,k; cin>>n>>m>>k;
	vector<int> v(m+1);
	int aux = 0;
	int ans = 0;
	for(int i=0; i<m+1 ; i++) {
		cin>>v[i];
	}
	for(int i=0; i<m ; i++){
		aux = v[m]^v[i];
		if(noSetBits(aux) <= k){
			ans++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}