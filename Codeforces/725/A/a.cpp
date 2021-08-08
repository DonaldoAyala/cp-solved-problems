#include <bits/stdc++.h>

using namespace std; 

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	int ib = -1, is = -1, ma = 0, mi = 1000;
	for(int i = 0 ; i < n ; i++ ) {
		if(v[i] > ma) {
			ma = v[i];
			ib = i;
		}
		if(v[i] < mi) {
			mi = v[i];
			is = i;
		}
	}
	int dis = abs(ib - is);
	int left = min(ib, is) + 1;
	int right = n - max(ib , is);
	int res = min(min(left + dis, right + dis), left + right);
	//cout << left << " " << dis << " " << right << endl;
	cout << res << endl;
}

int main () {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
