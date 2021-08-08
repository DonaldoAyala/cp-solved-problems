#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	int n; cin>> n;
	long long a=0,b=0;
	vector<char> v;
	while(n--){
		cin>>a;
		cin>>b;
		if(a<b) v.push_back('<');
		else if(a > b)  v.push_back('>');
		else v.push_back('=');
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
