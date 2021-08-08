#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	int a=0,b=0;
	vector<string> v;
	while(t--){
		cin>>a>>b;
		if(a % b == 0){
			v.push_back("YES");
		}else
			v.push_back("NO");
	}
	for(auto x:v){
		cout<<x<<"\n";
	}
	return 0;
}
