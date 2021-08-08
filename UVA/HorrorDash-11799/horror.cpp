#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int x=0;
	vector<int> ans;
	for(int j=0;j<t;j++){
		int n;cin>>n;
		int max=0;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x > max) max = x;
		}
		ans.push_back(max);
	}
	for(int i=0 ; i<t ; i++){
		cout<<"Case "<<(i+1)<<": "<<ans[i]<<endl;
	}
	return 0;
}
