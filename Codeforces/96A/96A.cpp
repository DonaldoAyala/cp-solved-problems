#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	int c=1;
	int r=0;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]==s[i+1])
			c++;
		else
			c=1;
		if(c >= 7){
			r++;
			break;
		}
	}
	if(r)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
