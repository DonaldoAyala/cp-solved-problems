#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s; cin >> s;
	char la = 'a';
	int b = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] > la) {la = s[i]; b = i;}
	}
	bool is = (b == 0) || (b == s.size() - 1);
	int l = 0, r = s.size() - 1;
	while (l <= r) {
		if (la == s[l]) {
			l++;
		}
		else if (la == s[r]) {
			r--;
		}
		else {
			is = false;
		}
		la--;
	}
	if (is && la == 'a' - 1) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
}

int main () {
	int t; cin >> t;
	while(t--) solve();
	return 0;	
}
