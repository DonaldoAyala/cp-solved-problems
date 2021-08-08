#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int m;cin>>m;
	vector<int> v;
	int x;
	long long r=0;
	for(int i=0;i<m;i++){
		cin>>x;
		v.push_back(x);	
	}
	x = 1;
	for(int i=0;i<v.size();i++){
		if(v[i]>=x){
		       r+=v[i]-x;
		       x =v[i];
		       
		}else {
			r += n-x+v[i] ;
			x = v[i];
		}
	}
	cout<<r;

	return 0;
}
