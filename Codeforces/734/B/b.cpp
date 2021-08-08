#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s; cin >> s;
	unordered_map<char, int> m;
	for (auto x: s) m[x]++;
	int red = 0, uniq = 0;
	for (auto x: m) if (x.second >= 2) red++; else uniq++;
	red += uniq / 2;
	cout << red << endl;
}

int main () {
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
