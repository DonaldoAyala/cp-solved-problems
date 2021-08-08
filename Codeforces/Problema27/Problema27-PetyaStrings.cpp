#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1;cin>>s1;
	string s2;cin>>s2;
	short n=0;
	for(int i=0;i<s1.size();i++){
		if(s1[i]<97) s1[i]+=32;
		if(s2[i]<97) s2[i]+=32;
	}
	for(int i=0;i<s1.size();i++){
		if(s1[i]<s2[i]){
			n=-1;
			break;
		}
		if(s1[i]>s2[i]){
			n=1;
			break;
		}
	}
	cout<<n;
	return 0;
}
