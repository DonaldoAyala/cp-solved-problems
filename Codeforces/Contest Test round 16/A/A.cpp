#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	int t;cin>>t;
	vector<int> v;
	while(t--){
		cin>>a>>b;
		v.push_back(a+b);
	}
	for(auto x:v)
		cout<<x<<endl;
	return 0;
}
