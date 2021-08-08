#include <utility>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	string v[n];
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		if(v[i].size() > 10){
			cout<<v[i][0]<<v[i].size()-2<<v[i][v[i].size()-1]<<"\n";
		}else{
			cout<<v[i]<<"\n";
		}
	}
	return 0;
}
