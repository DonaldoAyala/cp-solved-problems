#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	int y;
	vector<int> ans;
	while(t--){
		long long n=0,x=0;
		vector<int> v;
		cin>>n>>x;
		int ca=0;
		for(int i=0;i<n;i++){
			cin>>y;
			v.push_back(y);
		}
		sort(v.begin(),v.end(),greater<int>());
		long long sum=0;
		for(int i=0;i<v.size();i++){
			sum += v[i];
			if(sum >= x*(i+1)) ca++;
		}
		ans.push_back(ca);
	}
	for(auto x:ans){
		cout<<x<<endl;
	}
	return 0;
}
