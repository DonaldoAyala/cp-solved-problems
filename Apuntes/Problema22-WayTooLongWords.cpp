#include <utility>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	vector< pair<int,int> > v;
	while(cin>>a>>b){
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());

	for(auto x:v){
		cout<<x.first * x.second<<"\n";
	}
	return 0;
}
