#include <bits/stdc++.h>
using namespace std;

int upper_bound(vector<int> &v, int &target) {
	int l = 0, r = v.size()-1, m = l + (r-l) / 2;
	while( l <= r ) {
		if(v[m] > target) r = m - 1;
		else l = m + 1;
		m = l + (r-l) / 2;
	}
	if( l >= v.size()) return -1;
	return l;
}

int main(){
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end());
	int t; cin>>t;
	cout<<upper_bound(v,t);
	// 16
	// 0 0 0 1 1 1 2 3 4 4 5  5  5  5  6  6 
	// 5
	// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
	return 0;
}