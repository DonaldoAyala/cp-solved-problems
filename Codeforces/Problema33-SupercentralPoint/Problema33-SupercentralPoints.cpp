#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int re=0;
	int p[n][2];
	for(int i=0;i<n;i++){
		cin>>p[i][0];
		cin>>p[i][1];
	}
	bool l=false,r=false,u=false,d=false;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(p[j][0] == p[i][0]){
				if(p[j][1] > p[i][1]) u = true;
				if(p[j][1] < p[i][1]) d = true;
			}else if(p[j][1] == p[i][1]){
				if(p[j][0] > p[i][0]) r = true;
				if(p[j][0] < p[i][0]) l = true;
			}
		}
		if(u && d && r && l) re++;
		u=false;
		d=false;
		r=false;
		l=false;
	}
	cout<<re;
	return 0;
}
