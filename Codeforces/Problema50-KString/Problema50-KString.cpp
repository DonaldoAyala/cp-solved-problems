#include <bits/stdc++.h>
using namespace std;
int main(){
	int k;cin>>k;
	string s;cin>>s;
	unordered_map<char,int> um;
	bool r=true;
	for(int i=0;i<s.size();i++)
		um[s[i]]++;
	for(auto i=um.begin();i!=um.end();i++){
		if((i->second % k)){
			r=false;
			break;
		}
	}
	if(r){
		for(int i=0;i<k;i++)
			for(auto j=um.begin();j!=um.end();j++)
				for(int l=0;l<(j->second)/k;l++)
					cout<<j->first;
	}
	else
		cout<<"-1";
	return 0;
}
