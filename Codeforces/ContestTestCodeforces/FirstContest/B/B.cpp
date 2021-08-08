#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int k;
	int x;
	vector<int> res;
	while(t--){
		int pm1=0,pM1=0;
		int primero1=0,primero2 = 0;
		cin>>k;
		bool r=true;
		for(int i=0;i<k;i++){
			cin>>x;
			if(x == -1)
				pm1 = i;
			if(x == 1)
				pM1 = i;
			if(i==0) primero1 = x;
		}
		cin>>x;
		primero2 = x;
		if(primero1 == primero2){
			for(int i=1;i<k;i++){
				cin>>x;
				if(
	
			}
		}else{
			r=false;
		}

	}
	return 0;
}
