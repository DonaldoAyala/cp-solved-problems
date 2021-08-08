#include <bits/stdc++.h>
using namespace std;
int main(){
	string p;cin>>p;
	if(islower(p[0])){
		p[0]-=32;
	}
	cout<<p;
	return 0;
}
