#include <bits/stdc++.h>
using namespace std;
int main(){
	string p;cin>>p;
	int ln=0;
	for(auto l:p){
		if(l=='7' || l=='4') ln++;
	}
	if(ln==4 || ln==7) cout<<"YES";
	else cout<<"NO";
}
