#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	vector<int> v;
	int r=0;
	for(auto x:s)
		v.push_back(x);
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-1;i++){
		if(v[i]==v[i+1]) r++; 
	}
	r = v.size()-r;
	if(r%2 == 0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";	
	return 0;
}
