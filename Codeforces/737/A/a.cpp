#include <bits/stdc++.h>

using namespace std;

void solve () {
	int n; cin >> n;
	vector<int> v(n);
	for (auto &x: v) cin >> x;
	sort(v.begin(), v.end());
	double avg = 0;
	long double sum = 0;
	for (int i = 0; i < n - 1; i++) {
		sum += v[i];
	}
	avg = (double)sum / (n - 1);
	//cout << avg << " " << v[n - 1] << endl;
	printf("%.9f\n", avg + (double)v[n - 1]);
}

int main () {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}	
