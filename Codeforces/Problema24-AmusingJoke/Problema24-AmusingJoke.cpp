#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	string s1;cin>>s1;
	bool r=true;
	s.append(s1);
	cin>>s1;
	if(s1.size()!=s.size()){
		r=false;
	}else{
		vector<int> x;
		vector<int> y;
		for(int i=0;i<s.size();i++){
			x.push_back(s[i]);
		}
		for(int i=0;i<s1.size();i++){
			y.push_back(s1[i]);
		}
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		for(int i=0;i<s.size();i++){
			if(x[i]!=y[i]) r = false;
		}
	}
	if(r)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
