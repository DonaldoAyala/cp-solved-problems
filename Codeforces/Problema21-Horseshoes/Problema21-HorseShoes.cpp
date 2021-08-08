#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int r=0;
	for(int i=0;i<4;i++){
		cin>>r;
		v.push_back(r);
	}
	sort(v.begin(),v.end());
	r=0;
	for(int i=0;i<3;i++){
		if(v[i]==v[i+1]) r++;
	}
	
	cout<<r;
	return 0;
}
