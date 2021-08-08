#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	string p;cin>>p;
	int c=0;
	for(int i=0;i<p.size()-1;i++){
		if(p[i]==p[i+1]) c++;
	}
	cout<<c;
}
