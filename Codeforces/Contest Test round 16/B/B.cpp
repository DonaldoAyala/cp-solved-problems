#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	vector<string> v;
	int y;
	while(t--){
		bool caso = false;
		int a,b,c,d;
		int max=0;
		cin>>a>>b>>c>>d;
		if(a+c == b && a+c == d) caso = true;
		if(a+d == c && a+d == b) caso = true;
		if(b+c == a && b+c == d) caso = true;
		if(b+d == a && b+d == c) caso = true;
		if(caso) v.push_back("Yes");
		else v.push_back("No");
	}
	for(auto x:v)
		cout<<x<<endl;
	return 0;
}
