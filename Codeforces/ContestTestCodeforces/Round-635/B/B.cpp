#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	vector<string> v;
	while(t--){
		int x,a,l;
		cin>>x>>a>>l;
		while(x>0){
			if(x>20){
				if(a>0){
					a--;
					x = (x/2) +10;
				}else if(l>0){
					l--;
					x -= 10;
				}
			}else{
				if(l>0){
					l--;
					x -= 10;
				}else if(a>0){
					a--;
					x = (x/2) +10;
				}
			}
			if(a == 0 && l==0) break;
		}
		if(x<=0) v.push_back("YES");
		else v.push_back("NO");
	}
	for(auto x:v){
		cout<<x<<endl;
	}
	return 0;
}
