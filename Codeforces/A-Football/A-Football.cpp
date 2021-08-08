#include <bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<string,int> um;
	int n;cin>>n;
	int e1=0,e2=0;
	string t1,t2;cin>>t1;
	string x;
	n--;e1++;
	while(n--){
		cin>>x;
		if(x==t1) e1++;
		else{
			e2++;
			t2 = x;
		}
	}
	if(e1>e2) cout<<t1;
	else cout<<t2;
	return 0;
}
