#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	string l;cin>>l;
	reverse(l.begin(),l.end());
	if(s==l) cout<<"YES";
	else cout<<"NO";	
	return 0;
}
