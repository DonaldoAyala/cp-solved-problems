#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> v;
	int x,y;
	int repeat=0;
	while(n--){
		cin>>x;
		v.push_back(x);	
	}
	x=v[0];
	y=1;
	for(int i=1;i<v.size();i++){
		if(v[i]==x){
			repeat++;
		}
		if(v[i]<x){
		       	x=v[i];
			y=i+1;
			repeat=0;
		}
	}
	if(repeat>0)
		cout<<"Still Rozdil";
	else
		cout<<y;

	return 0;
}
