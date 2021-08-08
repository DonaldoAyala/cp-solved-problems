#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	long long sum = 0;
	for(auto x: v) sum += x;
	if (sum % n != 0) {
		cout << -1 << endl;
		return;
	}
	int target = sum / n;
	int ans = 0;
	for(auto x : v) if(x > target) ans++;
	cout << ans << endl;
}

int main () {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
