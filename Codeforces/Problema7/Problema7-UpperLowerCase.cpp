#include <bits/stdc++.h>
using namespace std;
int main(){
	string p;cin>>p;
	int M=0,m=0;
	for(int i=0;i<p.size();i++){
		if(isupper(p[i])) M++;
		else m++;
	}
	if(m>=M){
		for(int i=0;i<p.size();i++){
			if(isupper(p[i])) p[i]+=32;
		}
	}else{
		for(int i=0;i<p.size();i++){
			if(islower(p[i])) p[i]-=32;
		}
	}
	cout<<p;
	return 0;
}
