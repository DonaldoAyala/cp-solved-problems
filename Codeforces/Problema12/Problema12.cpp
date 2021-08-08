#include <bits/stdc++.h>
using namespace std;
int main(){
	string p;cin>>p;
	string s;cin>>s;
	for(int i=0;i<p.size();i++){
		if(p[i]==s[i]) cout<<0;
		else cout<<1;
	}
	return 0;
}
