#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	vector<string> v;
	while(t--){
		int n;cin>>n;
		bool ca = true;
		int p,c;
		int pm=0,cm=0;
		for(int i=0;i<n;i++){
			int cambiop = 0,cambioc=0;
			cin>>p>>c;
			if(c>p){
				ca = false;
			}
			if(p>=pm){
				cambiop = p-pm;
				pm=p;
			}else{
				ca = false;
			}
			if(c>=cm){
				cambioc = c-cm;
				cm = c;

			}else{
				ca = false;
			}
			if(cambiop < cambioc){
				ca = false;
			}
		}
		if(ca) v.push_back("YES");
		else v.push_back("NO");
	}
	for(auto x:v){
		cout<<x<<endl;
	}
	return 0;
}
