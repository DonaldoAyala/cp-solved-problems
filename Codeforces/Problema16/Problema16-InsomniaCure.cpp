#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,l,m,n,d,t=0;
	cin>>k>>l>>m>>n>>d;
	vector<int> v(d,0);
	for(int i=k;i<d+1;i+=k){
		v[i-1]=-1;
	}
	for(int i=l;i<d+1;i+=l){
		v[i-1]=-1;
	}	
	for(int i=m;i<d+1;i+=m){
		v[i-1]=-1;
	}
	for(int i=n;i<d+1;i+=n){
		v[i-1]=-1;
	}
	for(auto x:v){
		if(x==-1) t++;
	}
	cout<<t;
}
