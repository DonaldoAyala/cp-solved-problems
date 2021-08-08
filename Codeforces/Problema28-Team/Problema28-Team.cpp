#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int x=0;
	int r=0;
	int f=0;
	while(n--){
		for(int i=0;i<3;i++){
			cin>>x;
			r+=x;
		}
		if(r>1) f++;
		r=0;
	}
	cout<<f;
	return 0;
}
