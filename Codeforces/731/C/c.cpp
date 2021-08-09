#include <bits/stdc++.h>

using namespace std;

void solve() {
	int k, n, m; cin >> k >> n >> m;
	vector<int> a(n), b(m);
	for (auto &x: a) cin >> x;
	for (auto &x: b) cin >> x;
	int i = 0, j = 0;
	
	vector<int> seq;

	while (i < n || j < m) {
		if (i < n && a[i] == 0) {k++, i++; seq.push_back(0);}
		else if (j < m && b[j] == 0) {j++, k++; seq.push_back(0);}
		else if (i < n && a[i] <= k) {seq.push_back(a[i]); i++;}
		else if (j < m && b[j] <= k) {seq.push_back(b[j]); j++;}
		else {cout << -1 << "\n"; return;}
	}
	
	for (auto x: seq) cout << x << " ";
	cout << "\n";
}

int main () {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
