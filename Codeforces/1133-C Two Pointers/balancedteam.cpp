#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;++i) {
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int i=0,j=0;
	int ans = 0;
	while(true) {
		if(v[j] - v[i] <= 5) {
			j++;
		} else {
			ans = max(ans,j-i);
			i++;
		}
		if( j >= n || i > j) {
			ans = max(ans,j-i);
			break;
		}
	}
	cout<<ans<<'\n';
	return 0;
}