#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int x=0;
	int i=2;
	vector<int> v;
	if(n==0) cout<<"0 0 0";
	else if(n==1) cout<<"0 0 1";
	else if(n==2) cout<<"0 1 1";
	else{
		v.push_back(0);
		v.push_back(1);
		v.push_back(1);
		while(v[v.size()-1]<n){
			v.push_back(v[v.size()-1]+v[v.size()-2]);
		}
		cout<<v[v.size()-3]<<" "<<v[v.size()-3]<<" "<<v[v.size()-4];
	}
	return 0;
}
