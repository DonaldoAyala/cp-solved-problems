#include <bits/stdc++.h>
using namespace std;
int main(){
	int p;cin>>p;
	int d[7];
	int day=0;
	for(int i=0;i<7;i++){
		cin>>d[i];
	}
	while(p>0){
		for(int i=0;i<7;i++){
			p-=d[i];
			if(p<=0){
				day = i;
			       break;
			}
		}
	}
	cout<<day+1;
	return 0;
}
