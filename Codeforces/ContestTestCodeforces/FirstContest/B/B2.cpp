#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	int t;cin>>t;
	int k;
	int x;
	vector<string> res;
	while(t--){
		vector<int> v1;
		vector<int> v2;
		int pm1=-1,pM1=-1;
		bool r=true;
		cin>>k;
		for(int i=0;i<k;i++){
			cin>>x;
			v1.push_back(x);
			if(x == -1 && pm1 == -1) pm1 = i;
			if(x == 1 && pM1 == -1) pM1 = i;
		}
		for(int i=0;i<k;i++){
			cin>>x;
			v2.push_back(x);
		}
		if(v1[0]==v2[0]){
			for(int i=1;i<k;i++){
				if((v2[i]>v1[i] && pM1 >= i ) || (v2[i]>v1[i] && pM1 == -1)){ 
					r=false;
					break;
				}
				if((v2[i] < v1[i] && pm1 >= i) ||  (v2[i]<v1[i] && pm1 == -1)){
					r=false;
					break;
				}
			}
		}else{
			r = false;
		}
		if(r) res.push_back("YES");
		else res.push_back("NO");
	}
	for(auto x:res)
		cout<<x<<endl;
	return 0;
}
