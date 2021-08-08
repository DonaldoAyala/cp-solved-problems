#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int x;
	vector<int> v;
	vector<int> b;
	while(n--) {
		cin>>x;
		v.push_back(x);
	}
	int m;cin>>m;
	while(m--){
		cin>>x;
		b.push_back(x);
	}
	int r=0,aux=0;
	for(int i=0;i<v.size();i++){
		for(int j=0;j<b.size();j++){
			if(b[j]%v[i] == 0){
				if(b[j]/v[i] > aux) {
					aux=b[j]/v[i];
					r=0;
				}
				if(b[j]/v[i] == aux) r++;
			}
		}
	}
	cout<<r;
	return 0;
}
