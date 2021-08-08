#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	int n = 0;
	int dato = 0;
	while(t--){
		cin >> n;
		
		while(n){
			if(n%2 != 0){
				n = n-3;
				cout<<7;
			}else{
				n = n-2;
			cout<<1;
			}
		}
		cout<<endl;
	}
}
