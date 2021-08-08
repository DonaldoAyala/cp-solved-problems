#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	bool r=true;
	for(int i=0;i<s.size();i++){
		if(s[i]!='1'){
			r=false;
			break;
		}else if(s[i+1]=='4' && s[i+2]=='4'){
			i+=2;
		}else if(s[i+1]=='4'){
			i+=1;
		}
	}
	if(r) cout<<"YES";
	else cout<<"NO";
	return 0;
}
