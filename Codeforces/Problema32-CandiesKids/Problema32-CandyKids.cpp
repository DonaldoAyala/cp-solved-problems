#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int k;cin>>k;
	int v[n];
	int x=1;
	bool rk=true;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	while(rk){
		rk=false;
		for(int i=0;i<n;i++){
			if(v[i]>0){	
				x=i+1;
				v[i]-=k;
				if(v[i]>0) rk=true;
			}
		}
	}
	cout<<x;
	return 0;
}
