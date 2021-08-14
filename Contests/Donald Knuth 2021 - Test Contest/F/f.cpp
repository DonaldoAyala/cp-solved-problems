#include <bits/stdc++.h>
using namespace std;

int  main () {
	int n; cin >> n;
	vector<pair<char, string>> v(n);

	for (auto &x: v) cin >> x.second;
	
	for (auto &x: v) {
		sort(x.second.begin(), x.second.end(), greater<char>());
		char c = '9';
		for (auto k: x.second) {
			if (k < c) c = k;
		}
		x.first = c;
	}

	sort(v.begin(), v.end());

	for (int i = n - 1; i >= 0; i--) {
		cout << v[i].second;
	}
	cout << endl;
	return 0;
}
