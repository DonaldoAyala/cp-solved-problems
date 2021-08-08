#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	vector<char> v;
	for(int i=0;i<s.size();i++){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
			i+=2;
			if(v.size()>0)
				if(v[v.size()-1]!=' ')
					v.push_back(' ');
		}else{
			v.push_back(s[i]);
		}
	}
	if(v[0]==' ')
		v.erase(v.begin());
	if(v[v.size()-1]==' ')
		v.erase(v.begin()+v.size()-1);
	for(auto x:v)
		cout<<x;
	return 0;
}
