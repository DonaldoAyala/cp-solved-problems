#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	string s,b;cin>>s>>b;
	vector<char> a(m);
	vector<char> key(m);

	for(int i = 1;i <= n;i++){
		a[m-i] = s[n-i]; //a[i]
		key[m-i] = (char)( 97 + ((b[m-i]-s[n-i]+26)%26));//Obteniendo a[i-n]
	}
	for(int i=m-n-1 ; i>= n ; i--){
		a[i] = key[i+n];
		key[i] = (char)( 97 + ((b[i]-a[i]+26)%26));
	}
	for(int i=0;i<n;i++){
		a[i] = key[n+i];
	}
	for(auto x:a){
		cout<<x;
	}
	cout<<endl;

	return 0;
}